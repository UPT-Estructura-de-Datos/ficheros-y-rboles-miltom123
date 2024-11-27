#include <iostream>
#include <fstream> 
using namespace std;

int main() {
    string nombres[3] = {
        "Antony Solorzano",
        "Gustavo Vargas",
        "Miltom Flores"
    };

    string seccion = "Sección A"; 
    ofstream archivo("grupo.txt");
    if (!archivo) {
        cout << "No se pudo crear el archivo." << endl;
        return 1;
    }

    archivo << "Nombres y Secciones del Grupo:" << endl;
    for (int i = 0; i < 3; i++) {
        archivo << i + 1 << ". Nombre: " << nombres[i] 
                << " - Sección: " << seccion << endl;
    }

    archivo.close();

    cout << "Los datos se han guardado en el archivo 'grupo.txt'." << endl;

    return 0;
}


