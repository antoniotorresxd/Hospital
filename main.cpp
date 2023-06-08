#include <iostream>
#include <time.h>
#include <string>
#include <iomanip>
using namespace std;

#ifdef _WIN32
  #include<windows.h>
#endif  

void clean() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

bool unique = true;

#include "./clases/Base/tipos_datos.cpp"
#include "./clases/Base/persona.cpp"
#include "./clases/Doctor/doctor.cpp"
#include "./clases/Paciente/paciente.cpp"
#include "./clases/Hospital/hospital.cpp"
#include "./clases/Usuarios/usuarios.cpp"
#include "./clases/menu.cpp"


main () {
    menu();
};