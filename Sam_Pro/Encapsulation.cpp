#include<iostream>
using namespace std;

// ĸ��ȭ(Encapsulation)
// ĸ��ȭ�� �������� Ŭ���� ������� �����Ͽ� �˾ƾ� �� ���׵��� ��������
// ( ��: ���� ����, ���� ���� ��..)
// �ּ��� ���ۿ�

 
//class SnotCap {
//public:
//	void take(int id) {
//		cout << id << " �๰ ����" << endl;
//	}
//};
//class SneezeCap {
//public:
//	void take(int id) {
//		cout << id << " ��ä�� �ܱ�" << endl;
//	}
//};
//class SnuffleCap {
//public:
//	void take(int id) {
//		cout << id << " �� �ձ�" << endl;
//	}
//};

// ���հ���� �ϳ��� ���̱�
class CONTAC600 {
public:
	void SnotTake(int id) { cout << id << " �๰ ����" << endl; }
	void SneezeTake(int id) { cout << id << " ��ä�� �ܱ�" << endl; }
	void SnuffleTake(int id) { cout << id << " �� �ձ�" << endl; }
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

	// �Ʒ��� ���� ����
	//suf.takeSinivelCap(SnotCap());
	//suf.takeSeezeCap(SneezeCap());
	//suf.takeSnuffleCap(SnuffleCap());

}