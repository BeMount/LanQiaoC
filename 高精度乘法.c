/*
����C/C++�����У��������ܱ�ʾ�ķ�Χһ��Ϊ-231��231����Լ21�ڣ�,
��ʹlong long�ͣ�һ��Ҳֻ�ܱ�ʾ��-263��263��Ҫ�������ӹ�ģ��������Ҫ���������չ�ˣ�
������������ַ�����ģ������ģ�����������㡣
������������������������������ǵĳ˻���
�����ʽ
�������У�ÿ��һ����������ÿ������������10000λ
�����ʽ
����һ�У����������ĳ˻���
��������
99
101
�������
9999
���ݹ�ģ��Լ��
����ÿ������������10000λ
*/
#if 1 
#include <stdio.h>
#include <string.h>

void shuru(int [],int *);
void jiaohuan(int*,int*);
void q_ji(int [],int *,int [],int,int [],int);
void jinw(int [],int *);
void shuchu(int [],int);

int main(void)
{
	int s1[10000] = {0} , ws1 = 0;
	int s2[10000] = {0} , ws2 = 0;
	shuru(s1,&ws1);
	shuru(s2,&ws2);
	int ji[40000] = {0} , jws = 0;
	q_ji(ji,&jws,s1,ws1,s2,ws2);
	shuchu(ji,jws);
	return 0;
}

void jinw(int ji[],int * p_jws)
{
	int i;
	for( i = 0 ; i < * p_jws ; i ++ )
	{
			ji[i + 1] += ji[i] / 10;
			ji[i] %= 10; 
	}
	* p_jws += ji[* p_jws] != 0;
}

void q_ji(int ji[],int * p_jws,int s1[],int n1,int s2[],int n2)
{
	int i;
	for( i = 0 ; i < n1 ; i ++ )
	{
		int k;
		for( k = 0 ; k < n2 ; k ++ )
		{
			ji[i + k] += s1[i] * s2[k] ;
			* p_jws = * p_jws > (i + k) ? (* p_jws) : (i + k);	//		
		}		
	}
	jinw(ji,p_jws);
}

void shuchu(int s[],int n)
{
	int i;
	for( i = n - 1 ; i >= 0 ; i -- )
	{
		printf("%d", s[i] );
	}
	putchar('\n');
}

void jiaohuan(int * a,int * b)
{
	int tmp = * a;
	* a = * b;
	* b = tmp ;
}

void nixu(int s[],int ws)
{
	int low = 0 , high = ws - 1;
	while( low < high )
	{
		jiaohuan(&s[low],&s[high]);
		low ++ ;
		high -- ;
	}
}

void shuru(int s[],int * p_ws)
{
	char  s0[10000+1];
	scanf("%s",s0);
	* p_ws=strlen(s0);
	int i;
	for(i=0;i<* p_ws;i++)
	{
	  s[i]=s0[i]-'0';
	}
	nixu(s,* p_ws);
}
#endif 

