#ifndef SOCCERFIELD_H
#define SOCCERFIELD_H
#include <iostream>
using namespace std;

class SoccerField {
private:
    string name;
    int rows;
    int cols;

public:
    SoccerField();

    //GETTERS Y SETTERS
    string get_name() const;
    void set_name(const string &name);
    int get_rows() const;
    void set_rows(int rows);
    int get_cols() const;
    void set_cols(int cols);

    ~SoccerField();
};

#endif //SOCCERFIELD_H
