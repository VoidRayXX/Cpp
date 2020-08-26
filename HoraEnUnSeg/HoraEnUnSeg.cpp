#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//el programa recibe la hora y calcula que hora será después del transcurso de un segundo

int main(){
	int hora,min,seg;

	cout << "Ingrese la hora:" << endl;
	cin >> hora;

	cout << "Ingrese los minutos:" << endl;
	cin >> min;

	cout << "Ingrese los segundos:" << endl;
	cin >> seg;

	if (seg < 59){
		seg++;
		cout << "La hora en un segundo sera " << hora << ':' << min << ':' << seg << endl;
	}else{
		seg = 0;
		min++;
		if (min < 59){
			cout << "La hora en un segundo sera " << hora << ':' << min << ':' << 0 << seg << endl;
		}else{
			min = 0;
			hora++;
			if (hora < 24){
				cout << "La hora en un segundo sera " << hora << ':' << 0 << min << ':' << 0 << seg << endl;
			}else{
				hora = 0;
				cout << "La hora en un segundo sera " << 0 << hora << ':' << 0 << min << ':' << 0 << seg << endl;
			}
		}
	}
	system("pause");
	return 0;
}