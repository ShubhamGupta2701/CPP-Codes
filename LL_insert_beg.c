#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* head = NULL;
struct node* t = NULL;
void insert_beggining(int a)
{
	t = (struct node*)malloc(sizeof(struct node));
	t->data= a;
	if(head==NULL)
	{
		t->next = NULL;
	}
	else{
		t->next = head;
	}
	head = t;
}
void show(struct node*n)
{
	while(n!=NULL)
	{
		printf("%d ",n->data);
		n = n->next;
	}
}
int main()
{
	head = (struct node*)malloc(sizeof(struct node));
	head->data = 88;
	head->next = NULL;
	insert_beggining(35);
	show(head);
	return 0;
}
