#include "CFile.h"
#include "CFolder.h"
#include <vector>

class CPartition
{
private:
    string name;
    double capacity;
    double used_space;
    vector<CEntry*> entries;
    
public:
    CPartition(string _name, double _capacity);
    void add_Entry(CEntry* _entry);
    void add_file(string _name, double _size);
    void add_folder(string _name);
    double get_FreeSpace();
    double get_used_space();
    string operator-=(string file_name);
    string operator-=(string folder_name);

    ~CPartition();

};


