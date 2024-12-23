#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    //GETTERS Y SETTERS
    string get_name() const;
    void set_name(const string &name);
    int get_age() const;
    void set_age(int age);
    string get_country() const;
    void set_country(const string &country);

    virtual ~Person();
};

#endif //PERSON_H
