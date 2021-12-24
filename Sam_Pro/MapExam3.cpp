#include <iostream>
#include <map>
#include<vector>
using namespace std;

int main() {

	map<string, int> emplorees;

	// �����͸� �ִ� �پ��� ���

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

	// Ű �� ��������
	map<string, int>::iterator ni;
	for (ni = emplorees.begin(); ni != emplorees.end(); ++ni) {
		cout << (*ni).first << " " << (*ni).second << endl;
	}
	
	cout << endl;

	// Ű �� ��������
	for (map<string, int>::reverse_iterator ri = emplorees.rbegin(); ri != emplorees.rend(); ++ri) {
		cout << ri->first << " " << ri->second << endl;
	}


	return 0;

}