#include<iostream>
using namespace std;

#define multiple_define(A) ((A)*(A))
int multiple_inline(int A);  // 여기에는 inline을 붙이던 아니던 상관 없음!

int main() {

	int a = 3;
	cout << "inline 함수의 값은" << multiple_inline(++a) << endl;// 16

    a = 3;
	cout << "define 함수의 값은" << multiple_define(++a) << endl; //25
	                                //((++a)*(++a)) 로 대체 된다 

}
inline int multiple_inline(int A) {
	// 한 줄짜리 간단한 함수만 inline으로 작성!
	return A * A; // 4*4
}