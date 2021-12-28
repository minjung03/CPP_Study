#include <iostream>
#include <map>
#include <ostream>
#include<vector>
using namespace std;

int main() {

	multimap<string, int> m;
	// multimap은 키 값 중복이 가능
	// (map은 키 값이 중복 불가능)

	m.insert(pair<string, int>("A", 1));
	m.insert(pair<string, int>("C", 2));
	m.insert(pair<string, int>("B", 3));
	m.insert(pair<string, int>("B", 4));
	m.insert(pair<string, int>("A", 5));
	m.insert(pair<string, int>("B", 6));

	for (multimap<string, int>::iterator ii = m.begin(); ii != m.end(); ++ii) {
		cout << ii->first << " " << ii->second << endl;
	}
	cout << endl;

	cout << m.count("A") << endl;
	cout << m.count("B") << endl;
	cout << m.count("C") << endl;
	cout << endl;

	pair<multimap<string, int>::iterator, multimap<string, int>::iterator> ppp;
	ppp = m.equal_range("B"); // B영역을 찾아서 포인터해라 (B 데이터만 출력)

	for (multimap<string, int>::iterator ii = ppp.first; ii != ppp.second; ++ii) {
		cout << ii->first << " " << ii->second << endl;
	}

	return 0;
}