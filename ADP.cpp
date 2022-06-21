#include <stdio.h>

//const int MAX = 3;

/*Suma de punteros o incremento*/

/*int main () {

   int  var[] = {10, 100, 200};
   int  i, *ptr;
   
   
   ptr = var;
	
   for ( i = 0; i < MAX; i++) {

      printf("Address of var[%d] = %x\n", i, ptr );
      printf("Value of var[%d] = %d\n", i, *ptr );

      ptr++;
   }
   

   return 0;
}


/* Resta de punteros o decremento */

/*int main(){
	
	const int MAX = 3;
	
	int var[] = {10, 100, 200};//[0,1,2]
	int i, *ptr;
	
	ptr = &var[MAX -1]; // pointing the third position of matrix
	
	for(i = MAX; i > 0; i--){
	  printf("Address of var[%d] = %x\n", i-1, ptr );
      printf("Value of var[%d] = %d\n", i-1, *ptr );

      ptr--;
	}
	return 0;
}*/	

int main(){
	const int MAX = 3;
	int var[] = {10, 100, 200};
	int i, *ptr;
	
	ptr = var;
	i = 0;
	
	while( ptr <= &var[MAX - 1]){ // mientras que la direccion sea menor o igual que la 
								//direccion del var sea [2]
	  printf("Address of var[%d] = %x\n", i-1, ptr ); //imprimir la dirección de memoria
      printf("Value of var[%d] = %d\n", i-1, *ptr ); //imprimiendo el valor
      
      ptr++;
      i++;
		
	} 
	return 0;
}
