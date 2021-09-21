#include <stdio.h> 
#include <conio.h> 

int main() { 
    int tam=9;
    int a[tam] = { 9, 8, 0, 2, 5, 1, 3, 2, 9};
    int i, pasada, aux;

        printf("Datos en el orden inicial:\n\n");
            for(i=0;i<=tam-1;i++)
                printf("%4d",a[i]);
        for (pasada=1;pasada<=tam-1;pasada++) /*pasadas*/
            for (i=0;i<=tam-2;i++)
                if (a[i]>a[i+1]) /*comparación */
                {
                    /*intercambio*/
                    aux=a[i]; 
                    a[i] = a[i+1]; 
                    a[i+1] = aux;
                }
        printf( "\n\nDatos ordenados en sentido ascendente:\n\n" );
            for (i=0;i<=tam-1;i++ )
                printf("%4d", a[i]);
        printf("\n"); 
        getch(); 
    return 0; 
    }
