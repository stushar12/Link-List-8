#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
  int data;
  struct node *next;
};
struct node *create()
{
    struct node *temp,*start=NULL,*q,*p,*r,*t;
while(1)
{
  char str1[10];
  printf("\n Enter yes or no\n");
  scanf("%s",str1);
  if(strcmp(str1,"no")==0)
  break;
  else
  {
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter a value ");
  scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)
    {
      start=temp;
      p=temp;
      q=temp;
    }
    else
    {
      p->next=temp;
      p=temp;

    }
  }
}
return q;
}
int length(struct node *p)
{
  int c=0;
  while(p!=NULL)
  {
    c++;
    p=p->next;
  }
  return c;
}
void delete(struct node *q)
{
  struct node *temp,*temp1,*start,*p,*r;
  r=q;
int k=length(q);
for(int i=1;i<=k;i++)
{
  if(i==1)
  {
    temp=q;
    start=q->next;
    q=q->next;
    free(temp);
  }
else if(i%2==1)
  {
    temp1=q;
    p->next=q->next;
q=q->next;
    free(temp1);

  }
  else
  {
    p=q;
      printf("%d\n",q->data);
    q=q->next;
  }
}
}
int main()
{
  struct node *p,*temp,*start=NULL,*t,*q;
  p=create();
delete(p);
}
