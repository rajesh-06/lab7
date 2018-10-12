/*12. Write a C++ program to find LCM of two numbers using recursion.*/

//include library
#include<iostream>
using namespace std;

//defining function
int n=1;
int lcm (int x, int y){	
 	if (n%x==0 && n%y==0)
 		return n;
	else{
        	n++;
                lcm(x,y);
	}
return n;
}

//Main function
int main(){
	
	//declaring variables 
	int x,y;
	//enter inputs
	cout<<"Enter first number: "<<endl;
 	cin>> x;
	cout<<"Enter second number: "<<endl;
	cin>> y;

	//Printing the results
    	cout<< "L.C.M of "<<x<<" and "<<y<< " is "<< lcm(x,y) <<endl;
 
return 0;
}


