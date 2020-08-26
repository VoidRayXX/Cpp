#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//calcular el numero mayor entre 2 numeros con una funcion

int max(int x,int y){
	if (x > y){
		return x;
	}else if (y > x){
		return y;
	}else{
		return 0;
	}
}

int main(){
	int a,b,maxi;

	cout << "Valor para a:" << endl;
	cin >> a;
	cout << "Valor para b:" << endl;
	cin >> b;

	maxi = max(a,b);
	
	if (maxi == 0){
		cout << "Los valores ingresados son iguales" << endl;
	}else{
		cout << "El mayor numero es " << maxi << endl;
	}


	system("pause");
	return 0;
}