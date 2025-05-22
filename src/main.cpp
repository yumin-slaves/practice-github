#include <iostream>

#include "add.h"
#include "person.h"

using namespace std;

// TODO 0: dev/(your_name) 브랜치를 만들고, 다시 "feat/practice" 브랜치 생성하기

// TODO 1. add.h에 정의된 add를 수정하여 제네릭을 활용하는 add() 함수로 만들고
// 매개변수로 int, double을 매개변수로 넣어보고 commit 하기

// TODO 2. C스타일에서 C++스타일로 리팩토링하고 commit 하기

// TODO 3. dev/(your_name)에 feat/practice를 병합하기

// TODO 4. Pull Request 해보기

int main() {
    std::cout << "Hello Linux!\n" << std::endl;

    double x = 3.14, y = 2.5;
    cout << add(x, y) << endl;
    
    cout << endl;

    func();

    return 0;
}