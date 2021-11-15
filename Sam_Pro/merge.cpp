#include<iostream>
using namespace std;

void merge(int arr[], int start1, int end1, int start2, int end2)
{
    // �� �迭�� �ε����� �� �迭�� �ε��� 
    int i = start1, j = start2;

    // �ӽ� �迭 (������ ����)
    int nArrSize = end2 - start1 + 1;
    int index = 0;
    int* pTemp = (int*)malloc(sizeof(int) * nArrSize);

    // �� �迭�� ������������ pTemp�� ���� 
    while (i <= end1 || j <= end2)
    {
        // �迭 index out of bound ���� ���� 
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

    // pTemp �迭�� ���� arr �迭�� ����
    for (int i = 0; i < nArrSize; i++)
    {
        arr[start1 + i] = *(pTemp + i);
    }

    free(pTemp);
}
void mergeSort(int arr[], int start, int end)
{
    // ���� ���� 
    if (start >= end) return;

    int nMid = (start + end) / 2;

    // ������ �� �迭 = ������ �� �迭�� ���� 2���� �����ϸ鼭 ��ģ ���̴�. 
    mergeSort(arr, start, nMid);
    mergeSort(arr, nMid + 1, end);
    merge(arr, start, nMid, nMid + 1, end);
}
int main() {
    
    // �ΰ��� �迭�� ���� �����ϴ� ��.
        int arr[SIZE] = { 2, 1, 4, 3, 10, 7, 8, 6, 9, 5 };

        printf("���� �� : ");
        for (int i = 0; i < SIZE; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");

        mergeSort(arr, 0, SIZE - 1);

        printf("���� �� : ");
        for (int i = 0; i < SIZE; i++)
        {
            printf("%d ", arr[i]);
        }

        return 0;
    }
