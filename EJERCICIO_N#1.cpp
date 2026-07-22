#include<iostream>
using namespace std;
int main(){
	float arreglo[]={5.2, 3.8, 4.1, 2.2, 1.3, 10.8, 6.4, 8.8, 7.3, 9.1};
	float aux;
	float numeroMayor;
	float numeroMenor;
	
	for(int i=0 ; i<10 ; i++){
		for(int j=0; j<9 ; j++){
			
			if(arreglo[j]> arreglo[j+1]){
			aux=arreglo[j];
			arreglo[j]=arreglo[j+1];
			arreglo[j+1]=aux;	
			}
		}
	}
	
	cout<<"Arreglo ordenado"<<endl;
	for(int i=0 ; i<10 ; i++){
		
		cout<<arreglo[i]<<" ";
		numeroMayor=arreglo[i];
		numeroMenor=arreglo[i-9];	
		
	}
	cout<<" "<<endl;
	cout<<"El numero mayor es:  "<<numeroMayor<<endl;
	cout<<"El numero menor es:  "<<numeroMenor<<endl;


	return 0;
}
