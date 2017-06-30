#include <stdio.h>
#include <conio.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* newNode(int data){
	struct node *Node = (struct node*)malloc(sizeof(struct node));
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;
	return(Node);
}

void left(struct node *root){
	if(root == NULL)
		return;
	if((root->left) != NULL){
		printf("%d\n", root->left->data);
	}
	left(root->left);
	left(root->right);
}

int main(){
	struct node *root1;
	root1 = newNode(1);
	root1->left = newNode(2);
	root1->right = newNode(3);
	root1->left->left = newNode(4);
	root1->left->right = newNode(22);
	root1->left->right->left = newNode(10);
	root1->left->left->right = newNode(5);
	root1->left->right->left->right = newNode(32);
	root1->left->right->left->left = newNode(19);
	root1->left->left->right->right = newNode(15);
	root1->left->left->right->left = newNode(25);
	left(root1);
	return 0;
}