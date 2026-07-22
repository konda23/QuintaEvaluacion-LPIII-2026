#include <iostream>
using namespace std;
int main(){
	int arreglo[]={4,0,1,0,8,3,0,2,9,5};
	int aux;
	
	for(int i=0 ; i<10; i++){
		for(int j=0 ; j<9 ; j++){
			
		if((arreglo[j] == 0 && arreglo[j+1] !=0 ) || (arreglo[j] > 0 && arreglo[j+1] > 0 && arreglo[j] > arreglo[j+1])){
		aux= arreglo[j];
		arreglo[j]=arreglo[j+1];
		arreglo[j+1]= aux;
		}
		cout<<" "<<endl;	
		}
		
	}
	
	cout<<"Arreglo ordenado"<<endl;
	for(int i=0 ; i<10 ; i++){
		cout<<arreglo[i] << " ";
	}
	
	
	
	
	return 0;
}
