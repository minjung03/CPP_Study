#include<iostream>
#include<vector>
using namespace std;

 // const int num = 5;

struct Book {
	string title;
	int grade;
};

bool fillList(Book& Booklist) {

	cout << "책 제목 입력 : ";
	cin >> Booklist.title;

	if (Booklist.title == "quit") return false;

	cout << "책 등급 입력 : ";
	cin >> Booklist.grade;
	cout << "\n";

	return true;
	// 메인의 while 조건문을 체크하기 위해 false, true로 값 반환
}

void ShowList(Book& Booklist) {
	cout << "책 제목 : " << Booklist.title << ". 책 등급 : " << Booklist.grade << endl;
}


int main() {

	vector<Book> Booklist; // 몇개인지 모름. 동적 할당 하고 싶을 때
	Book temp;

	while (fillList(temp)) {
		Booklist.push_back(temp); // 동적으로 벡터를 할당할 때 값 넣기
	}

	// size() 이용법
	int num = Booklist.size(); // 크기(몇 개가 들어갔는지) 알아보기
	/*for (int i = 0; i < num; i++) {
		cout << "책 제목 : " << Booklist[i].title << ". 책 등급 : " << Booklist[i].grade << endl;
	}*/


	// auto& 이용법
	/*cout << "\n=============auto&===============" << endl;
	for (auto& e : Booklist) { // 이런 식으로도 사용 가능**
		cout << "책 제목 : " << e.title << ". 책 등급 : " << e.grade << endl;
	}*/


	// iterator 이용법
	cout << "\n=============iterator===============" << endl;
	vector<Book>::iterator ptr;
	for (ptr = Booklist.begin(); ptr != Booklist.end(); ptr++) {
		ShowList(*ptr); // 바로 출력을 할 수가 없으니 함수 생성해 호출
	}


	// 백업 시키기
	vector<Book> old_List(Booklist);  // 복사 생성자 (Booklist내용을 그대로 가져오니) * 얕은 복사이긴함
	cout << "\n=============old_List===============" << endl;
	for (auto& e : old_List) {
		cout << "책 제목 : " << e.title << ". 책 등급 : " << e.grade << endl;
	}


	// 책 삭제하기 (삽입, 삭제 전 백업 해두기 꼭!)
	if (num >= 2) {
		 Booklist.erase(Booklist.begin());
		 Booklist.erase(Booklist.end()-1); // end는 꼭 -1 해서 사용! end()는 마지막 데이터의 '뒤'를 가르키고 있기 때문
	}

	cout << "\n=============Booklist===============" << endl;
	for (auto& e : Booklist) {
		cout << "책 제목 : " << e.title << ". 책 등급 : " << e.grade << endl;
	}

	return 0;
}