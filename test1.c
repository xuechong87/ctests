/*
 * test1.c
 *
 *  Created on: 2013-3-11
 *      Author: xuechong
 */
#include <stdio.h>
int main() {
	calcu(2.0);
	printSize();
	printAdd();
	return 0;
}

void calcu(float circumference) {
	float radius;
	radius = 2.0;
	circumference = 2.0 * radius * 3.1416;
	printf("circumference is %f\d\n", circumference);
	return;
}

void printSize(){
	printf("int%d",sizeof(int));
}

void printAdd(){
	int i = 1;
	printf("add is %d ",&i);
}
