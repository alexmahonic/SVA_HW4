/*
 ============================================================================
 Name        : StackSmashing.c
 Author      : Alex
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include    <stdio.h>
#include    <stdlib.h>
#include    <assert.h>
#include	<string.h>
#include <stdlib.h>
//#include "real_main.c"

#define BUFFER_SIZE 480

void vuln(char *para) {
	char buffer[BUFFER_SIZE];
//	printf("%p->%p\n", buffer, buffer + 127);
	strcpy(buffer, para);

}

int main(int argc, char *argv[]) {

	if(argc != 2)
	{
		fprintf(stderr, "Usage: %s parameter\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	printf("vuln start\n");
	vuln(argv[1]);
	printf("vuln finish\n");
	return 0;

}
