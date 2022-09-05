// 2. Write a function to find the smallest and largest element of a single linked list.
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
}*start=NULL;
void smallest(struct node *ptr);
void largest(struct node *ptr);
void main()
{
	int ch,ptr;
	while(1)
	{
	int a[20],i,n,m;
	printf("\n1. Smallest\n2. Largest\n3. Exit\n");
	scanf("%d",&m);
	printf("Enter the number of elements of the list : ");
	scanf("%d",&n);
	printf("Enter the elements of the list : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	switch(ch)
	{
		case 1 : smallest(ptr);
		         break;
		case 2 : largest(ptr);
		         break;
		case 3 : exit(0);
		         break;
		default : printf("Wrong choice!!");
	}
	}
}
void smallest(struct node *ptr)
{
	int small=ptr->info;
	while(ptr!=NULL)
	{
		if(ptr->info<small)
		   small=ptr->info;
		ptr=ptr->link;
	}
	printf("Smallest number is : %d",small);
}
void largest(struct node *ptr)
{
	int large=ptr->info;
	while(ptr!=NULL)
	{
		if(ptr->info>large)
		    large=ptr->info;
		ptr=ptr->link;
	}
	printf("Largest number is : %d",large);
}

