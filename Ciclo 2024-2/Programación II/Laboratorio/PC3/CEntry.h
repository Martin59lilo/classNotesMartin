#include <iostream>
using namespace std;

class CEntry
{
private:
    string name;
    double size;
public:
    CEntry(string _name, double _size);
    virtual double get_size();
    virtual ~CEntry();
};


