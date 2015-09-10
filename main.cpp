#include <iostream>
#include <string>

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

int main()
{
    Categoria libros = {1, "libros"};
    Prestatario carlos = {1, "Chiariotti", "Carlos"};
    Prestamo prestamo = {&libros, &carlos, "Agilmente", true};

    cout << (*prestamo.categoria).descripcion << " - " << (*prestamo.prestatario).apellido;

    return 0;
}

