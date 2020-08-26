#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;
//1 1 2 3 5 8 13
using namespace std;

//este programa ejecuta la serie de Fibonacci hasta el numero que se le pida por teclado

int main(){
	int lim,aux;
	int i = 2;
	int x = 1;
	int y = 1;

	cout << "Indique hasta que numero de la serie quiere llegar:" << endl;
	cin >> lim;

	if (lim <= 0){
		cout << "Numero invalido";
	}else if (lim == 1){
		cout << 1;
	}else if (lim == 2){
		cout << 1 << ' ' << 1;
	}else{
		cout << x << ' ' << y << ' ';
	}

	while (i < lim){
		aux = x;
		x = y;
		y += aux;
		cout << y << ' ';
		i++;
	}

	cout << endl;
	system("pause");
	return 0;
}