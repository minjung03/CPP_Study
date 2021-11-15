#include<iostream>
#include <string>
using namespace std;



// ���� �Ҵ� (new ��� X)
// Ư¡ 
// 1. �ڵ� delete
// 2. ���� �ÿ� dot������(.)�� ���
// 3. �Ű� ���� ���� �����ڸ� ȣ�� �� -> ()�� ���� �ʴ´�!! ** �̰� ���� �߿�**

// ���� �Ҵ�(new ��� O)
// Ư¡ 
// 1. delete ��� (�Ҹ��ڿ��� delete ���־���Ѵ�!)
// (new ������ �°� delete �ϱ�!)
// 2. ���� �ÿ� ȭ��ǥ ������(->)�� ���
// 3. �Ű� ���� ���� ������ ȣ�� �� -> ()
//
// ����
// ���� (�θ� -> �ڽ�)
// �Ҹ� (�ڽ� -> �θ�)




// �ߺ��Ǵ� �κ��� �θ� Ŭ������ �����
// **�θ� Ŭ������ ��� ���� Ŭ�������� ���� �ۼ�**
class Shape {

protected:
	int x, y, width, height;
	string name;

public:
	Shape() : x(0), y(0), width(0), height(0) { // �Ű����� �ʱ�ȭ ex) : �������(�Ű�����(�ʱⰪ)) , ...
		cout << "���� ������" << endl;
	}
	Shape(int x, int y, int w, int h) : x(x), y(y), width(w), height(h){ 
		cout << "�Ű����� ���� ������" << endl;
	}

	// ** �θ� �Ҹ��ڴ� ���� 100% virtual�� �ٿ� ����Ѵ�
	virtual ~Shape() {  // virtual <- �ڽ��� �������� ����������� �˾Ƽ� ã�ư���
		cout << "���� �Ҹ���" << endl << endl;
	}

	// �θ� Ŭ������ �޼ҵ带 �������̵� �� �͵� ���� virtual�� �ٿ� ����Ѵ�
	virtual void Draw() {  // virtual <- �ڽ��� �������� ����������� �˾Ƽ� ã�ư���
		cout << "������ �׸��ϴ�" << endl;
		cout << "x : " << x << ", y : " << y << ", width : " << width << ", height : " << height << endl;
	}
};

class Rectangle : public Shape {
private:
	int k;
public:
	Rectangle() :Shape() {   // :Shape()�� ��� �Ƚᵵ ok. �⺻������ �θ� �����ڿ� ���⶧����
		k = 0;
		cout << "�簢�� ������" << endl;
	}
	Rectangle(int x, int y, int width, int height, int k) :Shape(x, y, width, height) {  // �θ� ������ ȣ��  ex) : �θ�Ŭ���� �̸�(�Ű�����)
		this->k = k; // �θ� �ʿ��� ������ ���⼭ �ʱ�ȭ
		cout << "�Ű����� �簢�� ������" << endl;
	}
	~Rectangle() { 
		cout << "�簢�� �Ҹ���" << endl; 
	}

	void Draw() {
		cout << "�簢���� �׸��ϴ�" << endl;
		cout << "x : " << x << ", y : " << y << ", width : " << width << ", height : " << height << endl;
		cout << "k : " << k << endl;
	}
};

class Ellipse : public Shape {

public:
	Ellipse() :Shape() { 
		cout << "Ÿ�� ������" << endl;
	}
	Ellipse(int x, int y, int width, int height) :Shape(x, y, width, height) {
		cout << "�Ű����� Ÿ�� ������" << endl;
	}
	~Ellipse() {
		cout << "Ÿ�� �Ҹ���" << endl; 
	}

	void Draw() {
		cout << "Ÿ���� �׸��ϴ�" << endl;
		cout << "x : " << x << ", y : " << y << ", width : " << width << ", height : " << height << endl;
	}
};

class Triangle : public Shape {

public:
	Triangle() :Shape() { 
		cout << "�ﰢ�� ������" << endl; 
	}
	Triangle(int x, int y, int width, int height) :Shape(x, y, width, height) { 
		cout << "�Ű����� �ﰢ�� ������" << endl; 
	}
	~Triangle() { 
		cout << "�ﰢ�� �Ҹ���" << endl;
	}

	void Draw() {
		cout << "�ﰢ���� �׸��ϴ�" << endl;
		cout << "x : " << x << ", y : " << y << ", width : " << width << ", height : " << height << endl;
	}
};

