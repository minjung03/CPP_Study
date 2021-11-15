#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Book {
	string title;
	int grade;
};

bool fillList(Book& Booklist) {

	cout << "å ���� �Է� : ";
	// cin >> Booklist.title; // ���� �Ұ����ϴ�
	getline(cin, Booklist.title); // �̷������ε� ��밡��! ���⸦ �ϰ� ���� �� - �� �� �о����
								  // #include <string> ��� ����ؾ���!

	if (Booklist.title == "quit") return false;

	cout << "å ��� �Է� : ";
	cin >> Booklist.grade;
	cin.get(); // getline() ����ϸ鼭 ���� ����� ������ ���� �Ա�

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


	/*
	// å �����ϱ� - erase (����, ���� �� ��� �صα� ��!)
	if (num >= 2) {
		 Booklist.erase(Booklist.begin()); // ó�� �� �����ϱ�
		 Booklist.erase(Booklist.end()-1); // end�� -1 �ؼ� ���! end()�� ������ �������� '��'�� ����Ű�� �ֱ� ����
	}

	cout << "\n=============Booklist===============" << endl;
	for (auto& e : Booklist) {
		cout << "å ���� : " << e.title << ". å ��� : " << e.grade << endl;
	}
	*/

	// å �����ϱ� - erase (���� ������)
	if (num >= 5) {
		Booklist.erase(Booklist.begin() + 1, Booklist.end()); // ó�� �͸� �����Ե�
		// �Ű����� 2���� ����! *���� �ÿ��� end()�� -1 ���ص� ok
	}

	cout << "\n===========Booklist erase===========" << endl;
	for (auto& e : Booklist) {
		ShowList(e);
	}

	// å �����ϱ� - insert
	Booklist.insert(Booklist.begin(), old_List.begin()+1, old_List.begin()+2);
	// old_List.begin()+1, old_List.begin()+2 => �ϳ��� �÷��� ���� 
	// ::��ġ:: >   begin()+1 | ������ | begin()+2 | ������....
	cout << "\n==========Booklist insert===========" << endl;
	for (auto& e : Booklist) {
		ShowList(e);
	}


	// ��ȯ�ϱ� - swqp (Booklist�� old_list ������ �ٲٱ�)
	cout << "\n*************list swap**************" << endl;
	Booklist.swap(old_List);

	cout << "\n=============Booklist===============" << endl;
	for (auto& e : Booklist) ShowList(e);
	
	cout << "\n=============old_list===============" << endl;
	for (auto& e : old_List) ShowList(e);


	return 0;
}