#include <iostream>
using namespace std;

int main() {

	srand((unsigned)time(0));

	int Computer, User;
	int cnt = 0;

	cout << "\n [ Up & Down 게임을 시작하시겠습니까? ]" << endl;
	cout << "  - (Y)숫자 1 / (N)아무키나 입력해주세요" << endl;
	cout << "\n [ User ]\n  - ";
	cin >> User;

	if (User == 1) {

		Computer = rand() % 10 + 1;
		//cout << " [ 컴퓨터 숫자 ]\n  - " << Computer << endl;

		cout << "\n\n =====================================================" << endl;
		cout << "  [System] 기회는 총 3번, 컴퓨터의 숫자를 맞춰보세요!" << endl;
		cout << " =====================================================" << endl;
		cout << " (수의 범위는 1 ~ 10)\n\n" << endl;

		for (int i = 1; i <= 3; i++) {

			cout << "\t[" << i << "번째 기회] " << "숫자를 입력해주세요 : ";
			cin >> User;

			if (Computer > User) {

				cout << "\n\t- " << User << " 보다 UP\n" << endl;

			}
			else if (Computer < User) {
				cout << "\n\t- " << User << " 보다 Down\n" << endl;
		
			}
			else {

				cout << "\n =====================================================" << endl;
				cout << "  [System] 정답입니다! " << i << "번째로 맞추셨습니다." << endl;
				cout << "  [System] 게임을 종료합니다." << endl;
				cout << " =====================================================\n" << endl;
				break;

			}

			if (i == 3) {

				cout << "\n =====================================================" << endl;
				cout << "  [System] 컴퓨터가 생각한 숫자는 [" << Computer << "]이었습니다.." << endl;
				cout << "  [System] 게임을 종료합니다." << endl;
				cout << " =====================================================\n" << endl;
				break;
			}
		
		}
	}
	else {
		cout << "\n =====================================================" << endl;
		cout << "  [System] 게임을 종료합니다." << endl;
		cout << " =====================================================\n" << endl;
	}
	
}