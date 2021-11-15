#include<iostream>
using namespace std;

int main() {

	char cMaxVal = 0x7f;
	unsigned char ucMaxVal = 0xFF;

	cout << "char형 범위(1바이트) : "
		<< (int)(char)(cMaxVal + 1) << "~"   // 최대값 +1을 하면 최소값  , 최소값에 -1을 하면 최대값
		<< (int)cMaxVal << endl;

	cout << "unsigned char형 범위(1바이트) : "
		<< (int)(char)(ucMaxVal + 1) << "~"    // 최대값 +1을 하면 최소값  , 최소값에 -1을 하면 최대값
		<< (int)ucMaxVal << endl;
}