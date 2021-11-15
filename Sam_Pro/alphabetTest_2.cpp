#include <iostream>
using namespace std;

// a,A가 1부터 시작하는 프로그램
int main() {

	char ap;
	
	// 알파벳이 아니었을 때 처리까지 해주기 (기본적으로 하자!)

	cout << "A(a)가 1부터 시작합니다." << endl;
	cout <<  "알파벳 입력 : " ;
	cin >> ap;

	//좋은 프로그램이란 남들이 봐도 한눈에 알아볼 수 있는 프로그램**
	// cout << toupper(ap) << endl;  // 대문자로 바꿔버리는 함수 toupper()  이렇게 함수를 사용하면 훨씬 간단해진다!
	// isalpha() 알파벳이냐 물어보는 함수, 이걸 사용하고 맞으면 toupper() 사용해 'A'빼기+1 아니면 문장 출력  -> 프로그램이 엄청 간단해진다.

	if (isupper(ap)) {  // 대문자 물어보는 함수 isupper()
		
		cout << ap - 'A' + 1 << endl;
	}
	else if(islower(ap)) {   //  소문자니 물어보는 함수 islower()

		cout << ap - 'a' + 1 << endl;
	}
	else {
		cout << "알파벳이 아닙니다.";
	}

}