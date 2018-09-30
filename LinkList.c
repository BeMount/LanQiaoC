#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
//���������1 2 4 5����2֮�����3
//����1 2 3 4 5 6ɾ��3

typedef
struct node
{
	int data;
	struct node*next;
}*ptr,snode;

void Add(ptr);
void Delete(ptr);
ptr Input(void);
void Show();
void Search();
void Change(ptr);
void Reverse(ptr);


int main(void) 
{ 
    ptr head=Input(); 
    Show();
	printf("����������ѡ��"); 
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
	  case 1: Add(head);
	  break;
	  case 2: Delete(head);
	  break;
	  case 3: Search(head);
	  break;
	  case 4:Change(head);
	  break;
	  case 5:Reverse(head);
	  break;
	  default:
	  printf("������������������\n");	
	}
	putchar('\n');
	return 0;
}

void Show()
{
	printf("***********1-���Ԫ��********\n");
	printf("***********2-ɾ��Ԫ��********\n"); 
	printf("***********3-����Ԫ��********\n");
	printf("***********4-�޸�Ԫ��********\n");
	printf("***********5-����Ԫ��********\n");
}


void Add(ptr head)
{
	printf("������Ҫ��ӵ�Ԫ�أ�");
	int element;
	scanf("%d",&element); 
	while(head!=NULL)
	{
		if(head->data==element-1)
		{
			ptr p=(ptr)malloc(sizeof(snode));
			p->data=element;
			p->next=head->next;
			head->next=p;
		} 
		printf("%d ",head->data);
		head=head->next;
	} 
}


void Delete(ptr head)
{
	printf("������Ҫɾ����Ԫ�أ�");
	int element;
	scanf("%d",&element); 
	while(head!=NULL)
	{
		if(head->data==element-1)
		{
			ptr p=(ptr)malloc(sizeof(snode));
			p=head->next;
			head->next=p->next; 
			free(p); 
		} 
		printf("%d ",head->data);
		head=head->next;
	}
}

ptr Input(void)
{
	ptr head=NULL,last;
    int x;
    scanf("%d",&x);
	while(x!=0)
	{
	  ptr p=(ptr)malloc(sizeof(snode));
	  p->data=x;
	  if(head==NULL)
	  {
	  	p->next=head;
	  	head=p;
	  	last=p;
	  }else{
	  	last->next=p;
	  	p->next=NULL;
	  	last=p;
	  }
	 scanf("%d",&x); 
	}
	return head;
}

void Search(ptr head)
{
	printf("������Ҫ���ҵ�Ԫ�أ�");
	int element;
	scanf("%d",&element); 
	while(head!=NULL)
	{
	   if(head->data==element) 
	   {
	     printf("���ڸ�Ԫ��"); 
	     return;
	   } 
	   head=head->next;
	}
    printf("�����ڸ�Ԫ��"); 
}

void Change(ptr head)
{
	printf("������Ҫ���޸ĵ�Ԫ�����޸ĺ��ֵ��");
	int element,value;
	scanf("%d%d",&element,&value); 
	while(head!=NULL)
	{
	   if(head->data==element) 
	   {
	     head->data=value;
	   } 
	   printf("%d ",head->data);
	   head=head->next;
	} 
}

void Reverse(ptr head)
{
//  ptr p,q,pr;
//  p = head->next;
//  q = NULL;
//  head->next = NULL;
//  while(p){
//    pr = p->next;
//    p->next = q;
//    q = p;
//    p = pr;
//  }
//  head->next = q;


   ptr first = head; //����ָ����������ײ���
   ptr now = head->next;
   ptr next = now->next;
      first->next = NULL; //�׽ڵ���β�ڵ㣬β�ڵ����һ���ڵ��ÿգ���ֹ��·��
     do {
         next = now->next;
        now->next = first;
        first = now;
         now = next;
   } while (next != NULL); 
   
   while(first!=NULL)
   {
	  printf("%d ",first->data);
	  first=first->next;	
	}  
	putchar('\n');
}



