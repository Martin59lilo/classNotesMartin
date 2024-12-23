#include "CMedico.h"
#include "CPaciente.h"
#include "CMedicamento.h"


int main(){
    CMedico medico_1 = CMedico("Juan","Perez", 45, 2000);
    CPaciente paciente_1 = CPaciente("Ana","Fernandez",30);
    CMedicamento medicamento_1 = CMedicamento("Paracetamol",10);
    medico_1.imprimirdatos();
    paciente_1.imprimirdatos();
    medico_1.recetarMedicamento(medico_1,paciente_1,medicamento_1,3);
    paciente_1.imprimir_historial();

    return 0;
}