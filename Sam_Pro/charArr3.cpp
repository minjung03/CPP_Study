#include <iostream>
using namespace std;

int main() {

	char* sce = nullptr;
	char dest[] = "same";

	sce = dest;
	*sce = 'g';

	cout << sce << endl;
	cout << *sce + 2 << endl; // *sce �� �ƽ�Ű�ڵ� + 2 �� ���
	cout << *(sce+2) << endl; // ���� �� ���ֱ�
}