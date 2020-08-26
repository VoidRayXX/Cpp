#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//este programa determina si un numero es primo o no

int main(){
	int num;
	bool primo = true;

	cout << "Ingresa un numero:" << endl;
	cin >> num;

	if (num == 1){
		cout << "El numero 1 no es ni primo ni par" << endl;
	}else{
		for (int i = 2; i < num/2 && primo; i++){
			if (num % i == 0){
				primo = false;
				break;
			}
		}
	}

	if (primo && num != 1){
		cout << "El numero " << num << " es primo" << endl;
	}else if (num != 1){
		cout << "El numero " << num << " no es primo" << endl;
	}


	system("pause");
	return 0;
}