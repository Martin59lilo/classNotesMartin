#ifndef COACH_H
#define COACH_H
#include <iostream>
#include "Person.h"
using namespace std;

class Coach: public Person {
private:
    string name_DT;
public:
    Coach(string _name_DT);
    ~Coach();
};

#endif //COACH_H
