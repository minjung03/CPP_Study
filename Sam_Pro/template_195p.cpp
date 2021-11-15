#include<iostream>
using namespace std;

template <typename T>
T Max(T a, T b) {
	if (a > b) return a;
	else return b;
}

// 명시적 특수화 **
template<>
char* Max(char* a, char* b) {
	cout << " Max(char* a , char* b)" << endl;
	return strlen(a) > strlen(b) ? a : b;
}

template<>
const char* Max(const char* a, const char* b) {
	cout << " Max(const char* a , const char* b)" << endl;
	return strcmp(a,b) > 0 ? a : b;
}

int main() {
	cout << Max(100, 200) << "  ";
	cout << Max('A', 'B') << "  ";
	cout << Max(12.34, 56.78) << "  " << endl;
	cout << Max("Compu","Science") << "  ";

	char str1[] = "Meister";
	char str2[] = "Mirim";

	cout << Max(str1, str2) << endl;

	return 0;
}