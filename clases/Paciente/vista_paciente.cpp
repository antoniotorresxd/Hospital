void menu_paciente(Hospital *_hospital) {

    clean();
    
    int opt;
    int num_paciente;
    int num_doctor;
    
    do {
        clean();
        cout << "1.- Registrar Paciente" << endl;
        cout << "2.- Mostrar pacientes" << endl;
        cout << "3.- Buscar paciente" << endl;
        cout << "4.- Eliminar paciente" << endl;
        if (_hospital->getTotalPacientes() > 0 && _hospital->getTotalDoctores() > 0) {
            cout << "5.- Asignar doctor" << endl;
        }
        
        cout << "0.- Menu inicial" << endl;
        cout << "Ingresa una opcion: ";
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
                cout << "Ingrese el codigo del paciente: ";
                cin >> num_paciente;
                _hospital->mostrar_pacientes(_hospital->buscar_paciente(num_paciente));
                cout << "\n";
                system("pause");
            break;

            case 4:
                cout << "Ingrese el codigo del paciente: ";
                cin >> num_paciente;
                _hospital->eliminar_paciente(_hospital->buscar_paciente(num_paciente));
                cout << "\n";
                system("pause");
            break;

            case 5:
                cout << "Ingresa el codigo del paciente: ";
                cin >> num_paciente;
                cout << "Ingresa el codigo del doctor: ";
                cin >> num_doctor;
                _hospital->asignar_doctor(_hospital->getDoctor(num_doctor),_hospital->getPaciente(num_paciente));
                system("pause");
            break;

            default:
            break;

        }
    } while (opt != 0);
};