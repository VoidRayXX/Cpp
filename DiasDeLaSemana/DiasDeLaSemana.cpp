#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//este programa recibe un numero del 1 al 7, ambos incluidos, y determina el día de la semana correspondinete (siendo Lunes el numero 1)

int main(){
	int dia = 0;
	do{
		cout << "Por favor, ingrese un numero del 1 al 7: " << endl;
		cin >> dia;
	}while(dia < 0 || dia > 7);

	switch (dia){
		case 1:
			cout << "Lunes" << endl;
			break;
		case 2:
			cout << "Martes" << endl;
			break;
		case 3:
			cout << "Miercoles" << endl;
			break;
		case 4:
			cout << "Jueves" << endl;
			break;
		case 5:
			cout << "Viernes" << endl;
			break;
		case 6:
			cout << "Sábado" << endl;
			break;
		case 7:
			cout << "Domingo" << endl;
			break;
	}
	
	system("pause");
	return 0;
}