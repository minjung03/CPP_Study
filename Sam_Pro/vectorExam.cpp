#include<iostream>
#include<vector>
using namespace std;

const int num = 5;

struct Book {
	string title;
	int grade;	
};

void fillList(Book& Booklist) {

	cout << "å ���� �Է� : ";
	cin >> Booklist.title;

	cout << "å ��� �Է� : ";
	cin >> Booklist.grade;

}


int main() {

	vector<Book> Booklist(num);

	for (int i = 0; i < num; i++) {
		fillList(Booklist[i]);
	}

	cout << "============================" << endl;
	for (int i = 0; i < num; i++) {
		cout << "å ���� : " << Booklist[i].title << ". å ��� : " << Booklist[i].grade << endl;
	}

	return 0;
}