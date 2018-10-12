/*10. Write a C++ program to generate nth Fibonacci term using recursion.*/

//include library
#include<iostream>
using namespace std;

//declaring function 
int fib(int f){
	//giving conditions so that we avoid 1 and 0
	if((f==1)||(f==0)){
        return(f);
	}
	else{
        return(fib(f-1)+fib(f-2));
        }
}
 
//main function 
int main(){
	//declaring integers
	int f,i=0;
	//asking user for no. of terms
	cout<<"Give no. of terms in the Fibonacci Series:"<<endl;
	cin>>f;
	//giving user values
	cout<<"Fibonacci Series for "<<f<<" is "<<endl;
	//to continue with the functions 
	while(i<f){
        	cout<<" "<<fib(i)<<endl;
        	i++;
	}
return 0;
}
