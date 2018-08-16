// Library 
#include <iostream>
using namespace std;
int main () {
cout << "Hello" << endl;
// To declare variables of all types
int value ; // To declare integer data type
int x,y ; // To show that declaring multiple variables together is possible
value = 2; // Initialization or Definition
x = 4 ; y = 8 ; // To output the assigned integer values
cout << "Integer values assigned to variables are " << value << endl ;
cout << x << endl;
cout << y << endl;
float fl = 7.7 ; // To define variables of single precision floating points or decimal type
// Display floating point value 
cout << "Floating point value assigned to variables is" << fl << endl;
double doubleVar = 248.1632 ; // Defines the variable of double (bigger decimal) type
//Displays double type value
cout << "double type value assigned to variable is " << doubleVar  << endl;

char chimpu = 'x' ; // defines the variable of character type
//displays assigned character type value
cout << "Character value assigned to variable is " << chimpu << endl;


bool boolVar = false ; // Defining values incuded in Boolean type
// displays boolean values
cout << "boolean value assigned to variable is " << boolVar << endl;

//to display the size of data types
cout << "size of x = " << sizeof(x) << endl; //Size of integer data type
cout << "size of fl = " << sizeof(fl) <<endl; //size of float data type
cout << "size of doubleVar = " << sizeof(doubleVar) << endl; //Size of doublevar data type
cout << "size of char = " << sizeof(char) << endl; // size of character
cout << "size of boolVar = " << sizeof(boolVar) << endl;
return 7 ; 
}



