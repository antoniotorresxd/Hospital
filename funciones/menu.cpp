void menu() {

    Hospital *hospital;
    bool sede_create = false;
    int opt;

    Paciente Array_Pacientes[10];
    Paciente *ptr_array = Array_Pacientes;

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
                agregar_paciente(*paciente, ptr_array);
                // agregar_paciente(*paciente, hospital->direccionArrayPaciente());
            break;

            case 3:
                Doctor *doctor;
            break;

            case 4:
                mostar_pacientes(ptr_array);
            break;
            
        };

    } while (opt != 0);

};