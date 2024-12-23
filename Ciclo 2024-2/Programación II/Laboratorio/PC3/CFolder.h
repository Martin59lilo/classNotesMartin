#include "CEntry.h"
#include <vector>

class CFolder: public CEntry
{
private:
    vector<CEntry> entries;
public:
    CFolder(string _name);
    double get_size();
    ~CFolder();
};


