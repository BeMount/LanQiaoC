/*
��������
���������СB����N���ǣ�������������СBֱ�ӳԵ���
�������赱ǰ��M���ǣ�СBÿ�ο�����P���ǣ�����P��M��һ�������ڸ�����M����������
    ��ʱ������ͻ���СB����P�����Ժ��ٴ��Ƕ�������P���ǡ�Ȼ��СB�Ϳ��Խ������ǡ�
��������СBϣ��֪���������ö����ǡ�
�����ʽ
����һ������N
�����ʽ
�����������ö�����
��������
15
�������
6
���ݹ�ģ��Լ��
����N <= 100000
*/ 
/*
��ӡ������Ȼ��ɸѡ 
*/
#include <stdio.h>
#include <math.h>
#define zd 100000

void q_zsb (int [],int [] ,int *);
void natangguo (int [],int ,int );
int max (int ,int );

int main(void) 
{
	int n;
	scanf ("%d",&n);
	int pd[zd] ={0};
	int zsb[zd] = {0};
	int ws = 0;
	q_zsb (pd,zsb,&ws);
	natangguo (zsb,n,ws);
	return 0;
}

int max (int a,int b)
{
	return a > b ? a : b;
}

void natangguo (int zsb[],int n,int ws)
{
	int a[zd];
	int i,j;
	for (i = 1;i <= n;i ++)
	{
		for (j = 0;j < ws;j ++)
		{
			if (zsb[j] * zsb[j] > i)//P��M��һ�������ڸ�����M��������
			{
				break;
			}
			if (i % zsb[j] == 0)
			{
				a[i] = max (a[i],a[i-2*zsb[j]] + zsb[j]);
			}
		}
	}
	printf ("%d\n",a[n]); 
}

void q_zsb (int pd[],int zsb[],int * p_wei)
{
	int n = sqrt (zd);
	int i;
	for (i = 2;i <= n;i ++)
	{
		if (pd[i] == 0)
		{
			zsb[* p_wei] = i;
			(* p_wei) ++;
			if(i*i<=n)
			{
			 pd[i] = 1;
			} 	
		}
	}
}

