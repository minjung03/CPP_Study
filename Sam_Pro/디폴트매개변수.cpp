#include <iostream>
using namespace std;


int sum(int, int) ;// 프로토 타입은 변수명 안써도 상관없음

// 디폴트 매개변수
int sum(int a = 2, int b = 3, int c = 4, int d = 5) {// 매개변수가 1개 들어올 때 알아서 값을 대체
	return a + b + c + d;
}
//int sum(){
//	return 0;
//}
int main() {

	// 결국 sum 함수를 4개 만든거나 다름없다(아주 간단한 오버로딩)
	cout << sum(2, 3, 5,7) << endl;
	cout << sum(2, 3, 5) << endl;
	cout << sum(3) << endl; 
	
	//cout << sum() << endl; 에러 : 갈 수 있는 곳이 2가지

	// (int a = 2, int b = 3, int c, int d) 는 에러
	// 오른 쪽부터 채워야 한다!

	return 0;
}

int sum(int a, int b) {
	return a + b;
}
