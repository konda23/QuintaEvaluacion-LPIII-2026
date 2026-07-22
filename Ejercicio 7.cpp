#include <iostream>
using namespace std;

int main(){
	int i,j;
	int N=4;
	int A[N][N];
	
	cout << "Ingrese la matriz:" << endl;
	for(i=0; i<N; i++){
		cout << "Fila #" << i << " (4 valores separados por espacios): ";
		for(j=0; j<N; j++){
			cin >> A[i][j];
		}
	}
	
	cout << "Elementos que estan en la diagonal principal:" << endl;
	cout << "----------------------------------------" << endl;
	for(i=0; i<N; i++){
		cout << A[i][i] <<" ";
	}
	
	return 0;
}
