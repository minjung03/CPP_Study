#include<iostream>
using namespace std;

void merge(int arr[], int start1, int end1, int start2, int end2)
{
    // 앞 배열의 인덱스와 뒤 배열의 인덱스 
    int i = start1, j = start2;

    // 임시 배열 (정렬을 위한)
    int nArrSize = end2 - start1 + 1;
    int index = 0;
    int* pTemp = (int*)malloc(sizeof(int) * nArrSize);

    // 두 배열을 오름차순으로 pTemp에 저장 
    while (i <= end1 || j <= end2)
    {
        // 배열 index out of bound 오류 방지 
        if (i > end1)
        {
            *(pTemp + index++) = arr[j++];
        }
        else if (j > end2)
        {
            *(pTemp + index++) = arr[i++];
        }
        else if (arr[i] > arr[j])
        {
            *(pTemp + index++) = arr[j++];
        }
        else
        {
            *(pTemp + index++) = arr[i++];
        }
    }

    // pTemp 배열을 본래 arr 배열에 복사
    for (int i = 0; i < nArrSize; i++)
    {
        arr[start1 + i] = *(pTemp + i);
    }

    free(pTemp);
}
void mergeSort(int arr[], int start, int end)
{
    // 종료 조건 
    if (start >= end) return;

    int nMid = (start + end) / 2;

    // 정렬이 된 배열 = 정렬이 된 배열의 절반 2개를 정렬하면서 합친 것이다. 
    mergeSort(arr, start, nMid);
    mergeSort(arr, nMid + 1, end);
    merge(arr, start, nMid, nMid + 1, end);
}
int main() {
    
    // 두개의 배열을 합쳐 정렬하는 것.
        int arr[SIZE] = { 2, 1, 4, 3, 10, 7, 8, 6, 9, 5 };

        printf("정렬 전 : ");
        for (int i = 0; i < SIZE; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");

        mergeSort(arr, 0, SIZE - 1);

        printf("정렬 후 : ");
        for (int i = 0; i < SIZE; i++)
        {
            printf("%d ", arr[i]);
        }

        return 0;
    }
