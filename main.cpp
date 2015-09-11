#include <iostream>
#include <string>
#include <iterator>

using namespace std;

struct Categoria {
  unsigned int codigo;
  string descripcion;
};

struct Prestatario {
  unsigned int codigo;
  string apellido;
  string nombre;
};

struct Prestamo {
  Categoria *categoria;
  Prestatario *prestatario;
  string descripcion;
  bool estado;
};

struct Menu {
  int cant_opciones;
  string opciones[7];
};

void dibujar_menu(Menu *menu) {
    cout << "0 - Salir del programa" << endl;
    for(int i=0; i < menu->cant_opciones; i++) {
      cout << i+1 << " - " << menu->opciones[i] << endl;
    }
}

int main() {
  int opcion = -1;
  Menu nivel_1 = {3, {
    "Administrar y consultar Categorías y Prestatarios",
    "Administrar Préstamos",
    "Consultar Préstamos"}
  };
  Menu nivel_1_1 = {6, {
    "Agregar categoría",
    "Modificar categoría",
    "Eliminar categoría",
    "Agregar prestatario",
    "Modificar prestatario",
    "Eliminar prestatario"}
  };
  Menu nivel_1_2 = {4, {
    "Agregar préstamo",
    "Modificar préstamo",
    "Eliminar préstamo",
    "Devolver préstamo"}
  };
  Menu nivel_1_3 = {4, {
    "Cantidad de objetos prestados por categoría",
    "Listado de préstamos por categoría",
    "Listado de préstamos ordenados por categoría o prestatario",
    "Listar todos los prestatarios que tienen al menos un objeto prestado"}
  };
  do {
    switch (opcion) {
      case 1:
        dibujar_menu(&nivel_1_1);
        break;
      case 2:
        dibujar_menu(&nivel_1_2);
        break;
      case 3:
        dibujar_menu(&nivel_1_3);
        break;
       default:
         dibujar_menu(&nivel_1);
    }
    cout << "ingrese opcion: ";
    cin >> opcion;
  } while (opcion != 0);

  return 0;
}

