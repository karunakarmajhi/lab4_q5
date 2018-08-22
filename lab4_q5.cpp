// write a C++ program to enter two angles of a triangle and find the third angle

// library 
#include<iostream>
using namespace std;

// writing of the main function
int main(){

// declaration of the variables
int angle_a;
int angle_b;
 
// assigning values
cout << "enter the first angle";
cin >> angle_a;
cout << "enter the secong angle";
cin >> angle_b;

// process
cout << "the third angle of the triangle is"<< 180-(angle_a+angle_b)<< ".\n";
 
// end statement
return 0;
}
