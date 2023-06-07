const int MAX_USER = 50;

class Hospital : public Doctor, public Paciente {
    private:
        string _Nombre_Hospital;
        Direccion _Direccion;
        string _Telefono;
        Paciente Arreglo_Paciente[MAX_USER];
        // Doctor _Doctor[MAX_USER];
    public:

        Hospital();
        void ver();

        // pacientes
        void agregar_paciente(Paciente);
        void mostrar_pacientes();

        // getter
        string getHospital() { return _Nombre_Hospital; }
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

void Hospital::agregar_paciente(Paciente _obj) {
    int position = _obj.getPacientesTotales() -1;
    Arreglo_Paciente[position] = _obj;
};

void Hospital::mostrar_pacientes() {
    for (int i = 0; i < Paciente::getPacientesTotales(); i++) {
        Arreglo_Paciente[i].ver();
    };
    unique = true;
};
