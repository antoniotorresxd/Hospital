void menu_usuarios() {

    int opt;
    

    do {
        clean();
        cout << "1.- Registrar Usuario" << endl;
        cout << "0- Salir" << endl;
        cout << "Ingresa una opcion: ";
        cin >> opt;

        switch (opt) {
            case 1:
                clean();
                Usuario *user;
                user = new Usuario(true);
                // *(array + 0) = user;
                opt = 0;
            break;
        }
    } while(opt != 0);

}