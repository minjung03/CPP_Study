#include <iostream>
using namespace std;

class Complex {
private:

	int real;
	int imaginary;

public:

	Complex() {
		this->real = 0;
		this->imaginary = 0;
	}

	Complex(int real, int imaginary) {
		this->real = real;
		this->imaginary = imaginary;
	}

	void Print() {

		if (real == 0 && imaginary == 0) {
			cout << "0" << endl;
		}
		else if (real == 0) {
			if (abs(imaginary) == 1) {
				cout << "i" << endl;
			}
			else cout << imaginary << "i"<< endl;
		}
		else if (imaginary == 0) {
			cout << real << endl;
		}

		else if(abs(imaginary) == 1) {
			cout << real << "+i" << endl;
		}
		else if (imaginary > 0) {
			cout << real << "+" << imaginary << "i" << endl;
		}
		else if (imaginary < 0) {
			cout << real<< imaginary << "i" << endl;
			
		}
	}

	Complex operator*(Complex& com) {

		Complex ctmp; 

		ctmp.real = (this->real * com.real) - (this->imaginary * com.imaginary);
		ctmp.imaginary = (this->real * com.imaginary) + (this->imaginary * com.real);

		return ctmp;
	}

	Complex operator+(Complex& com) {

		Complex ctmp;

		ctmp.real = this->real + com.real;
		ctmp.imaginary = this->imaginary + com.imaginary;

		return ctmp;
	}

	Complex operator++() {
		// 전위 증가
		// this->real++; 와 ++this->real; 은 전부 전위(똑같은 문장)이다. 후위에 이렇게 쓰면 XX
		this->real = ++real;
		return *this;
	}
	
	Complex operator++(int) { // 매개변수 int가 있는 것이 후위라 본다(이건 정의되어있는 것)
		// 후위 증가

		Complex ctmp(real, imaginary); // 기억할 공간이 필요하다

		ctmp.real = this->real++;
		
		return ctmp;
	}

	Complex operator--() {
		// 전위 증가

		this->real = --real;
		return *this;
	}
	Complex operator--(int) { 
		// 후위 증가

		Complex ctmp(real, imaginary); 

		ctmp.real = this->real--;

		return ctmp;
	}

	Complex operator-(Complex& com) {

		Complex ctmp;

		ctmp.real = this->real - com.real;
		ctmp.imaginary = this->imaginary - com.imaginary;

		return ctmp;

		/*
		this->real = this->real - com.real;
		this->imaginary = this->imaginary - com.imaginary;

		return *this;
		*/
	}
};

int main() {
	Complex c1(0, 0);
	Complex c2(1, 1);
	Complex c3(2, 2);
	Complex c4(0, -2);
	Complex c5(-5, 0);
	Complex c6(3, 0);
	Complex c7(0, 7);

	cout << "//***************" << endl;
	cout << "c1 = ";
	c1.Print();
	cout << "c2 = ";
	c2.Print();
	cout << "c3 = ";
	c3.Print();
	cout << "c4 = ";
	c4.Print();
	cout << "c5 = ";
	c5.Print();
	cout << "c6 = ";
	c6.Print();
	cout << "c7 = ";
	c7.Print();

	cout << "//-------------------" << endl;
	c1 = c2 + c3; // c1이 this

	cout << "c1 = ";
	c1.Print();

	cout << "c2 = ";
	c2.Print();

	cout << "c3 = ";
	c3.Print();

	cout << "//&&&&&&&&&&&&&&&&&&&&" << endl;
	c7 = c1 - c4; // c1이 this // c1.operator-(c4)와 마찬가지
	c1 = c7 - c2;
	c6 = c2 * c4;

	cout << "c1 = ";
	c1.Print();

	cout << "c2 = ";
	c2.Print();

	cout << "c4 = ";
	c4.Print();

	cout << "c6 = ";
	c6.Print();

	cout << "c7 = ";
	c7.Print();


	cout << "//$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	Complex c8;
	Complex c9;
	c9 = ++c4;

	cout << "c4 = ";
	c4.Print();

	cout << "c8 = ";
	c8.Print();

	cout << "c9 = ";
	c9.Print();


	cout << "//%%%%%%%%%%%%%%%%%%%%%%%" << endl;
	Complex c10;
	c10 = c4++;

	cout << "c4 = ";
	c4.Print();

	cout << "c10 = ";
	c10.Print();

	cout << "//#######################" << endl;
	Complex c11;
	c11 = c2--;

	cout << "c2 = ";
	c2.Print();

	cout << "c11 = ";
	c11.Print();

	cout << "//!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	Complex c12;
	c12 = --c2;

	cout << "c2 = ";
	c2.Print();

	cout << "c12 = ";
	c12.Print();

}