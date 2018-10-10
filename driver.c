#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
	struct node * test=malloc(sizeof(struct node));
	test->i=10;
	printf("Created a node with value 10\n");
	print_list(test);
	int i;
	for (i=9; i>0; i--){
		test=insert_front(test,i);
	}
	printf("Added numbers from 9 to 1\n");
	print_list(test);
	free_list(test);
	printf("Freed list\n");
	print_list(test);
	return 0;
}