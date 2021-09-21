#include <stdio.h>
#define datos 10 //Es una constante
using namespace std;

void QuickSort(int *array, int inicio, int final) {
  int i = inicio, f = final, tmp;
  int x = array[(inicio + final) / 2];
  do {
    while(array[i] < x && f <= final) {
      i++;
    }
    while(x < array[f] && f > inicio) {
      f--;
    }
    if(i <= f) {
      tmp = array[i];
      array[i] = array[f];
      array[f] = tmp;
      i++; f--;
    }
  } while(i <= f);

  if(inicio < f) {
    QuickSort(array,inicio,f);
  }

  if(i < final){
    QuickSort(array,i,final);
  }

}
void Print(char *function,int *array, int n) {
  int x;
  printf("%s:",function);
  for(x = 0; x < n; x++) {
    printf(" %i",array[x]);
  }
  printf("\n");
}
int main() {

  int vector[datos] = {1,2,5,71,99,0,5,16,26,3};

	Print("Arreglo ",vector,datos);
	printf("\n");
  QuickSort(vector,0,datos - 1); // datos - 1: resto 1 porque es la posición inicial menos la final posición no cantidad de elementos
  Print("QuickSort",vector,datos);

  return 1;
}
