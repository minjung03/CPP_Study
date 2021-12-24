#include <iostream>
#include <map>
#include <ostream>
#include<vector>
using namespace std;

class AAA {
public:
	int x, y;
	float z;
};

ostream& operator<< (ostream& out, AAA& a) {
	// operator는 객체를 못부르니 첫번째 매개변수는 객체?로 넣는다.
	out << a.x << " " << a.y << " " << a.z << endl;

	return out;
}

int main() {

	map<string, AAA> m;
	AAA Aobj;

	Aobj.x = 7;
	Aobj.y = 2;
	 
	Aobj.z = 1.234;

	m["C"] = Aobj;

	Aobj.x = 5;
	m["B"] = Aobj;

	Aobj.x = 3;
	Aobj.y = 7;
	Aobj.z = 7.234;
	m["D"] = Aobj;


	for (map<string, AAA>::iterator ni = m.begin(); ni != m.end(); ++ni) {
		cout << ni->first << " " << ni->second << endl;
	}

	return 0;

}