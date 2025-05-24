#pragma once

#include <iostream>
#include <string>

void print_person();

class Person {
private:
    std::string role;

public:
    std::string name;
    int age;
    
    void set_address(std::string role) {
        this->role = role;
    }

    std::string get_address() {
        return role;
    }

    void print_info() {
        std::cout << name << " " << age << " " << role << std::endl;
    }

    Person(std::string name, int age, std::string role) {
        this->name = name;
        this->age = age;
        this->role = role;
    }

    bool operator<(const Person &other) const {
        return this->age < other.age;
    }
};