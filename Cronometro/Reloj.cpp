#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

//este programa simula un reloj, donde h = horas, m = minutos y s = segundos

int main(){
	for (int h = 0; h < 24; h++){
		for (int m = 0; m < 60; m++){
			for (int s = 0; s < 60; s++){
				printf("%02i:%02i:%02i\r",h,m,s);
				Sleep(1000);
			}
		}
	}

	return 0;
}