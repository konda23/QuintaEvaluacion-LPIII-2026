#include <iostream>
using namespace std;

int main(){
	int i,j;
	int N=3;
	int A[N][N], B[N][N], C[N][N];
	
	cout << "Ingrese la matriz [A]:" << endl;
	for(i=0; i<N; i++){
		cout << "Fila #" << i << " (3 valores separados por espacios): ";
		for(j=0; j<N; j++){
			cin >> A[i][j];
		}
	}
	
	cout << "Ingrese la matriz [B]:" << endl;
	for(i=0; i<N; i++){
		cout << "Fila #" << i << " (3 valores separados por espacios): ";
		for(j=0; j<N; j++){
			cin >> B[i][j];
		}
	}
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
		C[i][j] = A[i][j] + B[i][j];	
		}
	}
	
	
	cout << "Matriz [C], resultado de la suma entre [A]+[B] = [C]" << endl;
	cout << "----------------------------------------" << endl;
	for(i=0; i<N; i++){
		for(j=0; j<N ; j++){
			cout << C[i][j] <<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
