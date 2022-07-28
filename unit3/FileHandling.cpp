// file handling//

#include <iostream>
#include <fstream> // allow reading input files
//#include <ofstream> // allow outputting to files //
using namespace std ;

 /*int main  (){


    ifstream source  ("source-file.txt");

    ofstream destination ("destination-file.txt");

   
    int x ;

    source >> x ; // reads one int from source
    source.close (); //close file as soon as we´re done using it//
    destination << x;



    
}
*/

/*int main  (){
fstream new_file ;

new_file.open ("new_file_txt", ios :: out);

if (!new_file)
{
    cout<< "file creation failed" ;

}
else {
    cout<< "new file created";
    new_file << "learning file handling" ; //writting to file



}




}*/

int main  (){
fstream new_file ;

new_file.open ("new_file_writetxt", ios :: in);

if (!new_file)
{
    cout<< "no such file" ;

}
else {

    char ch ;
    while (!new_file.eof()){new_file>> ch ; cout << ch;
    
    }
   


}


}



