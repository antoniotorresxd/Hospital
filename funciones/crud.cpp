void agregar_paciente(Paciente _obj, Paciente *_array) {
    int position = _obj.getPacientesTotales() -1;
    *(_array + position) = _obj;
};

void mostar_pacientes(Paciente *_array) {
    Paciente *_obj;
    for (int i = 0; i < _obj->getPacientesTotales() ; i++) {
        (_array + i)->ver();
    }
}