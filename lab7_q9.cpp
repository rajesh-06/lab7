/*9. Write a C++ program to find factorial of any number using recursion.*/

//including library 
#include<iostream>
using namespace std;

//Declare the function
int fact(int x){
	//conditions
	if(x != 1)
        return x * fact(x - 1);
	else
        return 1;
}

//main function
int main(){
	int x;
	//Enter a positive integer
        cout << "Enter a positive integer: ";
        cin >> x;
        //output the answer
        cout<< x<< "! = " << fact(x)<<endl;
return 0;
}


