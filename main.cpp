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

#include "./clases/tipos_datos.cpp"
#include "./clases/persona.cpp"
#include "./clases/doctor.cpp"
#include "./clases/paciente.cpp"
#include "./clases/usuarios.cpp"
#include "./clases/hospital.cpp"

#include "./funciones/crud.cpp"
#include "./funciones/menu.cpp"

main () {
    menu();
};