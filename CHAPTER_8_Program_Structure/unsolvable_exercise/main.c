#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int funct1(int);
int funct2(int);

int main(int argc, char *argv[]) {
	
	int a = 0, b = 1, count;
	
	for (count=1; count<=5; ++count) {
		b += funct1(a) + funct2(a);
		printf("%d ", b);
	}	
	return 0;
}

int funct1(int a) {
	int y;
	y = funct2(a);
	return(y);
}

int funct2(int a) {
	static int x = 1;
	x += 1;
	return(x + a);
}
