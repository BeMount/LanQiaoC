/*
��������
�����˿������򣺹����˿������飬���˿��ƽ�����������ԭ�����£�
���ִ�С������2-10��J��Q��K��A����ɫ��С�����Ƿ��飨diamond����
÷����club�������ң�heart�������ң�spade���������ƱȽ�ʱ�ȿ����֣���
����ͬʱ����ɫ��Ҫ���������˿��ƽ��д�С��������
�������������ƣ���ʾ����2������3������3������A��÷��J���� 2 s 3 h 3 s A d J c
����������ӦΪ��2 s 3 h 3 s J c A d���鳤�ȹ̶�Ϊ5��
�������
����������������Ӧ�������
����

���ݹ�ģ��Լ��
��������������ÿһ�����ķ�Χ��
*/

#include<stdio.h>
typedef
struct
{
 char shu;
 char hs;
}PDX_t;

void shuru(PDX_t *,int);
void shuchu(PDX_t *,int );
void bjiao(PDX_t *,int,char*,char*);
int find(char,char*);
void jiaohuan(PDX_t*,PDX_t*);

int main(void)
{
  PDX_t ps[5];
  shuru(ps,5);
 char shuz[]={'2','3','4','5','6','7','8','9','J','Q','K','A'};
 char hss[]={'d','c','h','s'};
 bjiao(ps,5,shuz,hss);
  shuchu(ps,5); 
  return 0;
}

void shuru(PDX_t *s,int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  scanf(" %c %c",&s[i].shu,&s[i].hs);
 }
}

int find(char a,char*sz)
{
	int i,count=0;
	while(*sz!=0)
	{
	 count++;
	 if(a==*sz)
	 {
	  break;
	 }
	 sz++;
	}
	return count;
}

void bjiao(PDX_t *s,int n,char *shuz,char*hss)
{
  int i;
  for(i=1;i<n;i++)
  {
   int k;
   for(k=0;k<n-i;k++)
   {
   	   int kdx=find(s[k].shu,shuz);
   	   int kdx1=find(s[k+1].shu,shuz);
    if ( kdx>kdx1 )
    {
	  jiaohuan(s+k,s+1+k);
	}
	else
	{
	  if(kdx==kdx1)
	  {
	    if(find(s[k].hs,hss)>find(s[k+1].hs,hss))
	    {
		  jiaohuan(s+k,s+1+k);
		}
	  }
	}
    }
  }
}

void jiaohuan(PDX_t *p,PDX_t *q)
{
  PDX_t t;
  t=*p;
  *p=*q;
  *q=t;
}

void shuchu(PDX_t *s,int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  printf("%c%c ",s[i].shu,s[i].hs);
 }
}


