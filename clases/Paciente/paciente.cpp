class Paciente : private Persona {
    private:
        static int pacientes_total;
        static int id_paciente;
        int Numero_Paciente = 0;
        Fecha Fecha_Ingreso;
        Fecha Fecha_Salida;
        string Tipo_Sangre;
        string Enfermedad;
        int doctor_asignado;
        bool admin = false;
    public:
        Paciente();
        Paciente(bool);
        void ver();

        void asignar_doctor(Doctor*);

        // getter
        int getNumero_Paciente() {return Numero_Paciente; }
        int getPacientesTotales() {return pacientes_total; }
        // setter
        void set_PacienteTotal() {pacientes_total -= 1; }
        void set_DoctorAsigando(int _num_doct) {doctor_asignado = _num_doct; }

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
    setGenero(p->getGenero());
    cout << "Ingresa tipo de Sangre: ";
    cin >> Tipo_Sangre;
    pacientes_total++;
    id_paciente++;
    Numero_Paciente = id_paciente;
    doctor_asignado = 0;
};

void Paciente::ver() {
    if (unique){
        cout << std::setw(20) << "Numero Paciente"
        << '|';
        Persona::encabezados();
        cout 
            << std::setw(15) << "Tipo de Sangre"
            << '|'
            << std::setw(20) << "Enfermedad"
            << '|'
            << std::setw(20) << "Doctor"
            << '|';
        unique = false;
    };
    cout << "\n";
	cout
		<< std::setw(20) << Numero_Paciente
		<< '|';
    Persona::ver();
	cout
		<< std::setw(15) << Tipo_Sangre
		<< '|'
		<< std::setw(20) << Enfermedad
		<< '|'
		<< std::setw(20) << doctor_asignado
		<< '|';
};
