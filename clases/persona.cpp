#include<iostream>
using namespace std; 

class Persona{
	private:
		string Nombre;
		string Apellido_Paterno;
		string Apellido_Materno;
		string Telefono;
		bool Genero;
		int Edad;
		Fecha Nacimiento;
		Direccion _Direccion;
	public:
		Persona();
		Persona(bool);
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
	
};

Persona :: Persona () {
	Nombre = "";
	Apellido_Paterno = "";
	Apellido_Materno = "";
	Telefono = "";
	Genero = true;
	Edad = 0;
};

Persona :: Persona (bool _create) {
	if (_create){
		cout << "Ingresa el nombre: ";
		cin >> Nombre;
		cout << "ingresa el Apellido paterno: ";
		cin >> Apellido_Paterno;
		cout << "Ingresa el Apellido Materno: ";
		cin >> Apellido_Materno;
		cout << "Ingresa el Telefono: ";
		cin >> Telefono;
		Genero = true;
		Edad = 0;
	}
};

void Persona :: ver() {

}
