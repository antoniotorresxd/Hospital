class Usuarios : public Doctor , public Paciente{
    public:
        bool acceso(Doctor);
};

bool Usuarios::acceso(Doctor _user) {
    bool acceso = false;
    _user.getAdmin() ? acceso = true : acceso = false;
    return acceso;
}