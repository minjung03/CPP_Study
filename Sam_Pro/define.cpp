#include<iostream>
using namespace std;
#define Mul(a,b) (a)*(b)  // a*b 라고 작성하면 2+1*3+4 로 대체된다(그대로) => 9

/* //함수를 사용하면 오래 걸린다.
int mul(int a, int b) {

	return a * b;
}
*/

int main() {
	cout << Mul(2+1,3+4) << endl;

}