#include<iostream>
#include <fstream>
#include <iomanip> // setw() 공백 사용 함수
using namespace std;

int main(){
	char empNum[20];
	char empName[20];
	char position[20];

	ofstream fout("info.txt", ios::app);

	for (int i = 0; i < 3; i++ ) {
		cout << i + 1 << "번 째 사람의 사번을 입력하세요 =>";
		cin >> empNum;
		cout << "이름을 입력하세요 =>";
		cin >> empName;
		cout << "직급을 입력하세요 =>";
		cin >> position;

		fout << empNum << setw(10) << empName << setw(22) << position << endl;
		cout << empNum << setw(10) << empName << setw(22) << position << endl;

		cout << endl;

	}
	fout.close();

	return 0;
}