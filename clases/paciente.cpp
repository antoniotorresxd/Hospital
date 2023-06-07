bool unique = true;
class Paciente : private Persona {
    private:
        static int pacientes_total;
        int Numero_Paciente = 0;
        Fecha Fecha_Ingreso;
        Fecha Fecha_Salida;
        string Tipo_Sangre;
        string Enfermedad;
        bool admin = false;
    public:
        Paciente();
        Paciente(bool);
        void ver();
        // getter
        int getNumero_Paciente() {return Numero_Paciente; }
        int getPacientesTotales() {return pacientes_total; }

};

int Paciente::pacientes_total = 0;

Paciente::Paciente(){};

Paciente::Paciente(bool _create) {
    Numero_Paciente++;
    Persona *p = new Persona(true);
    setNombre(p->getNombre());
    setApellido_Paterno(p->getApellidoPaterno());
    setApellido_Materno(p->getApellidoMaterno());
    setTelefono(p->getTelefono());
    setEdad(p->getEdad());
    cout << "Ingresa tipo de Sangre: ";
    cin >> Tipo_Sangre;
    pacientes_total++;
};

void Paciente::ver() {
    if (unique){
        Persona::encabezados();
        cout 
            << std::setw(20) << "Tipo de Sangre"
            << '|'
            << std::setw(20) << "Enfermedad"
            << '|';
        unique = false;
    };
    cout << "\n";
    Persona::ver();
	cout
		<< std::setw(20) << Tipo_Sangre
		<< '|'
		<< std::setw(20) << Enfermedad
		<< '|';
};