#include <iostream>
using namespace std;

int main(int argc, char **argv){

    int  a; int b;
	cout << "Enter value of A: ";
	cin >> a;
	cout << "Enter value of B: ";
	cin >> b;

	int *ptrA=&a;
	int *ptrB=&b;

    cout << "Value of pointer A is " << *ptrA << endl;
	cout << "Value of pointer B is " << *ptrB << endl;
	return 0;
}