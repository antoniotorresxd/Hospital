#define MAX_USER 50

class Hospital : public Doctor, public Paciente {
    private:
        string _Nombre_Hospital;
        Direccion _Direccion;
        string _Telefono;
        // Doctor _Doctor[MAX_USER];
        Paciente Arreglo_Paciente[MAX_USER];
    public:
        Hospital();
        string getHospital() { return _Nombre_Hospital; }
        void ver();
        void agregar_paciente(Paciente);
        void mostrar_pacientes();
};

Hospital::Hospital(){
    cout << "Ingrese la el nombre de la sede: ";
    cin >> _Nombre_Hospital;
    cout << "Ingrese el telefono: ";
    cin >> _Telefono;
    cout << "___Direccion___ " << endl;
    string calle, cp, municipio;
    int numero;
    cout << "Ingrese la calle: ";
    cin >> calle;
    cout << "Ingrese el numero: ";
    cin >> numero;
    cout << "Ingrese el municipio: ";
    cin >> municipio;
    cout << "Ingrese el codigo postal: ";
    cin >> cp;
    _Direccion.setCalle(calle);
    _Direccion.setNumero(numero);
    _Direccion.setCodigoPostal(cp);
    _Direccion.setMunicipio(municipio);
};

void Hospital::ver(){
    cout << "Sede: " << _Nombre_Hospital << endl;
    cout << "Telefono: " << _Telefono << endl;
    _Direccion.ver();
};

void Hospital::agregar_paciente(Paciente _obj) {

    int position = Paciente::getPacientesTotales() -1;
    Arreglo_Paciente[position] = _obj;
    
};

void Hospital::mostrar_pacientes() {
    for (int i = 0; i < Paciente::getPacientesTotales(); i++) {
        // Arreglo_Paciente[i]->ver();
    };
};
