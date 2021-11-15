#include<iostream>
#include <string>
using namespace std;

class JumsuOne {
public :
	void FuncOneShow() { cout << "JumsuOne" << endl; }

};

class RankTwo {
public:
	void FuncTwoShow() { cout << "RankTwo" << endl; }

};

class SungjukDerived : public JumsuOne, RankTwo {
public:
	void SungjukFuncShow() {

		FuncOneShow();	FuncTwoShow();
	}
};

int main(void) {

	SungjukDerived sdr;
	sdr.SungjukFuncShow();

	sdr.FuncOneShow();

	return 0;
}