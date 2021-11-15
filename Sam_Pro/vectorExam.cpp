#include<iostream>
#include<vector>
using namespace std;

const int num = 5;

struct Book {
	string title;
	int grade;	
};

void fillList(Book& Booklist) {

	cout << "책 제목 입력 : ";
	cin >> Booklist.title;

	cout << "책 등급 입력 : ";
	cin >> Booklist.grade;

}


int main() {

	vector<Book> Booklist(num);

	for (int i = 0; i < num; i++) {
		fillList(Booklist[i]);
	}

	cout << "============================" << endl;
	for (int i = 0; i < num; i++) {
		cout << "책 제목 : " << Booklist[i].title << ". 책 등급 : " << Booklist[i].grade << endl;
	}

	return 0;
}