#include <bits/stdc++.h>
using namespace std;
struct node{
	int info;
	struct node *link;
};
struct node *del(struct node *start,int i)
{
	struct node *p=start,*tmp;
	for(int j=0;j<=i-2;j++)
	{
		p = p->link;
	}
	tmp=p->link;
	p->link=tmp->link;
	return start;
}
struct node *insert(struct node *start,int data, int i){
	struct node *p,*tmp,*t=start;
	tmp=(struct node *)malloc(sizeof(struct node));
	for(int j=0;j<=i-2;j++)
	{
		t=t->link;
	}
	p = t->link;
	tmp->info = data;
	tmp->link = p;
	t->link=tmp;
	
	return start;
}
struct node *end(struct node *start,int data)
{
	struct node *p,*tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	while(p->link!=NULL)
		p = p->link;
	p->link=tmp;
	tmp->link=NULL;
	return start;
}
struct node *create(struct node *start,int data)
{
	struct node *p,*tmp;
	if(start==NULL)
	{
		start = (struct node *)malloc(sizeof(struct node));
		start->info = data;
		start->link = NULL;
		return start;
	}
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	while(p->link!=NULL)
		p = p->link;
	p->link=tmp;
	tmp->link=NULL;
	return start;
}


int main()
{
	struct node *start=NULL;
	int data,nodes,inserted_number,index,index1,inserted_number1;
	cout<<"ENTER THE NUMBER OF NODES"<<endl;
	cin>>nodes;
	cout<<"ENTER THE ELEMENT TO BE INSERTED"<<endl;
	cin>>data;
	start = create(start,data);
	for(int i=2;i<=nodes;i++)
	{
		cin>>data;
		start=create(start,data);
	}
	cout<<"Enter number to be inserted and index"<<endl;
	cin>>inserted_number>>index;
	start = insert(start,inserted_number,index);
	cout<<"Enter number's index to be  deleted"<<endl;
	cin>>index1;
	start = del(start,index1-1);
	cout<<"Enter number to be inserted at end"<<endl;
	cin>>inserted_number1;
	start = end(start,inserted_number1);
	while(start!=NULL){
		printf("%d ",(*start).info);
		start=start->link;
	}
	cout<<endl;
	cout<<"Now the reverse of the linkedlist"<<endl;
	while(start!=NULL){
		printf("%d ",(*start).info);
		start=start->link;
	}
	cout<<endl;
	return 0;
}
