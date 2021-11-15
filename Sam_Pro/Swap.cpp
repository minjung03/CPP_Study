#include <iostream>
using namespace std;

//int sum(int, int);
//double sum(int, int); 
// 매개 변수가 같은 메소드는 오버로딩이라 할 수없다.
// 어디로 찾아가야 할 지 모르기 때문에 에러 발생

void swapV(int a, int b) {
	int tmp;
	tmp = a; // tmp = 10
	a = b;  // a = 20
	b = tmp; // b = 10
};
void swapP(int* a, int* b) {
	int tmp;
	tmp = *a; // a의 내용을 tmp에 넣어라
	*a = *b;  // b의 내용을 a에 넣어라
	*b = tmp; // tmp의 내용을 b에 넣어라
};
void swapR(int& a, int& b) { // 얘가 swap하기 제일 좋음(실제로 많이 쓴다)
	int tmp;
	tmp = a; 
	a = b; 
	b = tmp;
};

int main() {

	int a = 10;
	int b = 20;

	//swapV(a, b);
	//cout << a << "  " << b << endl;  // 바꾼 a, b 값을 버리고 돌아온다

	//swapP(&a, &b); // 주소값을 넘겨준다.
	//cout << a << "  " << b << endl; // 바뀐 a, b 값을 그대로 가져온다 

	swapR(a, b); // call by Value와 모양이 거의 같다.
	cout << a << "  " << b << endl;  
	// 위 swaP의 20 10 값이 또 바뀌어서 10 20으로 출력
}