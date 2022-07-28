#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;
int i ;
int	columnas = 2;
int	filas;
string	entrada;
string	**punteroMatriz;
string	titulo;
string	autor;
string	buscar;
string NombredelArchivo ;
ofstream archivo ;




void peticionDatos(){
	cout<<"Cuantos libros debe ingresar? \n";
	getline(cin, entrada); 	
	filas = stoi(entrada); 	
	punteroMatriz = new string *[filas];
	
	for( i=0; i<filas; i++){
		punteroMatriz[i] = new string[columnas];
		
		cout<<"\n\a\t ****** Libro "<<i+1<<"********\n";
		cout<<"Titulo: ";
		getline(cin,titulo);
		
		cout<<"Autor: ";
		getline(cin,autor);
		
		cout << titulo << " de " << autor << endl ;
	}
    
}

void busquedaLibro(string **punteroMatriz){
	int counter = 0;
	
for( i=0; i<filas; i++){
		 titulo = punteroMatriz[i][0]  ;
		 autor = punteroMatriz[i][1] ;}
 cout << titulo << " de " << autor<< endl ;
}


int main (){
	peticionDatos ();
    return 0 ;
}


