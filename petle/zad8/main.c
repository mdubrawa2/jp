#include<stdio.h>

int main(void) {

	int i, j, globalspace,  localspace;

	globalspace = -1;

	for(i =0; i<4;i++) {
		globalspace++;
		localspace = 0;
		printf("\n");
		
		for(j = 4; j >0; j--) {
			if(localspace < globalspace) {
				putchar(' ');
			}
			else { 
				putchar('*');
			}
			localspace++;
		}
	}

	printf("\n");

		globalspace = 4;

	for(i =0; i<4;i++) {
		globalspace--;
		localspace = 0;
		printf("\n");
		
		for(j = 4; j >0; j--) {
			if(localspace < globalspace) {
				putchar(' ');
			}
			else { 
				putchar('*');
			}
			localspace++;
		}
	}
}
