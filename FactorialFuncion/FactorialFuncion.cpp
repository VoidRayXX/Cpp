#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//calcular el factorial de 2 números empleando funciones

int factorial(int x){
	int factorial = 1;
	
	for (int i = x; i > 0; i--){
		factorial *= i;
	}
	return factorial;
}

int main(){
	int a,b,fact;

	cout << "Primer valor:" << endl;
	cin >> a;
	cout << "Segundo valor:" << endl;
	cin >> b;

	cout << "El factorial de " << a << " es " << factorial(a) << endl;
	cout << "El factorial de " << b << " es " << factorial(b) << endl;


	system("pause");
	return 0;
}