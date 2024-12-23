#include "CEntry.h"

class CFile: public CEntry
{
private:
    string content;
public:
    CFile(string _name, double _size);
    string write_content();
    double get_size();
    string operator<<(string new_content);
    string operator<<(CEntry* file);
    string operator>>(ostream& out);

    ~CFile();
};

