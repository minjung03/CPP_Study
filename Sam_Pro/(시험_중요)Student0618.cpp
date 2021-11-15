#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


// 시험범위 보고오기**
class Student {

public:

	int nNo;
	char *szName; //char szName[20]; // 이런 식이면 방은 안잡아도 ok 바로 값 복사
	// 이런 식이면 방을 잡아준다음 strcpy 사용해서 값 복사!

	Student() {
		nNo = 0;
		szName = 0;
		cout << "매개변수 없는 생성" << endl;
	}
		// 다시한번 점검!
	Student(Student &a) : nNo(a.nNo){  //복사 생성자? (내 설명)

		// : nNo(a.nNo) == this->nNo = a.nNo; 두 문장은 같다

		szName = new char[strlen(a.szName) + 1]; // + 1은 null 값
		strcpy(szName, a.szName);
		cout << "매개변수 1개 생성" << endl;
	}

	Student(int no, const char* pName) {

		nNo = no;
		szName = new char[strlen(pName) + 1];
		strcpy(szName, pName);

		cout << szName << " 매개변수 2개 생성" << endl;
	}

	~Student() {
		cout << "번호 : " << nNo << " 이름 : " << szName << "가 소멸되었습니다" << endl;
		// 한줄로 정리~
		// cout << "번호 : " << nNo << "가 해제되었습니다" << endl;
		// cout << szName << "소멸" << endl;

		delete[] szName; //szName은 배열이니 delete[] 하기
	}

	void princtStudent() {

		if (szName != nullptr) {
			cout << "번호 : " << nNo << " 이름 : " << szName << endl;
		}
		//cout << "번호 : " << nNo << " 이름 : " << szName << endl;
	}

	// 객체를 가지고 만든 프로그램은 거의 다 리턴타입에 &가 붙어있다!
	Student& copy(Student &a) {  // &는 주소로도 쓰지만, 콜 바이 레퍼런스?로도 사용한다. Student& 가 그렇다!

		if (&a != this) { // this는 포인터이니.

			this->nNo = a.nNo; // 임시 객체인 a의 값을 복사하는 것(내 설명)
			
			if (this->szName != NULL) { // szName에 값이 있다면(내 설명)

				cout << this->szName << " 소멸" << endl;
				delete[] this->szName;  // 소멸시키고(내 설명)
			}
			this->szName = new char[strlen(a.szName) + 1]; // 임시 객체 a의 값으로 다시 생성(내 설명)
			// 새로운 방을 잡아주어 a, b의 데이터 주소가 따로 잡히게 만든다.(**)
			strcpy(this->szName, a.szName); // 자기 자신을 카피할 때 문제 생김

			cout << this->szName << " 생성" << endl;

		}
		return *this; // 대입이 여러번 일어날 것을 대비하여 이렇게 리턴 값을 준다!
	}

	Student& operator=(Student &a) { // &는 주소로도 쓰지만, 콜 바이 레퍼런스?로도 사용한다. Student& 가 그렇다!
	// operator= 연산자 오버로딩 : 지금까지 없던 타입을 만들어 사용할 시 이걸 직접 만들어 사용해주어야 한다.
	// = 뒤에 Student이 왔을 때 행동하는 함수를 만든 것.
	// 	= 뒤에 따라 각각 다른 일을하니 오버로딩이 가능하다.

		/* 위 copy와 하는일이 똑같으니 copy를 부르기
		
		this->nNo = a.nNo;
		this->szName = new char[strlen(a.szName) + 1];
		// 새로운 방을 잡아주어 a, b의 데이터 주소가 따로 잡히게 만든다.
		strcpy(this->szName, a.szName);
		*/

		return copy(a);
	}
};

int main() {

	// 06-14 실습 
	Student a(1, "홍하나");
	Student b;
	a.princtStudent();
	b.princtStudent();

	//b = a; // 값만 그대로 '얕은 복사' // 포인터일 때 이렇게 사용시 같은 주소를 사용하여 delete시 문제 발생
	//b.copy(a);

	b.operator=(a); // b = a; 와 똑같다

	cout << endl;
	a.princtStudent();
	b.princtStudent();

	strcpy(b.szName, "홍길동"); // b의 szName이 홍길동으로 변경

	cout << endl;
	a.princtStudent();
	b.princtStudent();

	a = a;

	cout << endl;
	a.princtStudent();

	// 06-18 실습 
	Student c(2,"장발장");

	c = a;

	cout << endl;
	a.princtStudent();
	c.princtStudent();

	Student d;
	Student e;

	d = e = a; // d.operator=(e.operator=(a)); 와 같은 뜻.
	// 우측에서 좌측으로 들어감
	
	cout << endl;
	d.princtStudent();
	e.princtStudent();

	Student f = a; // = Student f(a); 이런 생성자가 없으니 에러가 난다!
	// 에러 안남! 매개변수 1개짜리 생성자 만들었다~

	cout << "---"<<endl;
	f.princtStudent();
	a.princtStudent();
	cout << "---" << endl;

	/*
	strcpy(a.szName, "홍길동");
	a.princtStudent(); // a = b 해서 할당해줬지만, a값을 바꿨다고 b값이 바뀌지는 않음
	b.princtStudent();
	*/



	/*
	// 06-04 실습
	Student a(1, "강하나"); // 정적 (stack)
	Student* p = new Student(2, "홍하나"); // 동적 (heap)


	Student stu[10]; // 정적 (stack)

	stu[0].nNo = 3;
	strcpy(stu[0].szName, "심청이");
	stu[1].nNo = 4;
	strcpy(stu[1].szName, "대장한");


	Student* stu1 = new Student[10]; // 동적 (heap)

	// 접근을 2가지 방법으로 할 수있다.
	stu1[0].nNo = 5;  
	strcpy(stu1[0].szName, "연흥부");
	stu1[1].nNo = 6;
	strcpy(stu1[1].szName, "홍길동");

	// +를 하게되면 클래스의 사이즈 만큼 뛰어넘는다.
	(stu1+2)->nNo = 7; // stu1[2].nNo = 7; 과 똑같은 것
	strcpy(stu1[1].szName, "신데렐라");
	(stu1 + 2)->nNo = 8;
	strcpy(stu1[1].szName, "백설공주");

	delete p;
	delete[] stu1;
	*/

	//Student a(1,"홍하나") / b=a / a=a / c=a / d=e=a 에서 뭘했는지 단계별로 잘 정리하기..(조금씩 고쳤었다!)

	return 0;
};