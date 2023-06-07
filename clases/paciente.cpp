bool unique = true;
class Paciente : private Persona {
    private:
        static int pacientes_total;
        static int id_paciente;
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
        // setter
        void set_PacienteTotal() {pacientes_total -= 1; }

};

int Paciente::pacientes_total = 0;
int Paciente::id_paciente = 0;

Paciente::Paciente(){};

Paciente::Paciente(bool _create) {
    Persona *p = new Persona(true);
    setNombre(p->getNombre());
    setApellido_Paterno(p->getApellidoPaterno());
    setApellido_Materno(p->getApellidoMaterno());
    setTelefono(p->getTelefono());
    setEdad(p->getEdad());
    cout << "Ingresa tipo de Sangre: ";
    cin >> Tipo_Sangre;
    pacientes_total++;
    id_paciente++;
    Numero_Paciente = id_paciente;
};

void Paciente::ver() {
    if (unique){
        cout << std::setw(20) << "Numero Paciente"
        << '|';
        Persona::encabezados();
        cout 
            << std::setw(20) << "Tipo de Sangre"
            << '|'
            << std::setw(20) << "Enfermedad"
            << '|';
        unique = false;
    };
    cout << "\n";
	cout
		<< std::setw(20) << Numero_Paciente
		<< '|';
    Persona::ver();
	cout
		<< std::setw(20) << Tipo_Sangre
		<< '|'
		<< std::setw(20) << Enfermedad
		<< '|';
};


