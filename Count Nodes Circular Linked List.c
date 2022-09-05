// Write a C program to create a circular linked list and count the number of nodes.
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
}*last=NULL;
void Create(int data);
void Count();
void Display();
void main()
{
	int i,n,m;
	printf("Enter how many nodes you want to create : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the item : ");
		scanf("%d",&m);
		Create(m);
	}
	Display();
	printf("No of nodes is : ");
	Count();
}
void Create(int data)
{
	struct node *q,*tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	if(last==NULL)
	{
		last=tmp;
		tmp->link=last;
	}
	else
	{
		tmp->link=last->link;
		last->link=tmp;
		last=tmp;
	}
}
void Display()
{
	struct node *q;
	if(last==NULL)
	{
		printf("List is empty");
		return;
	}
	q=last->link;
	printf("List is :\n");
	while(q!=last)
	{
		printf("%d ",q->info);
		q=q->link;
	}
	printf("%d\n",last->info);
}
void Count()
{
	struct node *q;
	int ct=0;
	q=last;
	while(q!=NULL)
	{
		q=q->link;
		ct++;
	}
	printf("%d ",ct);
}
