#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//determina si un numero esta entre 1 o 10

int main(){
	int num = 0;
	cout << "Por favor, ingrese un numero:" << endl;
	cin >> num;
	if (num > 0 && num < 11){
		cout << "El numero " << num << " esta entre entre 1 y 10" << endl;
	}else{
		cout << "El numero " << num << " no esta entre entre 1 y 10" << endl;
	}
	system("pause");
	return 0;
}