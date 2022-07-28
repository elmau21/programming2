 //(matriz dinamica)

 
 
 
 #include <iostream>
  using namespace std ;


   int main (){
        char str[] = "A string";

        char *pc = str;
        cout << str [0]<< ' '<<  *pc << ' '<< pc[3]<< "\n" ;
        // A " "0x1000 "  " t 

        pc += 2; // salto 2 en 2 posiciones //
        cout << *pc<< ' ' << pc [2] <<  ' '<< pc [5] << "\n";




   } 



