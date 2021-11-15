#include<iostream>
#include <string>
using namespace std;



// 정적 할당 (new 사용 X)
// 특징 
// 1. 자동 delete
// 2. 접근 시에 dot연산자(.)을 사용
// 3. 매개 변수 없는 생성자를 호출 시 -> ()를 적지 않는다!! ** 이게 제일 중요**

// 동적 할당(new 사용 O)
// 특징 
// 1. delete 명시 (소멸자에서 delete 해주어야한다!)
// (new 개수와 맞게 delete 하기!)
// 2. 접근 시에 화살표 연산자(->)를 사용
// 3. 매개 변수 없는 생성자 호출 시 -> ()
//
// 순서
// 생성 (부모 -> 자식)
// 소멸 (자식 -> 부모)




// 중복되는 부분을 부모 클래스로 만들기
// **부모 클래스는 상속 받을 클래스보다 위에 작성**
class Shape {

protected:
	int x, y, width, height;
	string name;

public:
	Shape() : x(0), y(0), width(0), height(0) { // 매개변수 초기화 ex) : 멤버변수(매개변수(초기값)) , ...
		cout << "도형 생성자" << endl;
	}
	Shape(int x, int y, int w, int h) : x(x), y(y), width(w), height(h){ 
		cout << "매개변수 도형 생성자" << endl;
	}

	// ** 부모 소멸자는 거의 100% virtual을 붙여 사용한다
	virtual ~Shape() {  // virtual <- 자신이 무엇으로 만들어진건지 알아서 찾아간다
		cout << "도형 소멸자" << endl << endl;
	}

	// 부모 클래스의 메소드를 오버라이딩 한 것도 거의 virtual을 붙여 사용한다
	virtual void Draw() {  // virtual <- 자신이 무엇으로 만들어진건지 알아서 찾아간다
		cout << "도형을 그립니다" << endl;
		cout << "x : " << x << ", y : " << y << ", width : " << width << ", height : " << height << endl;
	}
};

class Rectangle : public Shape {
private:
	int k;
public:
	Rectangle() :Shape() {   // :Shape()은 사실 안써도 ok. 기본적으로 부모 생성자에 가기때문에
		k = 0;
		cout << "사각형 생성자" << endl;
	}
	Rectangle(int x, int y, int width, int height, int k) :Shape(x, y, width, height) {  // 부모 생성자 호출  ex) : 부모클래스 이름(매개변수)
		this->k = k; // 부모 쪽에는 없으니 여기서 초기화
		cout << "매개변수 사각형 생성자" << endl;
	}
	~Rectangle() { 
		cout << "사각형 소멸자" << endl; 
	}

	void Draw() {
		cout << "사각형을 그립니다" << endl;
		cout << "x : " << x << ", y : " << y << ", width : " << width << ", height : " << height << endl;
		cout << "k : " << k << endl;
	}
};

class Ellipse : public Shape {

public:
	Ellipse() :Shape() { 
		cout << "타원 생성자" << endl;
	}
	Ellipse(int x, int y, int width, int height) :Shape(x, y, width, height) {
		cout << "매개변수 타원 생성자" << endl;
	}
	~Ellipse() {
		cout << "타원 소멸자" << endl; 
	}

	void Draw() {
		cout << "타원을 그립니다" << endl;
		cout << "x : " << x << ", y : " << y << ", width : " << width << ", height : " << height << endl;
	}
};

class Triangle : public Shape {

public:
	Triangle() :Shape() { 
		cout << "삼각형 생성자" << endl; 
	}
	Triangle(int x, int y, int width, int height) :Shape(x, y, width, height) { 
		cout << "매개변수 삼각형 생성자" << endl; 
	}
	~Triangle() { 
		cout << "삼각형 소멸자" << endl;
	}

	void Draw() {
		cout << "삼각형을 그립니다" << endl;
		cout << "x : " << x << ", y : " << y << ", width : " << width << ", height : " << height << endl;
	}
};

