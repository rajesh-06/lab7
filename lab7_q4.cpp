/*4. Write a C++ program to find sum of all natural numbers between 1 to n using recursion.   */

//include the library
#include<iostream>
using namespace std;
//declare function
int foo(int i){
	if (i>=1)
        return i + foo(i - 1);
return 0;
}

//Main function
int main(){
	int i;
	cout << "Enter a natural number: ";
	cin >> i;
	//printing results
	cout << "Sum =  " << foo(i);

return 0;
}


