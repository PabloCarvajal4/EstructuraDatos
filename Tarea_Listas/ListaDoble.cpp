#include <iostream>

using namespace::std;

struct nodo{
	int dato;
	nodo* siguiente;
	nodo* atras;
} *primero, *ultimo;

void insertarNodo();
void eliminarNodo();
void Mostrar();


int main(){

	int op=0;
	do
	{
		cout << "\n° Lista Doblemente Enlazada °";
		cout << "\n1. Insertar ";
		cout << "\n2. Mostrar   ";
		cout << "\n3. Eliminar  ";
		cout << "\n4. Salir   ";
		cout << "\n\n Ingrese una Opcion: ";
		cin >> op;
		
		switch(op){
		case 1:
			cout << "\nInsertar Elemento \n";
			insertarNodo();
			break;
		case 2: 
			cout << "\nMostando Lista\n";
			Mostrar();
			break;
		case 3:
			cout << "\nEliminar Reisto \n";
			eliminarNodo();
			break;	
		case 4:
			cout << "\nPrograma finalizado...";
			break;
		default:
			cout << "\n Opcion No Valida"<<endl;
		}
	} while (op != 4);	
	return 0;
}

void insertarNodo(){
	nodo* nuevo = new nodo();
	cout << " Ingrese el dato: ";
	cin >> nuevo->dato;
	
	if(primero==NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		primero->atras = NULL;
		ultimo = primero;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimo;
		ultimo = nuevo;
	}
	cout <<"\nAgregado Correctamente\n\n";
}

void eliminarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	nodo* anterior = new nodo();
	anterior = NULL;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el Registro a Eliminar: ";
	cin >> nodoBuscado;
	if(primero!=NULL){
		
		while(actual!=NULL && encontrado!=true){
			
			if(actual->dato == nodoBuscado){
				cout << "\n Registro con el dato ( " << nodoBuscado << " ) Encontrado";
				
				if(actual==primero){
					primero = primero->siguiente;
					primero->atras = NULL;
				}else if(actual==ultimo){
					anterior->siguiente = NULL;
					ultimo = anterior;
				}else{
					anterior->siguiente = actual->siguiente;
					actual->siguiente->atras = anterior;
				}
				
				cout << "\n Registro Eliminado";
				encontrado = true;
			}
			anterior = actual;
			actual = actual->siguiente;
		}
		
		if(!encontrado){
			cout << "\nDato no Encontrado\n\n";
		}
		
	}else{
		cout << "\nLa lista se encuentra Vacia\n\n";
	}
}

void Mostrar(){
	int i=1;
	nodo* actual = new nodo();
	actual = primero;
	if(primero!=NULL){
		
		while(actual!=NULL){
			cout<<"\n"<<i++<<")"<< actual->dato; 
			actual = actual->siguiente;
		}
		cout<<endl;
	}else{
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}
