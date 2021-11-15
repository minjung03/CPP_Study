#include<iostream>
using namespace std;

class BaseData {
public :
	BaseData() {
		cout << "BaseData()" << endl;
	}
	int GetData() {
		return m_nData;
	}
	void SetData(int nParam) {
		m_nData = nParam;
	}

protected:
	void PrintData() {
		cout << "BaseData::PrintData()" << "   ";
	}

private:
	int m_nData = 0;
};

class DerivedData : public BaseData {
public :
	DerivedData() {
		cout << "DerivedData()" << "   ";
	}
	void TestFunc() {
		PrintData();
		SetData(5);
		cout << BaseData::GetData() << endl;
	}
};

void main() {

	DerivedData data;
	// ����� ���� �޴´�. private������, ������ ���(�θ�)�� �� ���� �� ��*
	data.SetData(10);
	cout << data.GetData() << endl;
	data.TestFunc();

	// data.PrintData(); - ����. protected Ÿ���̶� ȣ�� �Ұ���
	// ���蹮�� ���� ����!! public Ÿ�Ը� main���� ȣ�� ����!
}