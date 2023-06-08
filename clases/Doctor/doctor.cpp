class Doctor : private Persona {
    private:
        static int doctor_total;
        static int id_doctor;
        int Numero_Doctor = 0;
        string Especialidad;
        Fecha Fecha_Ingreso;
        bool admin = true;
    public:
        Doctor();
        Doctor(bool);
        void ver();
        // getter
        int getNumero_Doctor() {return Numero_Doctor; }
        int getDoctoresTotales() {return doctor_total; }
        // setter
        void set_DoctorTotal() {doctor_total -= 1; }
        void setEspecialidad(string _especialidad) {Especialidad = _especialidad;}
};

int Doctor::doctor_total = 0;
int Doctor::id_doctor = 0;

Doctor::Doctor(){};

Doctor::Doctor(bool _create){
    Persona *p = new Persona(true);
    setNombre(p->getNombre());
    setApellido_Paterno(p->getApellidoPaterno());
    setApellido_Materno(p->getApellidoMaterno());
    setTelefono(p->getTelefono());
    setEdad(p->getEdad());
    setGenero(p->getGenero());
    cout << "Ingresa la especialidad: ";
    cin >> Especialidad;
    doctor_total++;
    id_doctor++;
    Numero_Doctor = id_doctor;
};

void Doctor::ver() {
    if (unique){
        cout << std::setw(20) << "Numero Doctor"
        << '|';
        Persona::encabezados();
        cout 
            << std::setw(20) << "Especialidad"
            << '|';
        unique = false;
    };
    cout << "\n";
	cout
		<< std::setw(20) << Numero_Doctor
		<< '|';
    Persona::ver();
	cout
		<< std::setw(20) << Especialidad
		<< '|';
};