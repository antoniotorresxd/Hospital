class Doctor : private Persona {
    private:
        static int doctor_total;
        int Numero_Doctor = 0;
        string Especialidad;
        Fecha Fecha_Ingreso;
        bool admin = true;
    public:
        Doctor();
        bool getAdmin() { return admin; }
};

int Doctor::doctor_total = 0;

Doctor::Doctor(){
    Numero_Doctor++;
	Especialidad = "";
    // Fecha_Ingreso = new Fecha();
};