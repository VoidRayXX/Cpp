#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//tablas de multiplicar hasta el número 10

int main(){
	for (int i = 1; i < 11; i++){
		for (int j = 1; j < 11; j++){
			cout << i << "x" << j << " = " << i * j << endl;
		}
		cout << endl << endl;
	}
	system("pause");
	return 0;
}