#include "CEntry.h"

CEntry::CEntry(string _name, double _size)
{
    this->name = _name;
    this->size = _size;
}

CEntry::~CEntry()
{
}

double CEntry::get_size(){
    return size;
}