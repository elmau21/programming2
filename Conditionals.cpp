#include <iostream>
using namespace std;


int main(){
	int x,y = 50;
	//int x,y = 10; Minor case which its output will be 30 bc of the main boolean condition. 
	
	x = (y < 10) ? 30 : 40; //Boolean Condition
	
	cout<<"Value of x: "<< x << endl;
	return 0;
}
