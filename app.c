#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

float add[50], sub[50], mul[50], division[50];
char *Ladd[50], *Lsub[50], *Lmul[50], *Ldiv[50]; //Operator Location Array
int a=0, s=0, m=0, d=0; //Operator Location Array Index

int main() {
	int input_length, max_input_buffer = 200, input_index=0;
	char input[max_input_buffer];
	char cursor = *input;
	printf("Enter Values and Operators:\n");
	//fflush(stdin);
	fgets(input, max_input_buffer , stdin); //Input Sting
	input_length = strlen(input); //Input Length
	printf("%d\n", input_length);
	puts(input); //Debug Print Input Sting
	while(input_index < input_length) {
		switch(input[input_index]) {
			case '+': {
					Ladd[a]=&input[input_index];
					a++;
				}
				break;
			case '-': {
					Lsub[s]=&input[input_index];
					s++;
				}
				break;
			case '*': {
					Lmul[m]=&input[input_index];
					m++;
				}
				break;
			case '/': {
					Ldiv[d]=&input[input_index];
					d++;
				}
				break;
		}
		input_index++;
	}
	//sscanf(&cursor, "%[+-*/]", number);
	//strtof(cursor, &cursor);
	return 0;
}
