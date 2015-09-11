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
  int id;
  int cant_opciones;
  string opciones[7];
};

void dibujar_menu(Menu *menu) {
    cout << "0 - Salir del programa" << endl;
    for(int i=0; i < menu->cant_opciones; i++) {
      cout << i+1 << " - " << menu->opciones[i] << endl;
    }
    if (menu->id != 0) {
      cout << "9 - Volver al menu principal" << endl;
    }
}

int main() {
  int opcion = -1;
  Menu menu_0 = {0, 3, {
    "Administrar y consultar Categorías y Prestatarios",
    "Administrar Préstamos",
    "Consultar Préstamos"}
  };
  Menu menu_1 = {1, 6, {
    "Agregar categoría",
    "Modificar categoría",
    "Eliminar categoría",
    "Agregar prestatario",
    "Modificar prestatario",
    "Eliminar prestatario"}
  };
  Menu menu_2 = {2, 4, {
    "Agregar préstamo",
    "Modificar préstamo",
    "Eliminar préstamo",
    "Devolver préstamo"}
  };
  Menu menu_3 = {3, 4, {
    "Cantidad de objetos prestados por categoría",
    "Listado de préstamos por categoría",
    "Listado de préstamos ordenados por categoría o prestatario",
    "Listar todos los prestatarios que tienen al menos un objeto prestado"}
  };
  Menu *menues[4]={&menu_0,&menu_1,&menu_2,&menu_3};
  int menu_actual = 0;
  do {
    switch (menu_actual*10 + opcion) {
      case 1:
        dibujar_menu(menues[1]);
        menu_actual = 1;
        break;
      case 11:
        //agregar categoria
        break;
      case 12:
        //modificar categoria
        break;
      case 13:
        //eliminiar catergoria
        break;
      case 14:
        //agregar prestatario
        break;
      case 15:
        //modificar prestatario
        break;
      case 16:
        //eliminar prestatario
        break;
      case 2:
        dibujar_menu(menues[2]);
        menu_actual = 2;
        break;
      case 21:
        //agreagar prestamo
        break;
      case 22:
        //modificar prestamo
        break;
      case 23:
        //eliminar prestamo
        break;
      case 24:
        //devolver prestamo
        break;
      case 3:
        dibujar_menu(menues[3]);
        menu_actual = 3;
        break;
      case 31:
        //cant obj prestados por cat
        break;
      case 32:
        //list prestamo por cat
        break;
      case 33:
        //list ordenado prestamo por cat o prestatario
        break;
      case 34:
        //list prestatario la menos un obj prestado
        break;
      default:
        dibujar_menu(menues[0]);
        menu_actual = 0;
    }
    cout << "Ingrese opcion: ";
    cin >> opcion;
  } while (opcion != 0);

  return 0;
}

