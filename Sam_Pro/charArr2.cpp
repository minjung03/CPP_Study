#include <iostream>
using namespace std;

int main() {

	char str[15] = "HELLO WORLD";
	//int strlength = 0;
	int i = 0;

	for (i = 0; str[i] != NULL; i++) {  //이런 방식으로 더 잘 사용

		//strlength++;

	};
	cout << "HELLO WORLD의 문자 길이는 " <<  i << endl;

}