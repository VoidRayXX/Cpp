#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//este programa recibe un número entero y determina si es que es un número par o impar

int main(){
	int num;
	cout << "Por favor, ingrese un numero: " << endl;
	cin >> num;
	if (num % 2 == 0){
		cout << "El numero " << num << " es par" << endl;
	}else{
		cout << "El numero " << num << " no es par" << endl;
	}

	system("pause");
	return 0;
}