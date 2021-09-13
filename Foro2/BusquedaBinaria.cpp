#include <iostream>

using namespace std;

int numeros[] = {1,6,7,8,9,12,15,18,19,29};
int tamano = sizeof(numeros) /sizeof(int);

bool busquedaBinaria(int numero){
	int limiteIzquierdo = 0;
	int limiteDerecho = tamano - 1;
	int puntoMedio = 0;
	while (limiteIzquierdo <= limiteDerecho){
		puntoMedio = (limiteIzquierdo + limiteDerecho) / 2;
		if(numeros[puntoMedio] < numero){
			limiteIzquierdo = puntoMedio + 1;
		}else if(numeros[puntoMedio] > numero){
			limiteDerecho = puntoMedio -1;
		}else{
			return true;
		}
	}
}

int main() {
	int numero;
	cout << "Introduzca un numero: ";
	cin >> numero;
	if(busquedaBinaria(numero)){
		cout << numero << " Esta contenido en el arreglo" << endl;
	}else{
		cout << numero << " No esta contenido en el arreglo" << endl;
	}
	return 0;
}
