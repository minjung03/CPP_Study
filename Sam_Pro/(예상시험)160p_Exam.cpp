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
	// 상속은 전부 받는다. private까지도, 하지만 명시(부를)할 수 없는 것 뿐*
	data.SetData(10);
	cout << data.GetData() << endl;
	data.TestFunc();

	// data.PrintData(); - 오류. protected 타입이라 호출 불가능
	// 시험문제 내기 좋다!! public 타입만 main에서 호출 가능!
}