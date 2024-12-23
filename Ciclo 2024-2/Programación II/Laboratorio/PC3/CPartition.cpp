#include "CPartition.h"

CPartition::CPartition(string _name, double _capacity)
{
    this->name = _name;
    this->capacity = _capacity;
}

void CPartition::add_Entry(CEntry* _entry){
    entries.push_back(_entry);
}

void CPartition::add_file(string _name, double _size){
    CFile* add_file = new CFile(_name, _size);
    add_Entry(add_file);
}
void CPartition::add_folder(string _name){
    CFolder* add_folder = new CFolder(_name);
    add_Entry(add_folder);
}

double CPartition::get_FreeSpace(){
    return this->capacity-this->used_space;
}

double CPartition::get_used_space(){
    return this->used_space;
}


CPartition::~CPartition()
{
}

string CPartition::operator-=(string file_name){

}

string CPartition::operator-=(string folder_name){

}