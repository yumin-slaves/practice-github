#include <iostream>

#include "person.h"


using namespace std;

int comp(const void *a, const void *b) {
    Person *x = (Person*)a;
    Person *y = (Person*)b;
    return x->age - y->age;
}

void func() {
    // 포인터 배열을 사용해야 할까?
    Person* people = new Person[3] {
        Person("서유민", 22, "PM"),
        Person("김민준", 21, "노예 1"),
        Person("김선우", 21, "신입")
    };

    // C 스타일의 반복문 보다 간단한게 있지 않을까?
    for (int i = 0; i < 3; i++) {
        people[i].print_info();
    }
    cout << endl;

    // C++에 정의된 sort 함수를 써보자
    
    // for (int i = 0; i < 3; i++) {
    //     people[i].print_info();
    // }

    delete[] people;
}