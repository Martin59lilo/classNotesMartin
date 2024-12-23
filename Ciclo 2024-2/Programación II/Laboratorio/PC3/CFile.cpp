#include "CFile.h"

CFile::CFile(string _name, double _size):CEntry(_name,_size)
{
    this->content = "";
}

CFile::~CFile()
{
}

string CFile::operator<<(string new_content){
    
}

string CFile::operator<<(CEntry* file){

}

string CFile::operator>>(ostream& out){

}