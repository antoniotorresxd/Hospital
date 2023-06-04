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
        int get_Numero_Paciente() {return Numero_Paciente; }

};

int Paciente::pacientes_total = 0;

Paciente::Paciente(){
	Tipo_Sangre = "";
	Enfermedad = "";
};

Paciente::Paciente(bool _create) {
    Numero_Paciente++;
    Persona *p = new Persona(true);
    cout << "Ingresa tipo de Sangre: ";
    cin >> Tipo_Sangre;
};

void Paciente::mostar_pacientes() {
    for (int i = 0; i < pacientes_total; i++) {
        cout << "Nombre: " << getNombre() << endl;
    };
};

void Paciente::ver() {
    cout << "Nombre: " << getNombre() << endl;
};