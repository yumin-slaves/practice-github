#include <iostream>

#include "person.hpp"

using namespace std;

int comp(const void *a, const void *b) {
    Person *x = (Person*)a;
    Person *y = (Person*)b;
    return x->age - y->age;
}

void print_person() {
    // 포인터 배열을 사용해야 할까?
    Person* people = new Person[4] {
        Person("서유민", 22, "PM"),
        Person("김민준", 21, "노예 1"),
        Person("김선우", 20, "신입 1"),
        Person("박주영", 20, "신입 2")
    };

    // C 스타일의 반복문 보다 간단한게 있지 않을까?
    for (int i = 0; i < 4; i++) {
        people[i].print_info();
    }
    cout << endl;

    // C++에 정의된 sort 함수를 써보자
    
    // 출력하기

    delete[] people;
}