#include<iostream>

using namespace std;

int main(){
	int arr[3] = {1,2,3};
	int suma1=0;
	int suma2=0;
	int suma3=0;
	int salida=0;
	
	cout<<"Arreglo: ";
	for(int i=0;i<3;i++){
		cout<<arr[i] <<" ";
	}
	
	suma1 = arr[0] +1;cout<<"\nSuma1: " <<suma1;
	suma2 = arr[1] +1;cout<<"\nSuma2: " <<suma2;
	suma3 = arr[2] +1;cout<<"\nSuma3: " <<suma3;

	if (suma1 == 2){
		salida+=1;
	}
	if (suma2 == 3){
		salida+=1;
	}
	if (suma3 != arr[3]){
		salida+=0;
	}
	
	cout<<"\n\nOutput: " <<salida<<endl<<endl;
	
	cout<<"-----------EJEMPLO 2---------------"<<endl;
	
	int arr2[8] = {1,1,3,3,5,5,7,7};
	int suma4=0;
	int suma5=0;
	int suma6=0;
	int suma7=0;
	int salida2=0;
	
	cout<<"Arreglo: ";
	for(int j=0;j<8;j++){
		cout<<arr2[j] <<" ";
	}
	
	suma4 = arr2[0] +1;cout<<"\nSuma1: " <<suma4;
	suma5 = arr2[2] +1;cout<<"\nSuma2: " <<suma5;
	suma6 = arr2[4] +1;cout<<"\nSuma3: " <<suma6;
	suma7 = arr2[6] +1;cout<<"\nSuma4: " <<suma7;
	
	if (suma4 == 2){
		salida2 = 0;
	}
	if (suma5 == 4){
		salida2= 0;
	}
	if (suma6 == 6){
		salida2= 0;
	}
	if (suma7 == 8){
	salida2= 0;
	}
	cout<<"\n\nOutput: " <<salida2;
	
	/*cout<<"\n-----------EJEMPLO 3---------------"<<endl;
	
	int arr3[6] = {1,3,2,3,5,0};
	int suma8=0;
	int suma9=0;
	int suma10=0;
	int suma11=0;
	int suma12=0;
	int salida3=0;
	
	cout<<"Arreglo: ";
	for(int c=0;c<6;c++){
		cout<<arr3[c] <<" ";
	}
	
	suma8  = arr3[0] +1;cout<<"\nSuma1: " <<suma8;
	suma9  = arr3[1] +1;cout<<"\nSuma2: " <<suma9;
	suma10 = arr3[2] +1;cout<<"\nSuma3: " <<suma10;
	suma11 = arr3[4] +1;cout<<"\nSuma4: " <<suma11;
	suma12 = arr3[5] +1;cout<<"\nSuma4: " <<suma12;
	if (suma8 == arr3[6]){
		salida3++;
	}
	if (suma8 == arr3[6]){
		salida3++;
	}
	if (suma10 == arr3[6]){
		salida3++;
	}
	if (suma11== arr3[6]){
	salida3++;
	}
	if (suma12== arr3[6]){
	salida3++;
	}
	cout<<"\n\nOutput: " <<salida3;*/
	return 0;
}
