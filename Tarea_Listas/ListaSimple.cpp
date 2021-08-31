#include<iostream>

using namespace std;
struct nodo{
    int numero; 
    struct nodo *siguiente; 
};

typedef struct nodo *TListado;

void insertar(TListado &lista){

    TListado t,q = new(struct nodo);

    cout<<"REGISTRO " <<endl; 
    cout<<"\nIngrese numero a registrar:"; cin>>q->numero;
    cout<<endl;
	cout<<"Agregado Correctamente!"<<endl;
    
    q->siguiente = NULL;

    if(lista==NULL){
        lista = q;
    } else {
        t = lista;
        while(t->siguiente!=NULL){
                t = t->siguiente;
        }
        t->siguiente = q;
    }
}

void Mostrar(TListado q){

    int i=1;
    cout<<"\nMostrando Lista " <<endl;
    while(q!=NULL){
        cout<<i<<")"<<q->numero<<endl;
        q=q->siguiente;
        i++;
    }
cout<<endl;
}

void Eliminar(TListado &lista){
    TListado q = lista;
    while(q!=NULL){
        q = lista->siguiente;
        delete lista;
        lista = q;
    }
    cout<<"Eliminado Correctamente!"<<endl;
}

int main(){
	TListado lista=NULL;
	int op;
	
	do{
	cout<<"Lista Enlazada Simple"<<endl;
	cout<<"1. Insertar"<<endl;
	cout<<"2. Mostrar"<<endl;
	cout<<"3. Eliminar"<<endl;
	cout<<"4. Salir"<<endl;
	cin>>op;
	
	switch(op){
		case 1:
			insertar(lista);
			
			break;
		case 2:
			Mostrar(lista);
			break;
		case 3:
			Eliminar(lista);
			break;
	}	
	}while(op != 4);
	cout<<"Saliendo del Progama..."<<endl;
	return 0;
}
