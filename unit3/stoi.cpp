
#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main(){
	
	int cols = 2; //el numero de columnas fijas
	
	string** libros; //inicializando la matriz con punteros

	int size;
	
	cout<<"Cuantos libros debe ingresar? \n";
	
	string entrada; //declaro la variable de entrada
	
	getline(cin, entrada); //se asigna el valor ingresado
	
	size = stoi(entrada); //transformar la entrada "string" a "entero"
	
	libros = new string*[size]; //dasignar el numero de filas segun el usuario
	
	
	cout<<"Ingrese la siguiente informacion de los libros: \n";
	string titulo,autor;
	
	for(int i=0; i<size; i++){
		
		libros[i] = new string[cols];
		cout<<"\n****** Libro"<<i+1<<"********\n";
		cout<<"titulo: ";
		getline(cin,titulo);
		cout<<"autores: ";
		getline(cin,autor); //se asigna el valor 
		libros[i][0] = titulo;
		libros[i][1] = autor;
	}
	/*encontrar libro en base a la posicion con punteros*/

	int posicion ;
	string *direcciondelibro;
	cout << "Escribe el titulo del libro que deseas encontrar: ";
	cin >> posicion;
	direcciondelibro = libros [posicion];

	cout << "El libro seleccionado es  " + *(direcciondelibro) + "  de " +  *(direcciondelibro+1)  << endl ;

	

	system("pause");
	return 0;
}

/*
group assignment: from the previus code, using pointers, you must ask the user which book the print
pointing the data of direction declared
*/

 /* cout << str [i][0] << ' ' << *pc <<< */
