#include<iostream>
#include<vector>
using namespace std;

 // const int num = 5;

struct Book {
	string title;
	int grade;
};

bool fillList(Book& Booklist) {

	cout << "å ���� �Է� : ";
	cin >> Booklist.title;

	if (Booklist.title == "quit") return false;

	cout << "å ��� �Է� : ";
	cin >> Booklist.grade;
	cout << "\n";

	return true;
	// ������ while ���ǹ��� üũ�ϱ� ���� false, true�� �� ��ȯ
}

void ShowList(Book& Booklist) {
	cout << "å ���� : " << Booklist.title << ". å ��� : " << Booklist.grade << endl;
}


int main() {

	vector<Book> Booklist; // ����� ��. ���� �Ҵ� �ϰ� ���� ��
	Book temp;

	while (fillList(temp)) {
		Booklist.push_back(temp); // �������� ���͸� �Ҵ��� �� �� �ֱ�
	}

	// size() �̿��
	int num = Booklist.size(); // ũ��(�� ���� ������) �˾ƺ���
	/*for (int i = 0; i < num; i++) {
		cout << "å ���� : " << Booklist[i].title << ". å ��� : " << Booklist[i].grade << endl;
	}*/


	// auto& �̿��
	/*cout << "\n=============auto&===============" << endl;
	for (auto& e : Booklist) { // �̷� �����ε� ��� ����**
		cout << "å ���� : " << e.title << ". å ��� : " << e.grade << endl;
	}*/


	// iterator �̿��
	cout << "\n=============iterator===============" << endl;
	vector<Book>::iterator ptr;
	for (ptr = Booklist.begin(); ptr != Booklist.end(); ptr++) {
		ShowList(*ptr); // �ٷ� ����� �� ���� ������ �Լ� ������ ȣ��
	}


	// ��� ��Ű��
	vector<Book> old_List(Booklist);  // ���� ������ (Booklist������ �״�� ��������) * ���� �����̱���
	cout << "\n=============old_List===============" << endl;
	for (auto& e : old_List) {
		cout << "å ���� : " << e.title << ". å ��� : " << e.grade << endl;
	}


	// å �����ϱ� (����, ���� �� ��� �صα� ��!)
	if (num >= 2) {
		 Booklist.erase(Booklist.begin());
		 Booklist.erase(Booklist.end()-1); // end�� �� -1 �ؼ� ���! end()�� ������ �������� '��'�� ����Ű�� �ֱ� ����
	}

	cout << "\n=============Booklist===============" << endl;
	for (auto& e : Booklist) {
		cout << "å ���� : " << e.title << ". å ��� : " << e.grade << endl;
	}

	return 0;
}