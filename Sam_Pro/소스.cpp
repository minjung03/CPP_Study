#include <iostream> // io �Է�,��� stream �帣��
using namespace std; // '�̸�����' �� ������ �ۼ��ϸ� std�� ��� �ȴ�.(�� : std::cout => cout)
//�� �� ������ �׻� �ִ� ����!!

namespace  definition { //namespace �̸����� - ���� ���� �־ ȥ������ �ʰ�
    int jungui = 10;
}
using namespace definition;

namespace  justice {
    int jungui = 20;
}
int main() {

    //std::cout << "Mirim Meisteer" << std::endl ;
    // << std::andl (�ٹٲ�)

    cout << "Mirim Meisteer" << endl;

    cout << jungui << endl; //���� ���ǵ� definition ���� �����´�.
    cout << justice::jungui << endl;

    
    int a;
    cout << "�Է� : ";
    cin >> a;
    cout << a;

    return 0; //�Ƚᵵ ����� ������ ���ִ� ��쵵 �ִ�.
}