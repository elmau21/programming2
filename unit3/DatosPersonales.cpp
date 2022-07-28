/* Crear una structura que almacene los siguientes dattos de una persona:
-Nombre
-Edad
-Cuidad de residencia

Pedir al usuario esos datos de una persona y guardarlos en un fichero llamado "gente.dat". Cerrar el ficehro, volverlo a
 abrir para lectura y mostrar los datos que se habían guardado */
#include <iostream> 
#include<stdio.h>
#include <cstdio>
#include<string.h>
#include<stdlib.h>

int main(){

	struct datos{
		char nombre[21];
		int edad;
		char ciudad[21];
		} persona[10];
		
	FILE* fichero;
	int i, numero = 0 ;
	
	fichero = fopen("gente.dat", "wt");
	if(fichero == NULL){
		printf("No se pudo encontrar el archivo. \n");
	} else{
		puts("Nombre: ");
		gets(persona[i].nombre);
		fprintf(fichero, "%s \t", persona[i].nombre);
		
		puts("\n Edad: ");
		scanf("%d", &persona[i].edad);
		getchar();
		fprintf(fichero, "%d \t", persona[i].edad);
		
		puts("\n Ciudad de residencia: ");
		gets(persona[i].ciudad);
		fputs(persona[i].ciudad, fichero);	
			
		fclose(fichero);
		
	}
	
	fichero = fopen("gente.dat", "rt");
	if (fichero == NULL){
		printf("\n No se pudeo abrir el archivo. \n");
	}else{
		while(!feof(fichero)){ //mientras exista el fichero se va realizar lo que hay en el while
			fgets(persona[i].nombre, 60, fichero);			
			puts(persona[i].nombre);
			
			fscanf(fichero, "%d", &persona[i].edad);
			getchar();
			printf("%d", persona[i].edad);
			
			fgets(persona[i].ciudad, 60, fichero);
			puts(persona[i].ciudad);			
		}
		fclose(fichero);
	}
	return 0;
}

/* Ampliar el programa anterior para que sea un "array structs", de forma que se puedan tener los datos de 10 personas. Se debera pedir
al usuario las 10 personas y guardarlas, entonces debemos escoger entre 1 y 10 e imprimir su info. */