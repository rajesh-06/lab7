/*2. Write a C++ program to print all natural numbers between 1 to n using recursion.*/

//include the library
#include<iostream>
using namespace std;
//Declare variable
int foo(int i,int n){
	if(i>n)
	return 0;
	else{
		cout<<i<<endl;
		i++;
		foo(i,n);
	return 0;
	}

}

//main function
int main(){
	int n;
	cout<< "Enter a natural number: "<<endl;
	cin>>n;
	//printing the result
	cout<<"The natural numbers  are: "<<endl;
	foo(1,n);
//terminating program
return 0;
}

