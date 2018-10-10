#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
	struct node * test=malloc(sizeof(struct node));
	print_list(test);
	test=insert_front(test,2);
	test=insert_front(test,3);
	test=insert_front(test,4);
	test=insert_front(test,5);
	test=insert_front(test,6);
	print_list(test);
	free_list(test);
	print_list(test);
	return 0;
}