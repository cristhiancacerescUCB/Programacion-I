// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 28-11-2025
// Número de ejercicio: 3
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Pizza {
    int codigo;
    char nombre[50];
    char tipo[20];
    char tamanio[20];
    float precio;
    int cantidadVendida;
};

// Funcion para calcular precio segun tipo
float calcularPrecio(float precioBase, char tipo[]) {
    if(strcmp(tipo, "ESPECIAL") == 0) {
        return precioBase * 1.10;
    }
    return precioBase;
}

// Funcion para adicionar pizza
void adicionarPizza() {
    Pizza p;
    float precioBase;
    
    cout << "\nADICIONAR PIZZA\n";
    cout << "===============\n";
    cout << "Codigo: ";
    cin >> p.codigo;
    
    cin.ignore();
    cout << "Nombre: ";
    cin.getline(p.nombre, 50);
    
    cout << "Tipo (TRADICIONAL/ESPECIAL): ";
    cin.getline(p.tipo, 20);
    
    cout << "Tamanio (XS/MEDIANA/GRANDE/FAMILIAR/INTERMINABLE): ";
    cin.getline(p.tamanio, 20);
    
    cout << "Precio base: ";
    cin >> precioBase;
    
    p.precio = calcularPrecio(precioBase, p.tipo);
    p.cantidadVendida = 0;
    
    cout << "Precio final: " << p.precio << " Bs.\n";
    
    ofstream archivo;
    archivo.open("PRODUCTO.BIN", ios::binary | ios::app);
    archivo.write((char*)&p, sizeof(Pizza));
    archivo.close();
    
    cout << "\nPizza agregada correctamente!\n";
}

// Funcion para listar pizzas
void listarPizzas() {
    ifstream archivo;
    archivo.open("PRODUCTO.BIN", ios::binary);
    
    if(!archivo.is_open()) {
        cout << "\nNo hay pizzas registradas.\n";
        return;
    }
    
    cout << "\nLISTADO DE PIZZAS\n";
    cout << "=================\n\n";
    cout << "CODIGO\tNOMBRE\t\tTIPO\t\tTAMANIO\t\tPRECIO\tCANTIDAD\tTOTAL\n";
    cout << "-------------------------------------------------------------------------------\n";
    
    Pizza p;
    while(archivo.read((char*)&p, sizeof(Pizza))) {
        float total = p.cantidadVendida * p.precio;
        cout << p.codigo << "\t" << p.nombre << "\t\t" << p.tipo << "\t\t"
             << p.tamanio << "\t\t" << p.precio << "\t" 
             << p.cantidadVendida << "\t\t" << total << endl;
    }
    
    archivo.close();
}

// Funcion para modificar precio
void modificarPrecio() {
    int codigo;
    cout << "\nIngrese codigo de la pizza: ";
    cin >> codigo;
    
    fstream archivo;
    archivo.open("PRODUCTO.BIN", ios::binary | ios::in | ios::out);
    
    if(!archivo.is_open()) {
        cout << "\nNo hay pizzas registradas.\n";
        return;
    }
    
    Pizza p;
    bool encontrado = false;
    int posicion = 0;
    
    while(archivo.read((char*)&p, sizeof(Pizza))) {
        if(p.codigo == codigo) {
            cout << "\nPizza encontrada: " << p.nombre << endl;
            cout << "Precio actual: " << p.precio << endl;
            cout << "Nuevo precio: ";
            cin >> p.precio;
            
            archivo.seekp(posicion * sizeof(Pizza), ios::beg);
            archivo.write((char*)&p, sizeof(Pizza));
            
            cout << "\nPrecio modificado correctamente!\n";
            encontrado = true;
            break;
        }
        posicion++;
    }
    
    if(!encontrado) {
        cout << "\nPizza no encontrada.\n";
    }
    
    archivo.close();
}

// Funcion para eliminar pizza
void eliminarPizza() {
    int codigo;
    cout << "\nIngrese codigo de la pizza a eliminar: ";
    cin >> codigo;
    
    ifstream archivo;
    archivo.open("PRODUCTO.BIN", ios::binary);
    
    if(!archivo.is_open()) {
        cout << "\nNo hay pizzas registradas.\n";
        return;
    }
    
    ofstream archivoTemp;
    archivoTemp.open("TEMP.BIN", ios::binary);
    
    Pizza p;
    bool encontrado = false;
    
    while(archivo.read((char*)&p, sizeof(Pizza))) {
        if(p.codigo != codigo) {
            archivoTemp.write((char*)&p, sizeof(Pizza));
        } else {
            encontrado = true;
        }
    }
    
    archivo.close();
    archivoTemp.close();
    
    remove("PRODUCTO.BIN");
    rename("TEMP.BIN", "PRODUCTO.BIN");
    
    if(encontrado) {
        cout << "\nPizza eliminada correctamente!\n";
    } else {
        cout << "\nPizza no encontrada.\n";
    }
}

// Funcion para adicionar ventas
void adicionarVentas() {
    ifstream archivoVentas;
    archivoVentas.open("VENTAS.TXT");
    
    if(!archivoVentas.is_open()) {
        cout << "\nNo se pudo abrir el archivo VENTAS.TXT\n";
        return;
    }
    
    char carnet[20], tamanio[20];
    int codigo, cantidad;
    
    while(archivoVentas >> carnet) {
        archivoVentas.ignore();
        archivoVentas >> codigo;
        archivoVentas.ignore();
        archivoVentas.getline(tamanio, 20, ';');
        archivoVentas >> cantidad;
        
        fstream archivo;
        archivo.open("PRODUCTO.BIN", ios::binary | ios::in | ios::out);
        
        Pizza p;
        int posicion = 0;
        
        while(archivo.read((char*)&p, sizeof(Pizza))) {
            if(p.codigo == codigo && strcmp(p.tamanio, tamanio) == 0) {
                p.cantidadVendida += cantidad;
                archivo.seekp(posicion * sizeof(Pizza), ios::beg);
                archivo.write((char*)&p, sizeof(Pizza));
                break;
            }
            posicion++;
        }
        
        archivo.close();
    }
    
    archivoVentas.close();
    cout << "\nVentas procesadas correctamente!\n";
}

// Funcion para mostrar menu
void mostrarMenu() {
    cout << "\nMENU PIZZERIA ELIS\n";
    cout << "==================\n";
    cout << "1. Adicionar Pizza\n";
    cout << "2. Listado de Pizzas\n";
    cout << "3. Modificar precio de Pizza\n";
    cout << "4. Eliminar Pizza\n";
    cout << "5. Adicionar Venta de Pizzas\n";
    cout << "6. Salir\n";
    cout << "Opcion: ";
}

int main() {
    int opcion;
    
    do {
        mostrarMenu();
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                adicionarPizza();
                break;
            case 2:
                listarPizzas();
                break;
            case 3:
                modificarPrecio();
                break;
            case 4:
                eliminarPizza();
                break;
            case 5:
                adicionarVentas();
                break;
            case 6:
                cout << "\nSaliendo del programa...\n";
                break;
            default:
                cout << "\nOpcion invalida!\n";
        }
    } while(opcion != 6);
    
    return 0;
}