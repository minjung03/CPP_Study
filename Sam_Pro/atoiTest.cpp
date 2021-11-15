#include<iostream>
#include<cstdlib>
using namespace std;

void print(int a, int b) {
	std::cout << a + b << std::endl; 
}

int main() {

	char str[] = "100";
	int a = 200;
	int b = atoi(str); // atoi 는 string를 Interger로 변환 (숫자로 바꾸는 함수)
	print(a, b);
}