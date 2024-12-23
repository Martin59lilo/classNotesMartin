#include "SoccerField.h"

SoccerField::SoccerField(){
    rows = 51;
    cols = 121;
}

string SoccerField::get_name() const {
    return name;
}

void SoccerField::set_name(const string &name) {
    this->name = name;
}

int SoccerField::get_rows() const {
    return rows;
}

void SoccerField::set_rows(int rows) {
    this->rows = rows;
}

int SoccerField::get_cols() const {
    return cols;
}

void SoccerField::set_cols(int cols) {
    this->cols = cols;
}

SoccerField::~SoccerField(){}
