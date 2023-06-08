const int MAX_USER = 50;

class Hospital : public Doctor, public Paciente {
    private:
        string _Nombre_Hospital;
        Direccion _Direccion;
        string _Telefono;
        Paciente Arreglo_Paciente[MAX_USER];
        Doctor Arreglo_Doctor[MAX_USER];
    public:
        Hospital();
        void ver();

        // pacientes
        void agregar_paciente(Paciente);
        int buscar_paciente(int);
        void eliminar_paciente(int);
        void mostrar_pacientes();
        void mostrar_pacientes(int);

        // doctores
        void agregar_doctor(Doctor);
        int buscar_doctor(int);
        void eliminar_doctor(int);
        void mostrar_doctor();
        void mostrar_doctor(int);

};

Hospital::Hospital(){
    clean();
    cin.ignore();
    cout << "Ingrese el nombre de la sede: ";
    getline(cin, _Nombre_Hospital);
    cout << "Ingrese el telefono: ";
    cin >> _Telefono;
    cout << "___Direccion___ " << endl;
    string calle, cp, municipio;
    int numero;
    cin.ignore();
    cout << "Ingrese la calle: ";
    getline(cin, calle);
    cout << "Ingrese el numero: ";
    cin >> numero;
    cin.ignore();
    cout << "Ingrese el municipio: ";
    getline(cin, municipio);
    cout << "Ingrese el codigo postal: ";
    cin >> cp;
    _Direccion.setCalle(calle);
    _Direccion.setNumero(numero);
    _Direccion.setCodigoPostal(cp);
    _Direccion.setMunicipio(municipio);
};

void Hospital::ver(){
    clean();
	cout 
		<< std::setw(20) << "Sede"
		<< '|'
		<< std::setw(20) << "Telefono"
		<< '|'
		<< std::setw(15) << "Direccion" << std::setw(20)
		<< '|';
        cout << "\n";
    cout
		<< std::setw(20) << _Nombre_Hospital
		<< '|'
		<< std::setw(20) << _Telefono
		<< '|'
        << std::setw(10); _Direccion.ver();
		cout << '|';
    system("pause");
};

// pacientes

void Hospital::agregar_paciente(Paciente _obj) {
    int position = _obj.getPacientesTotales() -1;
    Arreglo_Paciente[position] = _obj;
};

int Hospital::buscar_paciente(int _numero_paciente) {
    int position = -1;
    for (int i = 0; i < Paciente::getPacientesTotales(); i++) {
        if ((Arreglo_Paciente[i].getNumero_Paciente()) == _numero_paciente){
            position = i;
            break;
        }
    };
    return position;
};

void Hospital::eliminar_paciente(int _position) {
    int count = 0;
    for(int i=0; i<Paciente::getPacientesTotales(); i++) {
        if (_position != i) {
            Arreglo_Paciente[count] = Arreglo_Paciente[i];
            count++;
        };
    };
    if (_position >= 0) {
        Paciente::set_PacienteTotal();
    } else {
        cout << "No existe el paciente." << endl;
    };
};

void Hospital::mostrar_pacientes() {
    clean();
    for (int i = 0; i < Paciente::getPacientesTotales(); i++) {
        Arreglo_Paciente[i].ver();
    };
    unique = true;
};

void Hospital::mostrar_pacientes(int position) {
    clean();
    if (position != -1) {
        Arreglo_Paciente[position].ver();
        unique = true;
    } else {
        cout << "No existe el paciente " << endl;
    };
};

// doctores

void Hospital::agregar_doctor(Doctor _obj) {
    int position = _obj.getDoctoresTotales() -1;
    Arreglo_Doctor[position] = _obj;
};

int Hospital::buscar_doctor(int _numero_doctor) {
    int position = -1;
    for (int i = 0; i < Doctor::getDoctoresTotales(); i++) {
        if ((Arreglo_Doctor[i].getNumero_Doctor()) == _numero_doctor){
            position = i;
            break;
        }
    };
    return position;
};

void Hospital::eliminar_doctor(int _position) {
    int count = 0;
    for(int i=0; i<Doctor::getDoctoresTotales(); i++) {
        if (_position != i) {
            Arreglo_Doctor[count] = Arreglo_Doctor[i];
            count++;
        };
    };
    if (_position >= 0) {
        Doctor::set_DoctorTotal();
    } else {
        cout << "No existe el doctor." << endl;
    };
};

void Hospital::mostrar_doctor() {
    clean();
    for (int i = 0; i < Doctor::getDoctoresTotales(); i++) {
        Arreglo_Doctor[i].ver();
    };
    unique = true;
};

void Hospital::mostrar_doctor(int position) {
    clean();
    if (position != -1) {
        Arreglo_Doctor[position].ver();
        unique = true;
    } else {
        cout << "No existe el doctor " << endl;
    };
};