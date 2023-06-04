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
        void mostar_pacientes();

        // getter
        int getNumero_Paciente() {return Numero_Paciente; }
        int getPacientesTotales() {return pacientes_total; }

};

int Paciente::pacientes_total = 0;

Paciente::Paciente(){
	Tipo_Sangre = "";
	Enfermedad = "";
};

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

void Paciente::mostar_pacientes() {
    for (int i = 0; i < pacientes_total; i++) {
        cout << "Nombre: " << getNombre() << endl;
    };
};

void Paciente::ver() {
    cout << "Nombre: " << Persona::getNombre() << endl;
};