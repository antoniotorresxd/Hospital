#include<iostream>
using namespace std; 

class Persona{
	private:
		string Nombre;
		string Apellido_Paterno;
		string Apellido_Materno;
		string Telefono;
		bool Genero = true;
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
		void setGenero(bool _genero) { Genero = _genero;}
		void setEdad(int _edad) { Edad = _edad;}

		// getter
		string getNombre() {return Nombre;}
		string getApellidoPaterno() {return Apellido_Paterno;}
		string getApellidoMaterno() {return Apellido_Materno;}
		string getTelefono() {return Telefono;}
		int getEdad() {return Edad;}
};

Persona :: Persona () {};

Persona :: Persona (bool _create) {
	if (_create){
		clean();
		string genero;
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
		cout << "Ingrese el genero (M/H): ";
		cin >> genero;
		genero == "M" ? Genero = true : Genero = false;
	};
};

void Persona::encabezados() {
	cout 
		<< std::setw(20) << "Nombre"
		<< '|'
		<< std::setw(20) << "Apellido Paterno"
		<< '|'
		<< std::setw(20) << "Apellido Materno"
		<< '|'
		<< std::setw(20) << "Telefono"
		<< '|'
		<< std::setw(20) << "Edad"
		<< '|';
};

void Persona :: ver() {
	cout
		<< std::setw(20) << Nombre
		<< '|'
		<< std::setw(20) << Apellido_Paterno
		<< '|'
		<< std::setw(20) << Apellido_Materno
		<< '|'
		<< std::setw(20) << Telefono
		<< '|'
		<< std::setw(20) << Edad
		<< '|';
};
