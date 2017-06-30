// Swap consecutive elemets of a linked list

#include <stdio.h>
#include <conio.h>

struct node{
	int data;
	struct node *next;
};

struct node *head = NULL;

//insert at head
void insert(int num){
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = num;
	new_node->next = head;
	head = new_node;
}

void swap(){
	int num;
	struct node *temp1, *temp2;
	temp1 = head;
	temp2 = head->next;
	do{
		num = temp1->data;
		temp1->data = temp2->data;
		temp2->data = num;
		//printf("%d\n", temp1->data);
		//printf("%d\n", temp2->data);
		//temp1 = temp1->next->next;
		//temp2 = temp2->next->next;
	}while(((temp1 = temp1->next->next) != NULL) && ((temp2 = temp2->next->next) != NULL));
}

void print_list(){
	struct node *temp = head;
	while(temp != NULL){
		printf("%d->", temp->data);
		temp = temp->next;
	}
	if(temp == NULL){
		printf("NULL\n");
	}
}

int main(){
	insert(10);
	insert(12);
	insert(34);
	insert(5);
	print_list();
	swap();
	print_list();
	return 0;
}