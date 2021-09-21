#include <stdio.h> 
int arreglo[10] = {3,10,1,8,15,5,12,6,5,4}; 

void imprimearreglo() { 
    int i; for (i=0;i<10;i++) 
        printf("Elemento %d: %d \n",i,arreglo[i]); 
} 
        
int main() 
{ 
    int i,j,k;
    imprimearreglo(); 
    for (i=1; i<10; i++) { 
        j=i; 
            while (j>=0 && arreglo[j]<arreglo[j-1]) { 
                k=arreglo[j]; 
                arreglo[j]=arreglo[j-1]; 
                arreglo[j-1]=k; 
                j--; 
            } 
    } 
    printf("\n\nArreglo ordenado \n\n"); 
    imprimearreglo(); 
}
