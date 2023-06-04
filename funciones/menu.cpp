void menu() {

    Hospital *hospital;
    bool sede_create = false;
    int opt;
    int length = 0;
    int *ptr_length = &length;

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
                _crear_paciente(hospital->ptr_paciente(), ptr_length, *paciente );
            break;

            case 3:
                Doctor *doctor;
            break;
            
        };

    } while (opt != 0);

};