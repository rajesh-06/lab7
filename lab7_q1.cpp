//include the library
#include<iostream>
using namespace std;
int exponent(int i,int j){
	//if and else statements
	if(j==0)
	{
	return 1;}
	else
	{
	return i*exponent(i,j-1);
	}
}
//main function
int main(){
	int a,b;
	cout<<"Enter base and exponent :";
	cin>>a>>b;
	exponent(a,b);
	//printing the result
	cout<<"a^b is :"<<exponent(a,b)<<endl;
//terminating program	
return 0;
} 