int main() {

	// 수행평가를 이런 식으로 볼 것이다. 정말 중요**
	// 아래 형태 잘 봐두기

	// 학교 프로그램이라 치면
	// Person* rs2[6];
	// rs2[0] = new Student();
	// rs2[1] = new Teacher();
	// 이런 느낌?
	// 왜 사용하는지 개념을 이해 못하면 많이 어려울꺼다. 열심히 공부하기

	// 상속을 통해 많이 사용하는 형태
	Shape* rs2[6];
	rs2[0] = new Rectangle(); // 각각 부모 생성자에게 1번, 본인 생성자에게 1번 다녀온다**
	rs2[1] = new Rectangle(1,2,3,4, 5);   // 각각 매개변수 있는 부모 생성자에게 1번, 매개변수 있는 본인 생성자에게 1번 다녀온다**
	rs2[2] = new Ellipse();
	rs2[3] = new Ellipse(4,3,2,1);
	rs2[4] = new Triangle();
	rs2[5] = new Triangle(5,6,7,8);

	// virtual 사용 중
	for (int i = 0; i < 6; i++) {
		rs2[i]->Draw(); // 부모, 자식 Draw가 좀 다르다.
		// 다형성을 나타내려면 예약어 virtual 사용**(자식 쪽 사용) (부모쪽에 명시)
	}
	for (int i = 0; i < 6; i++) {
		delete rs2[i];
		// 부모,자식 전부 사용하려면 예약어 virtual 사용** (부모쪽에 명시**)
		// virtual 을 사용했으니 자식 다녀오고 부모 다녀오고 번갈아서! (사각형->도형->타원->도형->삼각형->도형 순)
		// 소멸 순서는 delete를 명시했으니 쓰는 데로 소멸! (사각형 -> 타원 -> 삼각형 순)
	}

	return 0;
}
/* (중요)상속을 왜 하는가 #1
int main() {

	// 1 
	Rectangle* rect = 0;
	rect = new Rectangle(); // Shape -> Rectangle 순 생성자 호출
	((Shape*)rect)->Draw(); // rect를 Shape로 형변환 하겠다는 의미
							// "도형을 그립니다"가 호출된다. Rectangle이 아닌, Shape의 Draw를 가르키는 것*
	delete rect;  // Rectangle -> Shape 순 소멸자 호출

	// 2
	Shape* shape = new Shape(); // Shape 생성자
	((Rectangle*)shape)->Draw(); // "사각형을 그립니다"
								 // 가로 잘 묶기 Rect*만 묶으면 Draw가 우선순위 더 높다
								 // k 초기값을 주는 Rect 생성자를 다녀오지 않았으니 k값은 쓰레기가 나온다
	delete shape; // Shape 소멸자


	// 3 (타입 - 사용가능한 멤버를 결정)
	// Ellipse* rs1 =  new Shape(); // Shape 생성자를 사용해 Rectangle 타입 생성
	// 부모 생성자를 사용해 타입을 생성할 수 없음 <- 오류
	// 부모는 뒤에 올 수 없다.

	// 중요*
	Shape* rs2 = new Rectangle(); // Rectangle 생성자를 사용해 Shape 타입 생성 (Rectangle만큼 만들어 Shape만큼 쓰기)
	// 자식의 생성자를 통해 부모 타입 생성 가능
	// k까지 만들지만, 사용은 못함 <- 오류 안남
	rs2->Draw();  // 10-12 "사각형을 그립니다" Shape에 virtual이 붙었으니 자식 것을 수행
	delete rs2; // Shape 소멸자 사용 // 10-12 자식 것도 다녀옴 virtual이 있으니

	return 0;
}
*/

/* 정적 할당
int main() {

	// 정적 할당 (new 사용 X)
	// 특징 1. 자동 delete
	// 2. 접근 시에 dot연산자(.)을 사용
	// 3. 매개 변수 없는 생성자를 호출 시 -> ()를 적지 않는다!! ** 이게 제일 중요**

	Rectangle r1;
	r1.Draw(); 

	Rectangle r2;
	r2.Draw();


	Ellipse e1;
	e1.Draw();

	Ellipse e2;
	e2.Draw();

	Triangle t1;
	t1.Draw();

	Triangle t2;
	t2.Draw();

	return 0;
}
*/

/* 동적 할당
int main() {

	// 동적 할당 
	: new 사용
	: 직접 delete
	: -> 사용
	: 매개변수 없는 생성자 호출 -> ()

	Rectangle* r1 = new Rectangle();
	r1->Draw();
	delete r1;

	Rectangle* r2 = new Rectangle(1, 2, 3, 4);
	r2->Draw();
	delete r2;


	Ellipse* e1 = new Ellipse();
	e1->Draw();
	delete e1;

	Ellipse* e2 = new Ellipse(1, 2, 3, 4);
	e2->Draw();
	delete e2;

	Triangle* t1 = new Triangle();
	t1->Draw();
	delete t1;

	Triangle* t2 = new Triangle(1, 2, 3, 4);
	t2->Draw();
	delete t2;

	// 생성&소멸 순서
	// 생성 : 부모->자식
	// 소멸 : 자식->부모

	return 0;
}
*/