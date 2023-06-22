#include <iostream>
#include <cmath>
#include <iomanip>

//Baltazar Delgado - K1102

using namespace std;

double calculo_pi (int n)
{
	
	double pi;
	double termino;
	
	pi = 0.0;
	
	for (int i = 0; i < n; ++i)
	{
		termino = 1.0 / (2 * i + 1);
		if (i % 2 == 0)
		{
			pi = pi + termino;
		}
		else
		{
			pi = pi - termino;
		}
	}
	
	pi = pi * 4;
	
	return pi;
	
}

int main ()
{
	
	int n;
	double resultado;
	
	cout << "Ingrese el numero de iteraciones para calcular pi: " << endl;
	cin >> n;
	
	resultado = calculo_pi (n);
	
    //con 1000000 da como resultado 3,141592
	cout << "El valor de pi calculado con " << n << " iteraciones es: " << setprecision (7) << resultado << endl;
	
	return 0;
	
}
