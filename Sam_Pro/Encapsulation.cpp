#include<iostream>
using namespace std;

// 캡슐화(Encapsulation)
// 캡슐화가 무너지면 클래스 사용방법과 관련하여 알아야 할 사항들이 많아진다
// ( 예: 약의 종류, 약의 순서 등..)
// 주석은 나쁜예

 
//class SnotCap {
//public:
//	void take(int id) {
//		cout << id << " 콧물 낫기" << endl;
//	}
//};
//class SneezeCap {
//public:
//	void take(int id) {
//		cout << id << " 재채기 멎기" << endl;
//	}
//};
//class SnuffleCap {
//public:
//	void take(int id) {
//		cout << id << " 코 뚫기" << endl;
//	}
//};

// 종합감기약 하나만 먹이기
class CONTAC600 {
public:
	void SnotTake(int id) { cout << id << " 콧물 낫기" << endl; }
	void SneezeTake(int id) { cout << id << " 재채기 멎기" << endl; }
	void SnuffleTake(int id) { cout << id << " 코 뚫기" << endl; }
	void take(int id) {
		SnotTake(id);
		SneezeTake(id);
		SnuffleTake(id);
	}
};

class Patient {
public :
	int id;
public:
	void takeCONTAC600(CONTAC600 cap) { cap.take(id); }
	//void takeSinivelCap(SnotCap cap) {
	//	cap.take(id);
	//}
	//void takeSeezeCap(SneezeCap cap) {
	//	cap.take(id);
	//}
	//void takeSnuffleCap(SnuffleCap cap) {
	//	cap.take(id);
	//}
};



int main() {

	Patient suf = { 1001 };
	suf.takeCONTAC600(CONTAC600());
	return 0;

	// 아래랑 같은 문장
	//suf.takeSinivelCap(SnotCap());
	//suf.takeSeezeCap(SneezeCap());
	//suf.takeSnuffleCap(SnuffleCap());

}