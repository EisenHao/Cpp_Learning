#include<stdio.h>
#include<stdlib.h>
typedef char datatype;
typedef struct node
{
	datatype data;
	struct node *next;
}linklist;
linklist *createlist()
{
	char ch;
	linklist *head,*s,*r;
	head=(linklist*)malloc(sizeof(linklist));
	r=head;
	printf("�������ַ�����������#����\n");
	ch=getchar();
	while(ch!='#')
	{
		s=(linklist*)malloc(sizeof(linklist));
		s->data=ch;
		r->next=s;
		r=s;
		ch=getchar();
	}
   r->next=NULL;
   return head;
}
linklist *get(linklist *head ,int i)
{	
	int j;
	linklist *p;
	p=head;j=0;
	while((p->next!=NULL)&&(j<i))
	{
		p=p->next;
		j++;
	}
	if (i==j)return p;
	else return NULL;
}
void main()
{
	linklist *head,*r;
	int num;
	head=createlist();
	printf("������ϢΪ:");
	r=head->next;
	while(r)
	{
		printf("%c",r->data);
		r=r->next;
	}
	printf("\n");
		printf("������Ҫ��ѯ����ţ�\n");
		scanf("%d",&num);
		r=get(head,num);
		if(r==NULL)printf("            \n");
		printf("���ҵĽ��Ϊ :%c\n",r->data);
	}