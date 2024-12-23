#include "Person.h"

string Person::get_name() const {
    return name;
}

void Person::set_name(const string &name) {
    this->name = name;
}

int Person::get_age() const {
    return age;
}

void Person::set_age(int age) {
    this->age = age;
}

string Person::get_country() const {
    return country;
}

void Person::set_country(const string &country) {
    this->country = country;
}

Person::~Person(){}