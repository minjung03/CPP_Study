#include <iostream>
using namespace std;

int main() {

	srand((unsigned)time(0));

	int Computer, User;
	int cnt = 0;

	cout << "\n [ Up & Down ������ �����Ͻðڽ��ϱ�? ]" << endl;
	cout << "  - (Y)���� 1 / (N)�ƹ�Ű�� �Է����ּ���" << endl;
	cout << "\n [ User ]\n  - ";
	cin >> User;

	if (User == 1) {

		Computer = rand() % 10 + 1;
		//cout << " [ ��ǻ�� ���� ]\n  - " << Computer << endl;

		cout << "\n\n =====================================================" << endl;
		cout << "  [System] ��ȸ�� �� 3��, ��ǻ���� ���ڸ� ���纸����!" << endl;
		cout << " =====================================================" << endl;
		cout << " (���� ������ 1 ~ 10)\n\n" << endl;

		for (int i = 1; i <= 3; i++) {

			cout << "\t[" << i << "��° ��ȸ] " << "���ڸ� �Է����ּ��� : ";
			cin >> User;

			if (Computer > User) {

				cout << "\n\t- " << User << " ���� UP\n" << endl;

			}
			else if (Computer < User) {
				cout << "\n\t- " << User << " ���� Down\n" << endl;
		
			}
			else {

				cout << "\n =====================================================" << endl;
				cout << "  [System] �����Դϴ�! " << i << "��°�� ���߼̽��ϴ�." << endl;
				cout << "  [System] ������ �����մϴ�." << endl;
				cout << " =====================================================\n" << endl;
				break;

			}

			if (i == 3) {

				cout << "\n =====================================================" << endl;
				cout << "  [System] ��ǻ�Ͱ� ������ ���ڴ� [" << Computer << "]�̾����ϴ�.." << endl;
				cout << "  [System] ������ �����մϴ�." << endl;
				cout << " =====================================================\n" << endl;
				break;
			}
		
		}
	}
	else {
		cout << "\n =====================================================" << endl;
		cout << "  [System] ������ �����մϴ�." << endl;
		cout << " =====================================================\n" << endl;
	}
	
}