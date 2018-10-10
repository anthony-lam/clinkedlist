#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

void print_list(struct node *list){
	struct node *current = list;
	printf("[");
	while (current){
		if (current->next==NULL){
			printf("%d]\n",current->i);
			return ;
		}
		printf("%d ",current->i);
		current = current->next;
	}
}

struct node * insert_front(struct node *first, int new){
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node->i = new;
	new_node->next = first;
	return new_node;
}

struct node * free_list(struct node * list){
	struct node *current;
	while (list){
		current = list;
		list = current->next;
		current->next=NULL;
		free(current);
	}
	return list;
}