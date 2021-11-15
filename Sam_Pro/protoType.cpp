#include<iostream>
using namespace std;

//// 함수 선언이 main() 아래있으면 에러
//void a();  // prototype 이라 부른다. 껍데기만 만들어놓기
//
//int main() {
//	a();
//}
//
//void a() {
//	
//		cout << "test" << endl;
//	
//}



//두 가지 공통점, 함수를 부르는데 부가적인 시간이 들지 않는다.
// #define a(val) (val) * (val) // 전처리 매크로, 컴파일 전 대체
inline int a(int val) {  // 인라인(inline) 함수 , 컴파일 후 대체

	return val * val;
}

int main(void) {
	cout << a(3+2) << endl;
	// cout << 3+2 * 3+2 << endl; 이 문장이 되어버린다.
	// cout << (3+2) * (3+2) << endl; 위 val에 가로를 쳐줘야 제대로 나옴!
}
