#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//este programa calcula el factorial de un numero natural ingresado por teclado

int main(){
	int num = 0;
	int factorial = 1;
	
	cout << "Ingresa un numero: " << endl;
	cin >> num;

	for (int i = num; i > 0; i--){
		factorial *= i;
	}

	cout << "El factorial de " << num << " es " << factorial << endl;

	system("pause");
	return 0;
}