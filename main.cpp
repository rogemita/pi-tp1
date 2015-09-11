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
  int nivel;
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
  Menu nivel_1 = {1, 3, {
    "Administrar y consultar Categorías y Prestatarios",
    "Administrar Préstamos",
    "Consultar Préstamos"}
  };
  do {
    switch (opcion) {
     default:
        dibujar_menu(&nivel_1);
    }
    cout << "ingrese opcion: ";
    cin >> opcion;
  } while (opcion != 0);

  return 0;
}

