
#define _CRT_SECURE_NO_WARNINGS  
// 이 문장 써주자. stanf도 이거 안쓰면 안될 때 있음

#include<iostream>
using namespace std;

int main() {

	// char 만 쓰면 오류난다!! const 꼭 써주기
	const char* a = "Mirim School"; 
	const char* b = "Mirim Program";

	cout << strlen(a) << endl; //12
	cout << strlen(b) << endl; //13

	char c[10];
    strcpy(c,"My Home");
	cout << c << endl;

	cout << strcmp(a, b) << endl; // 1 (a가 더 크다)
	// 공백이랑도 비교함!
	return 0;
}