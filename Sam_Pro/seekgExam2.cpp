#include<iostream>
#include<fstream>
using namespace std;


int main() {
	ifstream input("input.txt");
	if (input.fail()) {
		cout << "파일을 여는데 실패했습니다" << endl;
		return 1;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
	}
	input.seekg(0, ios::end); 
	cout << "파일의 길이는" << input.tellg() << "입니다." << endl;
	input.close();

	return 0;
}