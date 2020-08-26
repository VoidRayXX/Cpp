#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//este programa muestra en pantalla todos los numeros primos que hayan entre el 2 y el 2000

int main(){
	int div = 1;
	bool primo = true;
	
	cout << 2 << ", ";

	for (int num = 2; num < 2000; num++){
		primo = true;
		for (int i = 2; i < num; i++){
			div = num % i;
			if (div == 0){
				primo = false;
			}if (i + 1 == num && primo){
				cout << num << ", ";
			}
		}
	}

	cout << endl;
	system("pause");
	return 0;
}