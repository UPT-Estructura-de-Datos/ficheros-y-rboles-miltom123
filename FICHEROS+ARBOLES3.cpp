#include <fstream> // Biblioteca para el manejo de ficheros
#include <iostream> // Biblioteca para la entrada-salida est�ndar
using namespace std;
typedef char TCadena[30];

int main() {
    int i;
    float r;
    TCadena cad;

    ifstream fichin("EJEMPLO5.TXT"); // Declaraci�n y apertura del fichero
    if (!fichin) {
        cout << "\n Incapaz de crear o abrir el fichero ";
    } else {
        cout << "\n Exito. Se logro la Lectura adelantada!!! ";
        while (!fichin.eof()) {
            cout << i << " "; // Lectura de valores en el fichero
            fichin >> r;
            cout << r << " "; // Lectura de valores en el fichero
            fichin >> cad;
            cout << cad << "\n"; // Lectura de valores en el fichero
            fichin >> i;
        }
        fichin.close();
    }
    return 0;
}



