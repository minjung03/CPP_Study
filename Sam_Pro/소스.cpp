#include <iostream> // io 입력,출력 stream 흐르다
using namespace std; // '이름공간' 이 문장을 작성하면 std를 떼어도 된다.(예 : std::cout => cout)
//위 두 문장은 항상 있는 문장!!

namespace  definition { //namespace 이름영역 - 같은 것이 있어도 혼동하지 않게
    int jungui = 10;
}
using namespace definition;

namespace  justice {
    int jungui = 20;
}
int main() {

    //std::cout << "Mirim Meisteer" << std::endl ;
    // << std::andl (줄바꿈)

    cout << "Mirim Meisteer" << endl;

    cout << jungui << endl; //먼저 정의된 definition 것을 가져온다.
    cout << justice::jungui << endl;

    
    int a;
    cout << "입력 : ";
    cin >> a;
    cout << a;

    return 0; //안써도 상관은 없지만 써주는 경우도 있다.
}