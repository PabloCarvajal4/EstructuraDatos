#include <iostream>

using namespace::std;

struct nodo{
	int dato;
	nodo* siguiente;
	nodo* atras;
} *primero, *ultimo;


void Insertar();
void Eliminar();
void Mostrar();

int main(){
	int op=0;
	do
	{
		cout << "\n° LISTA CIRCULAR DOBLE ° ";
		cout << "\n1. Insertar ";
		cout << "\n2. Mostrar Lista ";
		cout << "\n3. Eliminar ";
		cout << "\n4. Salir ";
		cout << "\n\nIngrese una Opcion: ";
		cin >> op;
		switch(op){
		case 1:
			cout << "\n\n Insertar Reistro \n\n";
			Insertar();
			break;
		case 2: 
			cout << "\n Mostrar Lista \n";
			Mostrar();
			break;
		case 3:
			cout << "\nEliminar Registro\n";
			Eliminar();
			break;
		case 4:
			cout << "\n\n Programa finalizado...";
			break;
		default:
			cout << "\n\n Opcion No Valida \n\n";
		}
	} while (op != 4);
	
	return 0;
}

void Insertar(){
	nodo* nuevo = new nodo();
	cout << "Ingrese el dato que contendra el nuevo Nodo: ";
	cin >> nuevo->dato;
	
	if(primero==NULL){
		primero = nuevo;
		ultimo = nuevo;
		primero->siguiente = primero;
		primero->atras = ultimo;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->atras = ultimo;
		nuevo->siguiente = primero;
		ultimo = nuevo;
		primero->atras = ultimo;
	}
	cout << "\n Nodo Ingresado\n\n";
	
}

void Eliminar(){
	nodo* actual = new nodo();
	actual = primero;
	nodo* anterior = new nodo();
	anterior = NULL;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del registro a Buscar: ";
	cin >> nodoBuscado;
	if(primero!=NULL){
		do{
			
			if(actual->dato==nodoBuscado){
				cout << "\n Registro con el dato ( " << nodoBuscado << " ) Encontrado";
				
				if(actual==primero){
					primero = primero->siguiente;
					primero->atras = ultimo;
					ultimo->siguiente = primero;
				}else if(actual==ultimo){
					ultimo = anterior;
					ultimo->siguiente = primero;
					primero->atras = ultimo;
				}else{
					anterior->siguiente = actual->siguiente;
					actual->siguiente->atras = anterior;
				}
				
				cout << "\n Registro Eliminado\n\n";
				encontrado = true;				
			}
			
			anterior = actual;
			actual = actual->siguiente;
		}while(actual!=primero && encontrado != true);
		
		if(!encontrado){
			cout << "\n Dato no Encontrado\n\n";
		}
		
	}else{
		cout << "\n La lista se Encuentra Vacia\n\n";
	}
}

void Mostrar(){
	int i=1;
	nodo* actual = new nodo();
	actual = primero;
	if(primero!=NULL){
		do{
			cout<<"\n"<<i++<<")" << actual->dato; 
			actual = actual->siguiente;
		
		}while(actual!=primero);
		cout<<endl;	
	}else{
		cout <<"\nLa lista se Encuentra Vacia\n\n";
	}
}



