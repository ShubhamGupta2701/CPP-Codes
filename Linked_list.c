#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};

void display(struct node* n)
{
	while(n != NULL)
	{
		printf("%d ",n->data);
		n = n->next;
	}
}

int main()
{
	struct node*head = NULL;
	struct node*second = NULL;
	struct node*third = NULL;
	
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	
	head->data = 34;
	second->data = 54;
	third->data = 67;
	
	head->next=second;
	second->next=third;
	third->next=NULL;
	
	display(head);
	return 0;
}
