#include <iostream>

using namespace std;

void arraySum(int* array, int size, int* sum){
    *sum = 0;
    for (int b=0; b<size; b++){
        *sum+=array[b];
    }
    }

int main()
{
	int *sum, *array1, size;
    sum = new int;
    
    cout << "Enter an int for the array size: " << endl;
    cin >> size;
    array1 = new int[size];
    
    cout << "Fill the array please: " << endl;
    
    for (int c=0; c<size; c++)
	{
        int a = 0;
        cin >> a;
		array1[c] = a;
	}
    
    arraySum(array1, size, sum);
    
	cout << "Sum of numbers in array: " << *sum << endl;
	return 0;
}