#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

//este programa simula los resultados de lanzar un dado 10.000 veces

void azar(int *vec){
	int cara;
	srand (time(NULL));

	for (int i = 0; i < 10000; i++){
		cara = rand()%6;
		*(vec + cara) += 1;
	}
}

int main(){
	int vec[6] = {0,0,0,0,0,0};

	azar(vec);

	for (int i = 0; i < 6; i++){
		cout << i + 1 << ": " << vec[i]/100.0 << '%' << ", ";
	}

	cout << endl;
	system("pause");
	return 0;
}