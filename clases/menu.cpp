#include "./Paciente/vista_paciente.cpp"
#include "./Doctor/vista_doctor.cpp"


void menu() {

    Hospital *hospital;
    bool sede_create = false;
    bool user_create = false;
    int opt;

    do {

        clean();
    
        clean();
        if (sede_create) {
            cout << "1.- Mostrar Sede" << endl;
        } else {
            cout << "1.- Registrar Sede" << endl;
            // cout << "2.- Modulo usuario " << endl;
        }


        if (sede_create) {
            cout << "2.- Modulo Paciente" << endl;
            cout << "3.- Modulo Doctor" << endl;
            cout << "4.- Modulo usuario " << endl;
            cout << "0.- Salir" << endl;

        }

        cout << "Ingrese una opcion: ";
        cin >> opt;

        switch(opt) {

            case 1:
                if (!sede_create) {
                    hospital = new Hospital();
                    sede_create = true;
                } else {
                    hospital->ver();
                }
            break;

            case 2:
                menu_paciente(hospital);
            break;

            case 3:
                menu_doctor(hospital);
            break;

            default:
            break;
            
        };

    } while (opt != 0);

};