#include <iostream>
#include <string>

using namespace std;

int const CANTIDAD_CATEGORIAS = 200;

struct Categoria {
  unsigned int codigo;
  string descripcion;
};

/*
PROPÓSITO: crear una categoria
PARÁMETROS:
    descripcion: el campo descripcion de categoria (precondicion: cadena no vacia)
RETORNO: una categoria
*/
Categoria crear_categoria(unsigned int codigo, string descripcion) {
    /*
     *  crea una variable del tipo Categoria utilizando la descripcion y el codigo pasados por parametro
    */
    Categoria categoria = {0, "una categoria"};
    return categoria;
}

void mostrar_categoria(Categoria categoria) {
    cout << categoria.codigo << " - " << categoria.descripcion << endl;
}

struct Lista_de_categorias {
    Categoria lista[CANTIDAD_CATEGORIAS];
    unsigned int longitud {0};
};

struct Almacen {
    Lista_de_categorias categorias;
};

/*
PROPÓSITO: generar un codigo automatico para la estructura a crear
PARÁMETROS:
    alamcen: estructura donde se encuentra la informacion almacenada
    almacen_especifico: el campo del almacen que se va a utilizar para el proposito
RETORNO: un numero positivo
*/
unsigned int obtener_codigo(Almacen &almancen, string almacen_especifico) {
    /*
     * segun el almacen_especifico buscar la lista en el almacen y pedirle la longitud y restarle 1
     */
    unsigned int codigo = 0;
    return codigo;
}

/*
PROPÓSITO: almacena una categoria
PARÁMETROS:
    categorias: el almacen de categorias
    categoria: la categoria a almacenar
*/
void almacenar_categoria(Lista_de_categorias &categorias, Categoria &categoria) {
    /*
     * agrega una nueva categoria en la lista donde se almacenan las categorias
     * Ademas mantiene la longitud de la lista de categorias
     */
}

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

void dibujar_menu(Menu &menu) {
    cout << "0 - Salir del programa" << endl;
    for(int i=0; i < menu.cant_opciones; i++) {
      cout << i+1 << " - " << menu.opciones[i] << endl;
    }
    if (menu.id != 0) {
      cout << "9 - Volver al menu principal" << endl;
    }
}

/*
PROPÓSITO: obtener una cadena de un campo de dato de la estructura correspondiente
PARÁMETROS:
    texto_a_mostrar: texto de referencia a lo que se debe ingresar
    requerido: bool que indica si este campo es o no obligatorio
RETORNO: una cadena
*/
string pedir_dato(string texto_a_mostrar, bool requerido) {
    /*
     * solicita al usuario el ingreso de una cadena por teclado,
     * verifica si es obligatoria o no segun el parametro 'requerido', volviendo a solicitarlo de ser necesario
     * luego de la validacion retorna la cadena ingresada
     */
    return "una cadena";
}

int main() {
  Lista_de_categorias categorias = {};
  Almacen almacen = {};

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
        dibujar_menu(*menues[1]);
        menu_actual = 1;
        break;
      case 11: {
        //agregar categoria
        string descripcion = pedir_dato("Ingrese la descripción de la categoría: ", true);
        unsigned int codigo = obtener_codigo(almacen, "categorias");
        Categoria categoria = crear_categoria(codigo, descripcion);
        almacenar_categoria(almacen.categorias, categoria);
        mostrar_categoria(categoria);
        break;
      }
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
        dibujar_menu(*menues[2]);
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
        dibujar_menu(*menues[3]);
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
        dibujar_menu(*menues[0]);
        menu_actual = 0;
    }
    cout << "Ingrese opcion: ";
    cin >> opcion;
  } while (opcion != 0);

  return 0;
}

