#include <iostream>
#include <cmath>
#include <iomanip>

//Baltazar Delgado - K1102

using namespace std;

const float pi = 3.141592; //Se sabe por enunciado

int main ()
{

    float sumatoria;
    float termino;
    size_t iteraciones;

    sumatoria = 0;
    iteraciones = 0;

    cout << fixed;
    cout << setprecision (6);

    while (sumatoria != pi / 4)
    {

        //Serie de Leibniz = sumatoria desde n = 0 hasta infinito de (-1)^n / 2n + 1 = pi / 4
        termino = pow (-1, iteraciones) / ((2 * iteraciones) + 1); //n = iteraciones;
        sumatoria = sumatoria + termino;
        ++iteraciones;

    }

    cout << "Se hicieron un total de " << iteraciones << " iteraciones" << endl;
    cout << "Resultado: " << (4 * sumatoria) << endl;

    return 0;

}
