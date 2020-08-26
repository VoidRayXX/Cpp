#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

int main(){
	int x,y,z;
	
	cout << "Por favor, ingrese un valor para x: " << endl;
	cin >> x;

	cout << "Por favor, ingrese un valor para y " << endl;
	cin >> y;

	cout << "Por favor, ingrese un valor para z " << endl;
	cin >> z;

	if (x > y){
		if (x > z){
			cout << "El mayor numero es " << x << endl;
		}else{
			cout << "El mayor numero es " << z << endl;
		}
	}else if (y > x){
		if (y > z){
			cout << "El mayor numero es " << y << endl;
		}else{
			cout << "El mayor numero es " << z << endl;
		}
	}else if (z > x){
		if (z > y){
			cout << "El mayor numero es " << z << endl;
		}else{
			cout << "El mayor numero es " << y << endl;
		}
	}

	system("pause");
	return 0;
}