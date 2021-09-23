#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct nodo{
     int nro;
     struct nodo *izq, *der;
}*ABB;
int numNodos = 0; 
int numK = 0, k;    

ABB crearNodo(int x)
{
     ABB nuevoNodo = new(struct nodo);
     nuevoNodo->nro = x;
     nuevoNodo->izq = NULL;
     nuevoNodo->der = NULL;

     return nuevoNodo;
}
void insertar(ABB &arbol, int x)
{
     if(arbol==NULL)
     {
           arbol = crearNodo(x);
           cout<<"\nAgregado Correctamente... "<<endl<<endl;
     }
     else if(x < arbol->nro)
          insertar(arbol->izq, x);
     else if(x > arbol->nro)
          insertar(arbol->der, x);
}

void verArbol(ABB arbol, int n)
{
     if(arbol==NULL)
          return;
     verArbol(arbol->der, n+1);

     for(int i=0; i<n; i++)
         cout<<"   ";

     numNodos++;
     cout<< arbol->nro <<endl;

     verArbol(arbol->izq, n+1);
}

int alturaAB(ABB arbol)
{
    int AltIzq, AltDer;

    if(arbol==NULL)
        return -1;
    else
    {
        AltIzq = alturaAB(arbol->izq);
        AltDer = alturaAB(arbol->der);

        if(AltIzq>AltDer)
            return AltIzq+1;
        else
            return AltDer+1;
    }
}

void menu()
{
     cout << "---Menu---\n\n";
     cout << "[1] Insertar elemento " <<endl;
     cout << "[2] Mostrar arbol "  <<endl;
     cout << "[3] Profundidad del Arbol " <<endl;
     cout << "[4] Salir " <<endl;
	 cout<<endl;
     cout << " Ingrese opcion : ";
}

int main()
{
    ABB arbol = NULL;
    int x;
    int op, op2;
	int array[5] = {3,1,20,15,25};
    do
    {
          menu();  cin>> op;
          cout << endl;

          switch(op)
          {
               case 1:
                    cout << " Ingrese valor : ";  cin>> x;
                    insertar( arbol, x);
                    system("pause");
                    system("cls");
                    break;

               case 2:
                    verArbol(arbol, 0);
                    system("pause");
                    system("cls");
                    break;

               case 3:
                    int h;
                    h = alturaAB(arbol);
                    cout << " La profundidad del arbol es : "<< h+1 << endl;
                    break;

               case 4:
                    cout<<"Saliendo del Programa..." <<endl;
                    break;
                	
                default: cout<<"Opcion no Valida" <<endl;
          }
    }while(op!=4);

}
