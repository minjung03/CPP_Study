#include<iostream>
using namespace std;

const int OPEN = 1;
const int CLOSE = 2;

class Door {

private:
	int state;

public:

	Door();

	void Open() {
		state = OPEN;
	}
	void Close() {
		state = CLOSE;
	}
	void ShowState() {
		cout << state << endl;
	}
};
Door::Door() {

}
int main() {

	Door d;
	//d.state = OPEN: // 엑세스 할 수 없다. 접근에 문제가 있다.
	d.Open(); // 위 문장 대체. d의 state를 open해야하니 d를 명시
	d.ShowState();

	return 0;
}