#include<iostream>
using namespace std;

int main() {

	char str[] = "I will go to Europe";
	int i;

	for (i = 0; str[i] != NULL; i++) {
		cout << "�� ��ȣ : " << i+1 << " " <<  str[i] << endl;
	}
	cout << i << endl;
}