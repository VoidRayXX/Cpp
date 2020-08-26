#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//este programa muestra en pantalla los números enteros que hay dentro de un intervalo dado

int main(){
	int num,lim;


	cout << "Ingrese un numero del cual partir: " << endl;
	cin >> num;

	cout << "Ingrese un numero limite: " << endl;
	cin >> lim;
	
	num++;
	cout << endl;

	while (num < lim){
		cout << num << endl;
		num += 1;
	}
	system("pause");
	return 0;
}