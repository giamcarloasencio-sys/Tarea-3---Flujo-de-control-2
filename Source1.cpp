#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const int MAX = 100;

    int cantidad;
    string nombre[MAX];
    double nota1[MAX], nota2[MAX], nota3[MAX], nota4[MAX];
    double promedio[MAX];
    string estatus[MAX];

    cout << "==========================================" << endl;
    cout << "     REGISTRO DE CALIFICACIONES" << endl;
    cout << "==========================================" << endl;

    cout << "Digite la cantidad de estudiantes: ";
    cin >> cantidad;
    cin.ignore();

    if (cantidad <= 0 || cantidad > MAX)
    {
        cout << "Cantidad de estudiantes no valida." << endl;
        return 0;
    }

    // Entrada de datos
    for (int i = 0; i < cantidad; i++)
    {
        cout << "\nEstudiante #" << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, nombre[i]);

        cout << "Nota 1: ";
        cin >> nota1[i];

        cout << "Nota 2: ";
        cin >> nota2[i];

        cout << "Nota 3: ";
        cin >> nota3[i];

        cout << "Nota 4: ";
        cin >> nota4[i];

        promedio[i] = (nota1[i] + nota2[i] + nota3[i] + nota4[i]) / 4;

        if (promedio[i] >= 70)
            estatus[i] = "Aprobado";
        else
            estatus[i] = "Reprobado";

        cin.ignore();
    }

    // Mostrar tabla
    cout << "\n\n";

    cout << left
        << setw(22) << "Estudiante"
        << setw(8) << "Nota1"
        << setw(8) << "Nota2"
        << setw(8) << "Nota3"
        << setw(8) << "Nota4"
        << setw(10) << "Prom."
        << "Estatus" << endl;

    cout << "------------------------------------------------------------------------" << endl;

    for (int i = 0; i < cantidad; i++)
    {
        cout << left
            << setw(22) << nombre[i]
            << setw(8) << nota1[i]
            << setw(8) << nota2[i]
            << setw(8) << nota3[i]
            << setw(8) << nota4[i]
            << setw(10) << fixed << setprecision(2) << promedio[i]
            << estatus[i]
            << endl;
    }

    return 0;
}