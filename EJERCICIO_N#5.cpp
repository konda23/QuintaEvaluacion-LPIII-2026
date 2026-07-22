#include <iostream>
#include <string>

using namespace std;

int main() {
   
    string alumnos[5];
    float notas[5];

for (int i = 0; i < 5; i++) {
cout << "Ingrese el nombre del alumno " << (i + 1) << ": ";
cin >> alumnos[i];
cout << "Ingrese la nota de " << alumnos[i] << ": ";
cin >> notas[i];
cout<<endl;
}

    for (int i = 0; i < 5; i++) {
    int j = i;
    float auxNota = notas[i];
    string auxAlumno = alumnos[i];
       
       
    while (j > 0 && notas[j - 1] > auxNota) {
	notas[j] = notas[j - 1];
    alumnos[j] = alumnos[j - 1];
	j--;
    }
    notas[j] = auxNota;
    alumnos[j] = auxAlumno;
    }

    cout << "final nota" << endl;
    for (int i = 0; i < 5; i++) {
    cout << alumnos[i] << ": " << notas[i] << endl;
    }

    return 0;
}	
	
	
	
	
	

