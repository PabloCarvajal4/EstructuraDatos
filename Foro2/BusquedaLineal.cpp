#include <iostream>

using namespace std;

int numeros[] = {1,6,7,8,9,12,15,18,19,29};
int tamano = sizeof(numeros) /sizeof(int);

bool busquedaLineal(int numero){
	for(int i = 0 ; i < tamano ; i ++){
		if(numeros[i] == numero){
			return true;
		}
	}
	return false;
}

int main() {
	int numero;
	cout << "Introduzca un numero: ";
	cin >> numero;
	if(busquedaLineal(numero)){
		cout << numero << " Esta contenido en el arreglo" << endl;
	}else{
		cout << numero << " No esta contenido en el arreglo" << endl;
	}
	return 0;
}
