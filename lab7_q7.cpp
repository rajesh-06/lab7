/*7. Write a C++ program to check whether a number is palindrome or not using recursion.*/

//include library
#include<iostream>
using namespace std;
//declare function
int pal(int a,int b, int c){ 	
	if(a%10==0){
		cout<<c<<endl;
	return c;
	}
	else{
		b=a%10; 
		a=a/10;  
		c=c*10+b; 
		pal(a,b,c);
	}
	
	
}
//main function
int main(){	
	int a,b;
	cout<<"Enter a number to be reversed "<<endl;
	cin>>a;
	b=pal(a,1,0);
	//check if number is a palindrome or not
	if(a==b){
		cout<<"It is a palindrome"<<endl;
	}
	else{
		cout<<"It is not a palindrome"<<endl;
	}
return 0;
}
