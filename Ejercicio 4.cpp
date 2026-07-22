#include <iostream>
using namespace std;

int main(){
	int i,j,k;
	int arreglo[6];
	int aux;
	int intercambio=0;
	
	cout << "Ingrese los valores del arreglo separados por un espacio: ";
	for(i=0; i<6 ; i++){
		cin >> arreglo[i];
	} cout << " " << endl;
	
	for(i=0; i<6 ; i++){
		for(j=0; j<5 ; j++){
			if(arreglo[j] > arreglo[j+1]){
				aux = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = aux;
				
				intercambio++;
				cout << "Intercambio #" << intercambio << " Se intercambiaron los valores " << arreglo[j] << " y " << arreglo[j+1] << " arreglo actual: [";
				for(k=0; k<6 ; k++){
					cout << arreglo[k] << " ";
				}
				cout<< "]"<<endl<<endl;
			}
		}
	}
	
	cout << "Estado final del arreglo: [";
	for(i=0; i<6; i++){
		cout << arreglo[i] << " ";
	}
	cout << "]" << endl;

	return 0;
}
