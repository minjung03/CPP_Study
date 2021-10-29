#include<iostream>
using namespace std;



void jungjuk() {

	static int a = 0;
	cout << "정적 변수 a는 " << a << endl;
	a++;
}

int main() {

	jungjuk(); // a = 0
	jungjuk(); // a = 1
	jungjuk(); // a = 2

	//cout << a << endl; // 지역, 정적변수는 main()에서 출력 불가능


	const int b = 3; //상수형 변수(값이 바뀌지 않는다)
	// b = 5;   에러 발생 b는 상수형 변수
	
	return 0;

}