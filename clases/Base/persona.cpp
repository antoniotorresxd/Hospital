class Persona{
	private:
		string Nombre;
		string Apellido_Paterno;
		string Apellido_Materno;
		string Telefono;
		string Genero;
		int Edad;
		Fecha Nacimiento;
		Direccion _Direccion;
	public:
		Persona();
		Persona(bool);
		void encabezados();
		virtual void ver();

		// setters
		void setNombre(string _nombre) { Nombre = _nombre; }
		void setApellido_Paterno(string _apellido) { Apellido_Paterno = _apellido;}
		void setApellido_Materno(string _apellido) { Apellido_Materno = _apellido;}
		void setTelefono(string _telefono) { Telefono = _telefono;}
		void setGenero(string _genero) { Genero = _genero;}
		void setEdad(int _edad) { Edad = _edad;}

		// getter
		string getNombre() {return Nombre;}
		string getApellidoPaterno() {return Apellido_Paterno;}
		string getApellidoMaterno() {return Apellido_Materno;}
		string getTelefono() {return Telefono;}
		string getGenero() {return Genero;}
		int getEdad() {return Edad;}
};

Persona :: Persona () {};

Persona :: Persona (bool _create) {
	if (_create){
		clean();
		cout << "Ingresa el nombre: ";
		cin.ignore();
		getline(cin, Nombre);
		cout << "ingresa el Apellido paterno: ";
		cin >> Apellido_Paterno;
		cout << "Ingresa el Apellido Materno: ";
		cin >> Apellido_Materno;
		cout << "Ingresa el Telefono: ";
		cin >> Telefono;
		cout << "Ingrese la edad: ";
		cin >> Edad;
		cout << "Ingrese el genero (Mujer/Hombre): ";
		cin >> Genero;
	};
};

void Persona::encabezados() {
	cout 
		<< std::setw(40) << "Nombre"
		<< '|'
		<< std::setw(10) << "Telefono"
		<< '|'
		<< std::setw(5) << "Edad"
		<< '|'
		<< std::setw(10) << "Sexo"
		<< '|';
};

void Persona :: ver() {
	string name = Apellido_Paterno + " " + Apellido_Materno + " " + Nombre;
	cout
		<< std::setw(40) << name
		<< '|'
		<< std::setw(10) << Telefono
		<< '|'
		<< std::setw(5) << Edad
		<< '|'
		<< std::setw(10) << Genero
		<< '|';
};

