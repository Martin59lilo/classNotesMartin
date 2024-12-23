#include "CPersona.h"
#include "CCientifico.h"
#include "CIngeniero.h"
#include "CBiologo.h"
#include <vector>

int main(){
    CPersona* Jose = new CPersona("Jose",35);
    CCientifico* Sagan = new CCientifico("Carl Sagan",50,"Astrofisico");
    CIngeniero* Taylor = new CIngeniero("Frederick Taylor",65,"Ingeniero Industrial");
    CBiologo* Paabo = new CBiologo("Svante Paaboo",75,"paleontologo");
    vector<CPersona*> personas = {Sagan,Taylor,Paabo};

    for (auto &&i : personas)
    {
        cout << (*i).getNombre() <<"\t"<< (*i).getEdad() << endl;
    }
    
    for (auto &&i : personas)
    {
        delete i;
    }
    return 0;
}