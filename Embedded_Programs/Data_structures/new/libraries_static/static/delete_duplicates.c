#include<stdio.h>
#include<stdlib.h>
#include "header.h"
extern struct node *head;
void delete_duplicates()
{
	struct node *p,*s,*q,*temp;
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	for(p=head;p!=NULL;p=p->link)
	{
		for(s=p,q=p->link;q!=NULL;s=q,q=q->link)
		{
			if(p->data==q->data)
			{
				s->link=q->link;
				free(q);
				q=s;
			}
		}
	}
}
