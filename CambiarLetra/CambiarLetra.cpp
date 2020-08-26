#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//este programa recibe por teclado una palabra y cambia todas sus 'a' por un espacio


void cambio(char frase[13]){
	for (int i = 0; i < 13; i++){
		if (frase[i] == 'a'){
			frase[i] = ' ';
		}
	}
}

int main(){
	char palabra[13];

	cout << "Palabra: ";
	fgets(palabra,13,stdin);

	cambio(palabra);

	cout << palabra << endl;




	system("pause");
	return 0;
}