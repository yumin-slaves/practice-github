#include <iostream>

#include "add.hpp"
#include "person.hpp"

using namespace std;

/* Git 실습 TODO 목록

1. 브랜치 만들기
    - main → dev/(your_name)
    - dev/(your_name) → feat/practice

2. add.h 수정
    - 템플릿 함수 add<T>()로 변경
    - 테스트

3. 코드 리팩토링
    - C 스타일 코드 → Modern C++ 스타일로 개선

4. merge
    - feat/practice → dev/(your_name) 병합

5. Pull Request
    - dev/(your_name) → main으로 PR 생성
*/

int add(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hello Linux!\n" << std::endl;

    double x = 3.14, y = 2.5;
    
    cout << "예상 결과값: 5.64\n코드 실행 결과: ";
    cout << add(x, y) << endl;
    
    cout << endl;

    print_person();

    return 0;
}