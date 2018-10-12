/*11. Write a C++ program to find GCD (HCF) of two numbers using recursion.*/

//include library
#include<iostream>
using namespace std;


//Defining functions 
int gcd (int x, int y){
 	if (y != 0)
 		return gcd(y, x%y);
	else 
		return x;
}

//Main function
int main(){
	
	//declaring variables in main
	int x,y;
	//Enter the inputs
	cout<<"Enter first number: "<<endl;
 	cin>> x;
	cout<<"Enter second number: "<<endl;
	cin>> y;

	//printing the results
	cout<< "G.C.D of "<<x<<" and "<<y<< " is "<< gcd(x,y)<<endl;
 
return 0;
} 




