#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//suma de todos los numeros pares hasta 2000

int main(){
	int suma = 0;
	
	for (int i = 2; i <= 2000; i += 2){
		suma += i;
	}

	cout << "La suma de todos los pares hasta 2000 es " << suma << endl;

	system("pause");
	return 0;
}