#include <iostream>

#include "add.h"
#include "person.h"

using namespace std;

/* TODO 리스트
*
* TODO 1: dev/(your_name) 브랜치 생성
* TODO 2. add.h에 정의된 add를 수정하여 템플릿을 활용하는 add() 함수로 만들고
  매개변수로 int, double을 매개변수로 넣어보고 commit 하기
* TODO 3. C스타일에서 C++스타일로 리팩토링하고 commit 하기
* TODO 4. dev/(your_name)에 feat/practice를 병합하기
* TODO 5. Pull Request 해보기
*/

int main() {
    std::cout << "Hello Linux!\n" << std::endl;

    double x = 3.14, y = 2.5;
    
    cout << "예상 결과값: 5.64\n코드 실행 결과: ";
    cout << add(x, y) << endl;
    
    cout << endl;

    func();

    return 0;
}