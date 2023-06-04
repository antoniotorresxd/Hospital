void menu() {

    Hospital *hospital;
    bool sede_create = false;
    int opt;


    do {

        sede_create ? cout << "1.- Mostrar Sede" << endl : cout << "1.- Registrar Sede" << endl;
        cout << "2.- Registrar Paciente" << endl;
        cout << "3.- Registrar Doctor" << endl;
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
                Paciente *paciente;
                paciente = new Paciente(true);
                hospital->agregar_paciente(*paciente);
            break;

            case 3:
                Doctor *doctor;
            break;

            case 4:
            hospital->mostrar_pacientes();
            break;
            
        };

    } while (opt != 0);

};