#include<iostream>
using namespace std;

class CDelegration {
public :
	int a, b, c, d;

	CDelegration(int a) {
		cout << "CDelegration 1" << endl;
		this->a = a;
	}

	CDelegration(int a, int b) : CDelegration(a) {
		cout << "CDelegration 2" << endl;
		this->b = b;
	}

	CDelegration(int a, int b, int c) : CDelegration(a, b) {
		cout << "CDelegration 3" << endl;
		this->c = c;
	}

	CDelegration(int a, int b, int c, int d) : CDelegration(a,b,c) {
		cout << "CDelegration 4" << endl;
		this->d = d;
	}
};

int main() {
	CDelegration(1, 2, 3, 4);
	return 0;
}