#include <iostream>
#include <cstdlib>

using namespace std;

struct nodo{
    int nro;   
    struct nodo *sgte; 
    };

typedef struct nodo;
nodo *fin;
nodo *lista;

void insertarInicio();
void insertarFinal();
void mostrar();
void eliminarElemento();

int main(void)
{
    lista = NULL;
    int op;    

    do
    {
        cout<<"Lista Enlazada Circular\n\n";
    	cout<<" 1. Insertar al Inicio               "<<endl;
    	cout<<" 2. Insertar al final                "<<endl;
    	cout<<" 3. Mostrar Lista                    "<<endl;
    	cout<<" 4. Eliminar Elemento                "<<endl;
    	cout<<" 5. Salir                            "<<endl;

    	cout<<"\n Ingrese una opcion: ";
        cin>>op;

        switch(op)
        {
            case 1:
                    insertarInicio();
                    break;

            case 2:
                    insertarFinal();
                    break;
            case 3:
                    cout<<"\n\n Lista Circular \n\n";
                    mostrar();
                    break;
            case 4:
                    eliminarElemento();
                    break;

            default: cout<<"OPCION NO VALIDA...!!!";
                     break;


        }
        cout<<endl<<endl;

    }while(op!=5);

   return 0;
}

void insertarInicio()
{
   nodo *nuevo;
   nuevo=new struct nodo;

   cout<<"\n***Insertar al inicio*****\n";
   cout<<"\nIngrese Dato: ";
   cin>>nuevo->nro;
   nuevo->sgte=NULL;

   if(lista==NULL)
    {
        cout<<"Agregado Correactamente!";
        lista=nuevo;
        lista->sgte=lista;
        fin=nuevo;
      }
   else
     {
        nuevo->sgte = lista;
        lista = nuevo;
        fin->sgte = lista;
     }

}

void insertarFinal()
{
    nodo *nuevo;
    nuevo=new struct nodo;
    cout<<"\n***Inserta al final***\n";
    cout<<"\nIngrese Dato: ";
    cin>>nuevo->nro;
    nuevo->sgte=NULL;

     if(lista==NULL)
        {
             cout<<"Agregado Correctamente!";
             lista=nuevo;
             lista->sgte=lista;
             fin=nuevo;
        }
     else
        {
          fin->sgte = nuevo;
          nuevo->sgte = lista;
          fin = nuevo;
        }
}

void mostrar()
{   nodo *aux;
    aux=lista;
    int i=1;

    if(lista!=NULL)
     {
          do
          {    cout<<"\n"<<i++<<")"<<aux->nro;
               aux = aux->sgte;
          }while(aux!=lista);
      }
     else
         cout<<"\n\n\tLista vacia..."<<endl;


}

void eliminarElemento()
{
    nodo *aux, *r, *q;
    int i = 1, flag = 0,valor;

    cout<<"\n Ingrese Elemento a Eliminar: ";
    cin>>valor;

    if(lista !=NULL)
     {
          aux = lista;

          do
          {
               if(aux->nro == valor)
                {
                    if(aux==lista)
                    {   r=lista;
                        lista=lista->sgte;
                        aux=aux->sgte;
                        fin->sgte=lista;
                        r->sgte=NULL;
                        if(fin->sgte==NULL)
                        {
                            lista==NULL;
                            aux==NULL;
                            delete(r);
                            cout<<"\nElemento Eliminado!\n";
                            return;
                        }
                        else
                        {
                            delete(r);
                            cout<<"\nElemento Eliminado!\n";
                            return;
                        }
                    }
                   else
                    {
                        if(aux==fin)
                            {
                            r=aux;
                            aux=aux->sgte;
                            q->sgte=aux;
                            fin=q;
                            r->sgte=NULL;
                            delete(r);
                            cout<<"\nElemento Eliminado!\n";
                            return;
                            }
                        else
                        {
                            r=aux;
                            aux=aux->sgte;
                            q->sgte=aux;
                            r->sgte=NULL;
                            delete(r);
                            cout<<"\nElemento Eliminado!\n";
                            return;
                        }
                  }
                  flag=1;
                }
                else
                {   q=aux;
                    aux = aux->sgte;
                    i++;
                }
          }while(aux!=lista);

          if(flag==0)
          cout<<"\n\n\tRegistro no econtrado..."<<endl;


    }
    else
      cout<<"Lista Vacia...";
}

