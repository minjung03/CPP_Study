#include <iostream>
using namespace std;
#define INWON 3 // 원래 5
#define SUBJ 4 // 과목 수

string subj_name[] = { "국어" , "영어" , "수학" , "JAVA" ,"C" }; // 전역으로 주기

class Student {

private:
	char hakbun[4];
	int rank; // 석차는 단위가 학급이거나 학년이어야 된다. 개인 클래스에서 만들지는 않음
	char name[10];
	char grade;

	/* 
	int kuk,eng,mat;
	int tot; 
	*/
	int subj[SUBJ + 1];
	double avg;

	

public:

	Student() {
		subj[SUBJ] = 0;
		// 생성할 때 마다 rank방은 1로 지정
		rank = 1;
		cout << "생성" << endl;
	}
	void input(int);
	void calc();
	void print();

	int getTot() { // tot 점수 가져오기
		return subj[SUBJ]; // 맨 마지막 방이 total 방이 된다.
	}

	int getRank() {
		return rank;
	}

	void addRank() {
		rank++;
	}

	~Student() {
		cout << "소멸" << endl;
	}
};

void Student::input(int i) {

	cout << "\n" << i + 1 << "번째 학생 입력" << endl;

	cout << "학번 입력 : ";
	cin >> hakbun;

	cout << "이름 입력 : ";
	cin >> name;

	for (int i = 0; i < SUBJ; i++) {

		cout << subj_name[i] << " 입력 : "; // 국어 영어 수학 이라 바꿔주기
		cin >> subj[i];
		while (subj[i] < 1 || subj[i]>100) {

			cout << subj_name[i] << " 다시 입력 : ";
			cin >> subj[i];
		}
	}


}
void Student::print() {

	cout << hakbun << "\t" << name << "\t";
	for (int i = 0; i < SUBJ + 1; i++) {
		cout << subj[i] << "\t";
	}
	cout << avg << "\t" << grade << "\t" << rank << "\n";
}
void Student::calc() {

	for (int i = 0; i < SUBJ; i++) {
		subj[SUBJ] += subj[i];
	}

	avg = (double)subj[SUBJ] / SUBJ;

	switch ((int)avg / 10) {  // 스위치는 조건이 *정수형이여야 한다.
	case 10: case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F'; break;
	}
}

// 전역변수로 선언도 가능 (일반 함수보다 위에 정의)
// int INWON = 3;

void ranking(Student* stud) {

	// 개인 클래스에서의 메소드가 아님
	// 석차 방이 다 있지만, 개개인을 처리하는게 아니므로?
	// 멤버 함수는 될 수 없다는 것 잘 기억!!

	// 랭크방을 다 1로 주고 시작. 
	// 하나의 점수를 다른 점수들과 비교해서 더 작은 점수 방을 증가
	// 남은 방 끼리 반복해서 비교.

	for (int i = 0; i < INWON ; i++) {
		for (int j = i + 1; j < INWON; j++) {

			if (stud[i].getTot() < stud[j].getTot()) {
				stud[i].addRank();
			}
			else if (stud[i].getTot() > stud[j].getTot()) {
				stud[j].addRank();
			}
			else {
				break;
			}
		}
	}
}

int main() {

	/*
	int INWON;
	cin >> INWON;
	*/

	//Student stu[INWON]; // 정적

	// 동적으로 바꾸기 2가지 방법
	
	// 1.
	Student* stu = new Student[INWON]; // 생성자 호출됨 // 객체 담을 그릇까지 생성
	// INWON을 입력받을거라면 이 방법 사용
	cout << sizeof(stu) << endl;
	cout << sizeof(stu[0]) << endl; // 인원 3, SUBJ 4 일때 56


	// 2.
	/*
	Student* stu[INWON]; // 생성자 호출 안함 // 얘는 아직 거기까지 안감 // for문돌려서 stu[i] = new Student; 해줘야함
	// INWON을 입력받을시에는 이방법 불가
	for (int i = 0; i < INWON; i++) {
		stu[i] = new Student;
	}
	cout << sizeof(stu) << endl; //12
	cout << sizeof(*stu[0]) << endl; //56 or 48
	*/

	// 왜 56들이 나올까? => 교과서 141p 메모 확인
	
	/*
	for (int i = 0; i < INWON; i++) {
		// cout << i+1 << "번째 학생 입력";
		stu[i].input(i); // 여기서 stu[i]로 불렀으니 메소드 안에 stu[i]. 같은건 필요 없다.
		stu[i].calc();
	}

	ranking(stu); // stu 배열은 방이 있고, 각 방에서 한번 따라가야 있다 (포인터란 말)

	for (int j = 0; j < INWON; j++) {
		stu[j].print();
	}
	*/
	return 0;
}