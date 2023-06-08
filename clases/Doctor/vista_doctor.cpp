void menu_doctor(Hospital *_hospital) {
    clean();
    int opt;
    int num_doctor;
    int num_paciente;

     do {
        clean();
        cout << "1.- Registrar Doctor" << endl;
        cout << "2.- Mostrar doctores" << endl;
        cout << "3.- Buscar doctor" << endl;
        cout << "4.- Eliminar doctor" << endl;
        if (_hospital->getTotalPacientes() > 0 && _hospital->getTotalDoctores() > 0) {
            cout << "5.- Editar Enfermedad" << endl;
        }
        cout << "0.- Menu inicial" << endl;
        cout << "Ingresa una opcion: ";
        cin >> opt;
        switch(opt) {

            case 1:
                Doctor *doctor;
                doctor = new Doctor(true);
                _hospital->agregar_doctor(*doctor);
            break;

            case 2:
                _hospital->mostrar_doctor();
                cout << "\n";
                system("pause");
            break;

            case 3:
                cout << "Ingrese el codigo del doctor: ";
                cin >> num_doctor;
                _hospital->mostrar_doctor(_hospital->buscar_doctor(num_doctor));
                cout << "\n";
                system("pause");
            break;

            case 4:
                cout << "Ingrese el codigo del doctor: ";
                cin >> num_doctor;
                _hospital->eliminar_doctor(_hospital->buscar_doctor(num_doctor));
                cout << "\n";
                system("pause");
            break;

            case 5:
                cout << "Ingresa el codigo del paciente: ";
                cin >> num_paciente;
                _hospital->asignar_enfermedad(_hospital->getPaciente(num_paciente));
            break;

            default:
            break;

        }
    } while( opt != 0);

};