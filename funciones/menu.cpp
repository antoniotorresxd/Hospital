void menu_paciente(Hospital *_hospital) {
    clean();
    int opt;
    
    do {
        clean();
        cout << "1.- Registrar Paciente" << endl;
        cout << "2.- Mostrar pacientes" << endl;
        cout << "3.- Buscar paciente" << endl;
        cout << "0.- Menu inicial" << endl;
        cout << "Ingresa una opcion: " << endl;
        cin >> opt;
        switch(opt) {

            case 1:
                Paciente *paciente;
                paciente = new Paciente(true);
                _hospital->agregar_paciente(*paciente);
            break;

            case 2:
                _hospital->mostrar_pacientes();
                cout << "\n";
                system("pause");
            break;

            case 3:
                int num_paciente;
                cout << "Ingrese el codigo del paciente: ";
                cin >> num_paciente;
                _hospital->mostrar_pacientes(_hospital->buscar_paciente(num_paciente));
                cout << "\n";
                system("pause");
            break;

            default:
            break;

        }
    } while (opt != 0);
};

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
            break;

            case 4:
            break;
            
        };

    } while (opt != 0);

};