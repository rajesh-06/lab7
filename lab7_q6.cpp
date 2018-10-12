/*6. Write a C++ program to find reverse of any number using recursion.*/

//include the library
#include<iostream>
using namespace std;
int ver(int a,int b){ 	
//conditions to end function
	if(a%10==0) 
	{
	return 1;
	}
	//other display value
	else{
		b=a%10; 
		cout<<b;
		a=a/10;  
		ver(a,b);
	}

}
//Main function
int main(){	
	int a;
	//enter a number
	cout<<"Enter a number to be reversed: ";
	cin>>a;
	ver(a,1);
	return 0;
}
