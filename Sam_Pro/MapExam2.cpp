#include <iostream>
#include <map>
#include<vector>
using namespace std;

int main() {

	map<int, string> emplorees;

	emplorees[5234] = "MIKE C";
	emplorees[3374] = "CHALE M";
	emplorees[1923] = "DAVID E";
	emplorees[7582] = "JOHN A";
	emplorees[5328] = "PETER Q";


	cout << emplorees[3374] << endl;
	cout << emplorees.size() << endl;


	// 키 값 오름차순
	map<int, string>::iterator ni;
	for (ni = emplorees.begin(); ni != emplorees.end(); ++ni) {
		cout << (*ni).first << " " << (*ni).second << endl;
	}

	cout << endl;

	// 키 값 내림차순
	for (map<int, string>::reverse_iterator ri = emplorees.rbegin(); ri != emplorees.rend(); ++ri) {
		cout << ri->first << " " << ri->second << endl;
	}




	return 0;

}