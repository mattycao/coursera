//The following program computes 
//the probability for dice possibilities 
// 
#include <iostream> //drops .h still available 
#include <cstdlib> // leading C means this also exist in C library
#include <ctime> 
using namespace std; 
const int sides = 6; //replaces many sharp defines 
inline int r_sides(){ return (rand() % sides + 1); }

int main(void) 
{ 
	const int n_dice = 2; 
	int d1, d2; 
	srand(clock());
	cout << "\nEnter number of trials: "; 
	int trials; 
	cin >> trials; //compare to scanf 
	int* outcomes = new int[n_dice * sides +1];
	// Use a vector instead of the dynamic array. The vector will be zero initialized, the array is not zero initialized.
	for (int j = 0; j < trials; ++j) 
		outcomes[(d1 = r_sides()) +( d2 = r_sides())]++; 
	cout << "probability in C++:\n"; 
	for (int j = 2; j < n_dice * sides + 1; ++j) 
		cout << "j = " << j << " p = "<< static_cast<double>(outcomes[j])/trials << endl; 
	delete [] outcomes;
	return 0;
} 
/*
clock() reports the number of processor cycles (or some factor thereof) since 
the current program started. time() reports the number of seconds since midnight
 UTC on January 1st, 1970. Therefore, clock() will always have some small value, 
 whereas time() always returns a larger value every time you run your program.

Notice:
Calling clock() at the beginning of a program will result in approximately the 
same small integer (no time has expired) as you discovered. Hence it is not 
suitable for seeding a random number generator. Using time(NULL) (the calendar
 time) is the standard way of seeding rand().

Use a vector instead of the dynamic array. The vector will be zero initialized, 
the array is not zero initialized. And if you define the array outside of the 
main function, it will be initialized.
 */