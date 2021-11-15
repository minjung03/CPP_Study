#include <iostream>
using namespace std;

int main() {

	char* sce = nullptr;
	char dest[] = "same";

	sce = dest;
	*sce = 'g';

	cout << sce << endl;
	cout << *sce + 2 << endl; // *sce 의 아스키코드 + 2 값 출력
	cout << *(sce+2) << endl; // 가로 잘 써주기
}