#include "./Paciente/vista_paciente.cpp"
#include "./Doctor/vista_doctor.cpp"


void menu() {

    Hospital *hospital;
    bool sede_create = false;
    int opt;

    do {

        clean();

        sede_create ? cout << "1.- Mostrar Sede" << endl : cout << "1.- Registrar Sede" << endl;

        if (sede_create) {
            cout << "2.- Modulo Paciente" << endl;
            cout << "3.- Modulo Doctor" << endl;
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

            case 4:
            break;
            
        };

    } while (opt != 0);

};