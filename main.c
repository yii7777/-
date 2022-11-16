#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int maximum(int x,int y, int z);

int main(void) {
	int k = maximum(1,2,3);
	printf ("The maximum is %d", k);
	
    return 0;
}
int maximum(int x,int y, int z){
	int max = x;
	
	if ( y > max){
		max = y;
	}
	if ( z > max){
		max = z;
	}
	
	return max;
}
