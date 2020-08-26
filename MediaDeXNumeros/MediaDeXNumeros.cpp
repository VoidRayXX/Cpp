#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//este programa calcula la media aritmetica de x numeros ingresados por teclado

int main(){
	int cant = 0;
	float suma = 0.0;
	int var = 0;
	float promedio = 0.0;

	cout << "Cuantos numeros van a ser ingresados:" << endl;
	cin >> cant;

	for (int i = 0; i < cant; i++){
		cout << "Ingrese un numero:" << endl;
		cin >> var;
		suma += var;
	}

	promedio = suma / cant;
	cout << "El promedio es: " << promedio << endl;

	system("pause");
	return 0;
}