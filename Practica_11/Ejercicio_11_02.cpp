// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 28-11-2025
// Número de ejercicio: 2
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Producto {
    int codigo;
    char nombre[50];
    int cantidadInicial;
    float precioUnitario;
    int cantidadVendida;
};

// Funcion para adicionar producto
void adicionarProducto() {
    Producto p;
    
    cout << "\nADICIONAR PRODUCTO\n";
    cout << "==================\n";
    cout << "Codigo: ";
    cin >> p.codigo;
    
    cin.ignore();
    cout << "Nombre: ";
    cin.getline(p.nombre, 50);
    
    cout << "Cantidad Inicial: ";
    cin >> p.cantidadInicial;
    
    cout << "Precio Unitario: ";
    cin >> p.precioUnitario;
    
    p.cantidadVendida = 0;
    
    ofstream archivo;
    archivo.open("PRODUCTOS.BIN", ios::binary | ios::app);
    archivo.write((char*)&p, sizeof(Producto));
    archivo.close();
    
    cout << "\nProducto agregado correctamente!\n";
}

// Funcion para buscar producto por codigo
int buscarProducto(int codigo) {
    ifstream archivo;
    archivo.open("PRODUCTOS.BIN", ios::binary);
    
    if(!archivo.is_open()) {
        return -1;
    }
    
    Producto p;
    int posicion = 0;
    
    while(archivo.read((char*)&p, sizeof(Producto))) {
        if(p.codigo == codigo) {
            archivo.close();
            return posicion;
        }
        posicion++;
    }
    
    archivo.close();
    return -1;
}

// Funcion para listar productos
void listarProductos() {
    ifstream archivo;
    archivo.open("PRODUCTOS.BIN", ios::binary);
    
    if(!archivo.is_open()) {
        cout << "\nNo hay productos registrados.\n";
        return;
    }
    
    cout << "\nLISTADO DE PRODUCTOS\n";
    cout << "====================\n\n";
    cout << "CODIGO\tNOMBRE\t\t\tCANT.INI\tPRECIO\tCANT.VEND\tTOTAL\n";
    cout << "----------------------------------------------------------------------\n";
    
    Producto p;
    while(archivo.read((char*)&p, sizeof(Producto))) {
        float total = p.cantidadVendida * p.precioUnitario;
        cout << p.codigo << "\t" << p.nombre << "\t\t" 
             << p.cantidadInicial << "\t\t" << p.precioUnitario << "\t"
             << p.cantidadVendida << "\t\t" << total << endl;
    }
    
    archivo.close();
}

// Funcion para buscar y mostrar producto
void buscarProductoPorCodigo() {
    int codigo;
    cout << "\nIngrese codigo del producto: ";
    cin >> codigo;
    
    ifstream archivo;
    archivo.open("PRODUCTOS.BIN", ios::binary);
    
    if(!archivo.is_open()) {
        cout << "\nNo hay productos registrados.\n";
        return;
    }
    
    Producto p;
    bool encontrado = false;
    
    while(archivo.read((char*)&p, sizeof(Producto))) {
        if(p.codigo == codigo) {
            cout << "\nPRODUCTO ENCONTRADO:\n";
            cout << "Codigo: " << p.codigo << endl;
            cout << "Nombre: " << p.nombre << endl;
            cout << "Cantidad Inicial: " << p.cantidadInicial << endl;
            cout << "Precio: " << p.precioUnitario << endl;
            cout << "Cantidad Vendida: " << p.cantidadVendida << endl;
            encontrado = true;
            break;
        }
    }
    
    if(!encontrado) {
        cout << "\nProducto no encontrado.\n";
    }
    
    archivo.close();
}

// Funcion para modificar producto
void modificarProducto() {
    int codigo;
    cout << "\nIngrese codigo del producto a modificar: ";
    cin >> codigo;
    
    fstream archivo;
    archivo.open("PRODUCTOS.BIN", ios::binary | ios::in | ios::out);
    
    if(!archivo.is_open()) {
        cout << "\nNo hay productos registrados.\n";
        return;
    }
    
    Producto p;
    bool encontrado = false;
    int posicion = 0;
    
    while(archivo.read((char*)&p, sizeof(Producto))) {
        if(p.codigo == codigo) {
            cout << "\nProducto encontrado: " << p.nombre << endl;
            cout << "Nuevo precio unitario: ";
            cin >> p.precioUnitario;
            
            archivo.seekp(posicion * sizeof(Producto), ios::beg);
            archivo.write((char*)&p, sizeof(Producto));
            
            cout << "\nProducto modificado correctamente!\n";
            encontrado = true;
            break;
        }
        posicion++;
    }
    
    if(!encontrado) {
        cout << "\nProducto no encontrado.\n";
    }
    
    archivo.close();
}

// Funcion para procesar ventas
void adicionarVentas() {
    ifstream archivoVentas;
    archivoVentas.open("VENTAS.txt");
    
    if(!archivoVentas.is_open()) {
        cout << "\nNo se pudo abrir el archivo VENTAS.txt\n";
        return;
    }
    
    char ci[20], nombre[50];
    int codigoProd, cantidad;
    
    while(archivoVentas >> ci) {
        archivoVentas.ignore();
        archivoVentas.getline(nombre, 50, ';');
        archivoVentas >> codigoProd;
        archivoVentas.ignore();
        archivoVentas >> cantidad;
        
        fstream archivo;
        archivo.open("PRODUCTOS.BIN", ios::binary | ios::in | ios::out);
        
        Producto p;
        int posicion = 0;
        
        while(archivo.read((char*)&p, sizeof(Producto))) {
            if(p.codigo == codigoProd) {
                p.cantidadVendida += cantidad;
                archivo.seekp(posicion * sizeof(Producto), ios::beg);
                archivo.write((char*)&p, sizeof(Producto));
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
    cout << "\nMENU FARMACIA CHAVEZ\n";
    cout << "====================\n";
    cout << "1. Adicionar Producto\n";
    cout << "2. Listado de Productos\n";
    cout << "3. Buscar producto por codigo\n";
    cout << "4. Modificar producto\n";
    cout << "5. Adicionar ventas del producto\n";
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
                adicionarProducto();
                break;
            case 2:
                listarProductos();
                break;
            case 3:
                buscarProductoPorCodigo();
                break;
            case 4:
                modificarProducto();
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