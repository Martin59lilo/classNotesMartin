#include "CEntry.h"
#include "CPartition.h"
#include "CFolder.h"
#include "CFile.h"

void print_menu(){
    int opt;
    cout << "----------------------- MENU ---------------------------" << endl;
    cout << "1: Crear particion" << endl;
    cout << "2: Agregar Archivo o carpeta" << endl;
    cout << "3: Mostrar particion" << endl;
    cout << "4: Operaciones sobre el Archivo (E Escribir o M Mostrar)" << endl;
    cout << "5: Eliminar Archivo o Carpeta(X Nombre del Archivo o Y)" << endl;
    cout << "   Nombre de la Carpeta):" << endl;
    cout << "6: Salir" << endl;
    cout << "Seleccione entre [1-6]:";
}


int main(){

    int opt;
    vector<CPartition> partitions_computer;
    do
    {
        print_menu();
        cin >> opt;
        if (opt == 1)
        {
            string part_name;
            double capacity_partition;

            cout << "Ingrese el nombre de la particion:";
            cin >> part_name;
            
            cout << "Ingrese la capacidad de la particion (GB):";
            cin >> capacity_partition;

            CPartition partition = CPartition(part_name, capacity_partition);
            partitions_computer.push_back(partition);
        }else if (opt == 2)
        {
            char opt_for_two;
            cout << "Crear archivo o Carpeta (A=Archivo, C=Carpeta):";
            cin >> opt_for_two;
            if (opt_for_two == 'A')
            {
                string file_name;
                double capacity_file;

                cout << "Ingrese el nombre del archivo:";
                cin >> file_name;
                
                cout << "Ingrese el tamanio del archivo (GB):";
                cin >> capacity_file;

                int partition_selected;
                cout << "Seleccione la particion para guardar:";
                cin >> partition_selected;
                
                for (int i = 0; i < partitions_computer.size(); i++)
                {
                    if (partition_selected == i+1)
                    {
                        partitions_computer[i].add_file(file_name,capacity_file);
                    }
                }
            }
            else if (opt_for_two == 'C')
            {
                string file_name;
                double capacity_file;

                cout << "Ingrese el nombre de la carpeta:";
                cin >> file_name;
                int partition_selected;
                cout << "Seleccione la particion para guardar:";
                cin >> partition_selected;
                
                for (int i = 0; i < partitions_computer.size(); i++)
                {
                    if (partition_selected == i+1)
                    {
                        partitions_computer[i].add_folder(file_name);
                    }
                }                
            }
            
        }else if (opt == 3)
        {
            for (int i = 0; i < partitions_computer.size(); i++)
            {
                cout << "Contenido de Particion" << i << "(Espacio libre:" << partitions_computer[i].get_FreeSpace() << "GB):" << endl;
            }                    
        }
            
        else if (opt == 4)
        {
            /* code */
        }else if (opt == 5)
        {
            /* code */
        }
        
        
        
        



    } while (opt != 6);

    return 0;
}

