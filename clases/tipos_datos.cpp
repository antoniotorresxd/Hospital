class Fecha{
	private:
		int dia;
		int mes;
		int anio;
	public:
		Fecha();
		Fecha(bool);
		void ver();
};

Fecha::Fecha() {
	time_t now;
	time(&now);
	struct tm *local = localtime(&now);
	dia = local->tm_mday;
	mes = local->tm_mon + 1;
	anio = local->tm_year + 1900;
};

Fecha::Fecha(bool _create) {
	if (_create) {
		cout << "Ingresa el anio: ";
		cin >> dia;
		cout << "Ingresa el mes: ";
		cin >> mes;
		cout << "Ingrese el dia: ";
		cin >> anio;
	};
};

void Fecha::ver() {
	cout << dia << "-" << mes << "-" << anio << endl;
}

class Direccion{
	private:
		string Calle;
		string Municipio;
		string Codigo_Postal;
		int Numero;
	public:
		Direccion();
		Direccion(bool);
		Direccion(string,int,string,string);
		void ver();

		// setter
		void setCalle(string _c) {Calle = _c;}
		void setNumero(int _n) {Numero = _n;}
		void setMunicipio(string _m) {Municipio = _m;}
		void setCodigoPostal(string _cp) {Codigo_Postal = _cp;}
};

Direccion::Direccion(){
	Calle = "";
	Numero = 0;
	Municipio = "";
	Codigo_Postal = "";
};

Direccion::Direccion(bool _create){
	if (_create) {
		cout << "Ingrese la calle: ";
		cin >> Calle;
		cout << "Ingrese el numero: ";
		cin >> Numero;
		cout << "Ingrese el municipio: ";
		cin >> Municipio;
		cout << "Ingrese el codigo postal: ";
		cin >> Codigo_Postal;
	};
};

void Direccion::ver(){
	cout << "Calle: " << Calle << "," << Numero << endl;
	cout << "Municipio: " << Municipio << endl;
	cout << "Postal: " << Codigo_Postal << endl;
};