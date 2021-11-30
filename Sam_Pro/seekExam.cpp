#include<iostream>
#include<fstream>
using namespace std;

int main() {

	ifstream input("input.txt");

	if (input.fail()) {
		cout << "파일을 여는데 실패" << endl;
		return 1;
	}

	input.seekg(0, ios::end);
	cout << (char)input.get() << endl;

	input.clear();

	input.seekg(5, ios::cur); // 여기가 문제다. 아무 값도 안나옴
	// C++의 스트림에는 eofbit라는 플래그를 가지고 있는데, 파일의 끝에 도달하게 될 경우, 플래그가 켜지게 된다.
	// 이 플래그가 켜진 다음에는 입출력이 작동하지 않는다.
	// => 이를 해제하는 것이 clear()
	cout << (char)input.get() << endl;

	input.close();
}