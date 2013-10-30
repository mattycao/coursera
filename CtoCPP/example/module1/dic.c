#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define SIDES 6 
#define R_SIDE (rand() % SIDES + 1) // macro

int main() 
{ 
	int n_dice = 2; 
	int d1, d2, trials, j; 
	int* outcomes = (int*)calloc (n_dice * SIDES +1, sizeof(int)); 
	srand(clock()); 
	printf ("\nEnter number of trials: "); 
	scanf("%d", &trials); 
	for (j = 0; j < trials; ++j) 
	outcomes[(d1 = R_SIDE) +( d2 = R_SIDE)]++; 
	printf( "probability in C:\n"); 
	for (j = 2; j < n_dice * SIDES + 1; ++j) 
		printf( "j = %d p = %lf\n" , j , (double)(outcomes[j])/trials); 
	free(outcomes);
	return 0;
} 

