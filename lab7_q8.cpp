/*8. Write a C++ program to find sum of digits of a given number using recursion.*/

//include library
#include<iostream>
using namespace std;

//declare function 
int sum(int a,int b, int c){	
	if(a%10==0) 
	{
	cout<<c<<endl;
	return c;
	}
	
	else{
	b=a%10; 
	a=a/10; 
	c+=b; 
	sum(a,b,c);
	}
}
//main function
int main(){
	int a;
	cout<<"Enter a number:"<<endl;
	cin>>a;
	//calling a function
	cout<<"The sum of the digits are : "<<endl;
	sum(a,1,0);
return 0;
} 