int main() {

	// �����򰡸� �̷� ������ �� ���̴�. ���� �߿�**
	// �Ʒ� ���� �� ���α�

	// �б� ���α׷��̶� ġ��
	// Person* rs2[6];
	// rs2[0] = new Student();
	// rs2[1] = new Teacher();
	// �̷� ����?
	// �� ����ϴ��� ������ ���� ���ϸ� ���� ����ﲨ��. ������ �����ϱ�

	// ����� ���� ���� ����ϴ� ����
	Shape* rs2[6];
	rs2[0] = new Rectangle(); // ���� �θ� �����ڿ��� 1��, ���� �����ڿ��� 1�� �ٳ�´�**
	rs2[1] = new Rectangle(1,2,3,4, 5);   // ���� �Ű����� �ִ� �θ� �����ڿ��� 1��, �Ű����� �ִ� ���� �����ڿ��� 1�� �ٳ�´�**
	rs2[2] = new Ellipse();
	rs2[3] = new Ellipse(4,3,2,1);
	rs2[4] = new Triangle();
	rs2[5] = new Triangle(5,6,7,8);

	// virtual ��� ��
	for (int i = 0; i < 6; i++) {
		rs2[i]->Draw(); // �θ�, �ڽ� Draw�� �� �ٸ���.
		// �������� ��Ÿ������ ����� virtual ���**(�ڽ� �� ���) (�θ��ʿ� ���)
	}
	for (int i = 0; i < 6; i++) {
		delete rs2[i];
		// �θ�,�ڽ� ���� ����Ϸ��� ����� virtual ���** (�θ��ʿ� ���**)
		// virtual �� ��������� �ڽ� �ٳ���� �θ� �ٳ���� �����Ƽ�! (�簢��->����->Ÿ��->����->�ﰢ��->���� ��)
		// �Ҹ� ������ delete�� ��������� ���� ���� �Ҹ�! (�簢�� -> Ÿ�� -> �ﰢ�� ��)
	}

	return 0;
}
/* (�߿�)����� �� �ϴ°� #1
int main() {

	// 1 
	Rectangle* rect = 0;
	rect = new Rectangle(); // Shape -> Rectangle �� ������ ȣ��
	((Shape*)rect)->Draw(); // rect�� Shape�� ����ȯ �ϰڴٴ� �ǹ�
							// "������ �׸��ϴ�"�� ȣ��ȴ�. Rectangle�� �ƴ�, Shape�� Draw�� ����Ű�� ��*
	delete rect;  // Rectangle -> Shape �� �Ҹ��� ȣ��

	// 2
	Shape* shape = new Shape(); // Shape ������
	((Rectangle*)shape)->Draw(); // "�簢���� �׸��ϴ�"
								 // ���� �� ���� Rect*�� ������ Draw�� �켱���� �� ����
								 // k �ʱⰪ�� �ִ� Rect �����ڸ� �ٳ���� �ʾ����� k���� �����Ⱑ ���´�
	delete shape; // Shape �Ҹ���


	// 3 (Ÿ�� - ��밡���� ����� ����)
	// Ellipse* rs1 =  new Shape(); // Shape �����ڸ� ����� Rectangle Ÿ�� ����
	// �θ� �����ڸ� ����� Ÿ���� ������ �� ���� <- ����
	// �θ�� �ڿ� �� �� ����.

	// �߿�*
	Shape* rs2 = new Rectangle(); // Rectangle �����ڸ� ����� Shape Ÿ�� ���� (Rectangle��ŭ ����� Shape��ŭ ����)
	// �ڽ��� �����ڸ� ���� �θ� Ÿ�� ���� ����
	// k���� ��������, ����� ���� <- ���� �ȳ�
	rs2->Draw();  // 10-12 "�簢���� �׸��ϴ�" Shape�� virtual�� �پ����� �ڽ� ���� ����
	delete rs2; // Shape �Ҹ��� ��� // 10-12 �ڽ� �͵� �ٳ�� virtual�� ������

	return 0;
}
*/

/* ���� �Ҵ�
int main() {

	// ���� �Ҵ� (new ��� X)
	// Ư¡ 1. �ڵ� delete
	// 2. ���� �ÿ� dot������(.)�� ���
	// 3. �Ű� ���� ���� �����ڸ� ȣ�� �� -> ()�� ���� �ʴ´�!! ** �̰� ���� �߿�**

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

/* ���� �Ҵ�
int main() {

	// ���� �Ҵ� 
	: new ���
	: ���� delete
	: -> ���
	: �Ű����� ���� ������ ȣ�� -> ()

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

	// ����&�Ҹ� ����
	// ���� : �θ�->�ڽ�
	// �Ҹ� : �ڽ�->�θ�

	return 0;
}
*/