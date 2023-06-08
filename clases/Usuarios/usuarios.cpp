class Usuario {
    private:
        static int total_usuarios;
        static int id_user;
        int numero_user;
        string username;
        bool rol;
    public:
        Usuario();
        Usuario(bool);
        void ver();
        void encabezados();

        // getter
        int getPacientesTotales() {return total_usuarios;}
};

int Usuario::total_usuarios = 0;
int Usuario::id_user = 0;


Usuario::Usuario(){};

Usuario::Usuario(bool _create){
    string _rol;
    cout << "Ingresa el nombre de usuario: ";
    cin >> username;
    cout << "Es administrador (S/N): ";
    cin >> _rol;
    (_rol == "S") ? rol = true : rol = false; 
    total_usuarios++;
    id_user++;
    numero_user = id_user;
};

void Usuario::encabezados() {
	cout 
		<< std::setw(20) << "Numero de Usuario"
		<< '|'
		<< std::setw(20) << "Nombre de usuario"
		<< '|'
		<< std::setw(20) << "Rol"
		<< '|';
};

void Usuario::ver() {
    string _rol;
    rol ? _rol = "Administrator" : _rol = "Basico";

    if (unique){
        encabezados();
        unique = false;
    };
    cout << "\n";
    cout
		<< std::setw(20) << numero_user
		<< '|'
		<< std::setw(20) << username
		<< '|'
		<< std::setw(20) << _rol
		<< '|';
}