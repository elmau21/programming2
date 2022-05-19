#include<stdio.h>
#include<math.h>

//int = 10;
//double int = 10,11;
float pi = 3.141592;
//double float = 12.3,3.6;
//bool = 1;
//char = 'c';

int r = 0; //Set variable r
float A = 0; //Set variable A

int main(){
	printf("Set the radius value: \n");
	scanf("%d", &r); //scan a int value and storages it in r
	A = pi * (pow(r,2));	//Area formula
	printf("The are is: %f", A);
	
	return 0;
}
