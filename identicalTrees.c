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

int identical(struct node *root1, struct node *root2){
	if((root1 == NULL) && (root2 == NULL))
		return 1;
	if((root1->data == root2->data)){
		return (identical(root1->left, root2->left) && identical(root1->right, root2->right));
	}
	return 0;
}

int main(){
	struct node *root1, *root2;
	int idenTree;
	root1 = newNode(1);
	root1->left = newNode(2);
	root1->right = newNode(3);
	root1->left->left = newNode(4);
	root1->left->left->right = newNode(5);
	root2 = newNode(1);
	root2->left = newNode(2);
	root2->right = newNode(3);
	root2->left->left = newNode(4);
	root2->left->left->right = newNode(5);
	idenTree = identical(root1, root2);
	if(idenTree == 0)
		printf("Trees are not identical");
	else
		printf("Identical Trees");
	return 0;
}