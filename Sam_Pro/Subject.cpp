#include <iostream>
using namespace std;
#define INWON 3 // ���� 5
#define SUBJ 4 // ���� ��

string subj_name[] = { "����" , "����" , "����" , "JAVA" ,"C" }; // �������� �ֱ�

class Student {

private:
	char hakbun[4];
	int rank; // ������ ������ �б��̰ų� �г��̾�� �ȴ�. ���� Ŭ�������� �������� ����
	char name[10];
	char grade;

	/* 
	int kuk,eng,mat;
	int tot; 
	*/
	int subj[SUBJ + 1];
	double avg;

	

public:

	Student() {
		subj[SUBJ] = 0;
		// ������ �� ���� rank���� 1�� ����
		rank = 1;
		cout << "����" << endl;
	}
	void input(int);
	void calc();
	void print();

	int getTot() { // tot ���� ��������
		return subj[SUBJ]; // �� ������ ���� total ���� �ȴ�.
	}

	int getRank() {
		return rank;
	}

	void addRank() {
		rank++;
	}

	~Student() {
		cout << "�Ҹ�" << endl;
	}
};

void Student::input(int i) {

	cout << "\n" << i + 1 << "��° �л� �Է�" << endl;

	cout << "�й� �Է� : ";
	cin >> hakbun;

	cout << "�̸� �Է� : ";
	cin >> name;

	for (int i = 0; i < SUBJ; i++) {

		cout << subj_name[i] << " �Է� : "; // ���� ���� ���� �̶� �ٲ��ֱ�
		cin >> subj[i];
		while (subj[i] < 1 || subj[i]>100) {

			cout << subj_name[i] << " �ٽ� �Է� : ";
			cin >> subj[i];
		}
	}


}
void Student::print() {

	cout << hakbun << "\t" << name << "\t";
	for (int i = 0; i < SUBJ + 1; i++) {
		cout << subj[i] << "\t";
	}
	cout << avg << "\t" << grade << "\t" << rank << "\n";
}
void Student::calc() {

	for (int i = 0; i < SUBJ; i++) {
		subj[SUBJ] += subj[i];
	}

	avg = (double)subj[SUBJ] / SUBJ;

	switch ((int)avg / 10) {  // ����ġ�� ������ *�������̿��� �Ѵ�.
	case 10: case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F'; break;
	}
}

// ���������� ���� ���� (�Ϲ� �Լ����� ���� ����)
// int INWON = 3;

void ranking(Student* stud) {

	// ���� Ŭ���������� �޼ҵ尡 �ƴ�
	// ���� ���� �� ������, �������� ó���ϴ°� �ƴϹǷ�?
	// ��� �Լ��� �� �� ���ٴ� �� �� ���!!

	// ��ũ���� �� 1�� �ְ� ����. 
	// �ϳ��� ������ �ٸ� ������� ���ؼ� �� ���� ���� ���� ����
	// ���� �� ���� �ݺ��ؼ� ��.

	for (int i = 0; i < INWON ; i++) {
		for (int j = i + 1; j < INWON; j++) {

			if (stud[i].getTot() < stud[j].getTot()) {
				stud[i].addRank();
			}
			else if (stud[i].getTot() > stud[j].getTot()) {
				stud[j].addRank();
			}
			else {
				break;
			}
		}
	}
}

int main() {

	/*
	int INWON;
	cin >> INWON;
	*/

	//Student stu[INWON]; // ����

	// �������� �ٲٱ� 2���� ���
	
	// 1.
	Student* stu = new Student[INWON]; // ������ ȣ��� // ��ü ���� �׸����� ����
	// INWON�� �Է¹����Ŷ�� �� ��� ���
	cout << sizeof(stu) << endl;
	cout << sizeof(stu[0]) << endl; // �ο� 3, SUBJ 4 �϶� 56


	// 2.
	/*
	Student* stu[INWON]; // ������ ȣ�� ���� // ��� ���� �ű���� �Ȱ� // for�������� stu[i] = new Student; �������
	// INWON�� �Է¹����ÿ��� �̹�� �Ұ�
	for (int i = 0; i < INWON; i++) {
		stu[i] = new Student;
	}
	cout << sizeof(stu) << endl; //12
	cout << sizeof(*stu[0]) << endl; //56 or 48
	*/

	// �� 56���� ���ñ�? => ������ 141p �޸� Ȯ��
	
	/*
	for (int i = 0; i < INWON; i++) {
		// cout << i+1 << "��° �л� �Է�";
		stu[i].input(i); // ���⼭ stu[i]�� �ҷ����� �޼ҵ� �ȿ� stu[i]. ������ �ʿ� ����.
		stu[i].calc();
	}

	ranking(stu); // stu �迭�� ���� �ְ�, �� �濡�� �ѹ� ���󰡾� �ִ� (�����Ͷ� ��)

	for (int j = 0; j < INWON; j++) {
		stu[j].print();
	}
	*/
	return 0;
}