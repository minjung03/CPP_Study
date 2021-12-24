#include <iostream>
#include <map>
#include<vector>
using namespace std;

int main() {

	map<string, int> emplorees;

	// 데이터를 넣는 다양한 방법

	emplorees["MIKE C"] = 5234;
	emplorees["CHALE M"] = 3374;

	emplorees.insert(pair<string, int>("DAVID E", 1923));
	// emplorees["DAVID E"] = 1923;

	emplorees.insert(map<string, int>::value_type("JOHN A", 7582));
	// emplorees["JOHN A"] = 7582;

	emplorees.insert(make_pair("PETER Q", 5328));
	// emplorees["PETER Q"] = 5328;


	cout << emplorees["CHALE M"] << endl;
	cout << emplorees.size() << endl;
	cout << endl;

	// 키 값 오름차순
	map<string, int>::iterator ni;
	for (ni = emplorees.begin(); ni != emplorees.end(); ++ni) {
		cout << (*ni).first << " " << (*ni).second << endl;
	}
	
	cout << endl;

	// 키 값 내림차순
	for (map<string, int>::reverse_iterator ri = emplorees.rbegin(); ri != emplorees.rend(); ++ri) {
		cout << ri->first << " " << ri->second << endl;
	}


	return 0;

}