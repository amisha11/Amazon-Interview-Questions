//Add the elements of two liked list assuming them to be two n amd m digit numbers

#include<stdio.h>
#include<conio.h>

struct node{
	int data;
	struct node *next;
};

struct node* insert(struct node *head, int num){
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	if(head == NULL){
		head = new_node;
		head->data = num;
		head->next = NULL;
	}
	else{
		struct node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		new_node->data = num;
		new_node->next = NULL;
		temp->next = new_node;
	}
	return head;
}

int add(struct node *head1, struct node *head2){
	struct node *temp = head1;
	int num1 = 0, num2 = 0;
	while(temp != NULL){
		num1 = num1 * 10 + temp->data;
		temp = temp->next;
	}
	temp = head2;
	while(temp != NULL){
		num2 = num2 * 10 + temp->data;
		temp = temp->next;
	}
	return (num1+num2);
}

int main(){
	struct node *head1 = NULL, *head2 = NULL;
	head1 = insert(head1, 3);
	head1 = insert(head1, 9);
	head1 = insert(head1, 4);
	head2 = insert(head2, 7);
	head2 = insert(head2, 8);
	head2 = insert(head2, 4);
	head2 = insert(head2, 1);
	int sum = add(head1, head2);
	printf("Sum of the list is: %d", sum);
	return 0;
}