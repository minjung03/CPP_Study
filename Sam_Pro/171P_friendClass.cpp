#include<iostream>
using namespace std;

class MyClass {
private:
	int x, y, z;

public:
	MyClass(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	friend class FriendClass;
	// 별로 권하지는 않는다.
};

class FriendClass {
public:

	FriendClass() {}
	void ShowMyClass() {
		MyClass my(100, 200, 300);
		cout << "x = " << my.x << endl;
		cout << "y = " << my.y << endl;
		cout << "z = " << my.z << endl;
	}
};

int main() {

	FriendClass your;
	your.ShowMyClass();
}