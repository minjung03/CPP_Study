#include <iostream>
using namespace std;

// A가 1부터 시작하는 프로그램
int main() {

	char a;
	
	cout << "문자 입력 : ";
	cin >> a;

	cout << (int)a - 'A'-1 << endl;

}