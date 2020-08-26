#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//este programa pregunta si es que queremos continuar multiples veces, solo parando si se ingresa la letra s

int main(){
	char letra = 'a';

	do{
		cout << "Ingresa la tecla s para acabar el ciclo:" << endl;
		fflush(stdin);
		cin >> letra;
	}while(letra != 's');

	system("pause");
	return 0;
}