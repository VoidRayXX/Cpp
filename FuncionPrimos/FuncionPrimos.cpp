#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//determinar si 2 numeros ingresados por teclado son primos o no

void primos(int x){
	bool primo = true;
	for (int i = 2; i < x; i++){
		if (x % i == 0){
			primo = false;
		}
	}
	
	if (primo){
		cout << "El numero " << x << " es primo" << endl;
	}else{
		cout << "El numero " << x << " no es primo" << endl;
	}	
}

int main(){
	int a,b;

	cout << "Primer valor:" << endl;
	cin >> a;
	cout << "Segundo valor:" << endl;
	cin >> b;

	primos(a);
	primos(b);


	system("pause");
	return 0;
}