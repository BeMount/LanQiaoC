/*
������n��ʮ��������������������Ƕ�Ӧ�İ˽�������
�����ʽ
��������ĵ�һ��Ϊһ��������n ��1<=n<=10����
����������n�У�ÿ��һ����0~9����д��ĸA~F��ɵ��ַ�������ʾҪת����ʮ��������������ÿ��ʮ�����������Ȳ�����100000��
�����ʽ
�������n�У�ÿ��Ϊ�����Ӧ�İ˽�����������
������ע�⡿
���������ʮ��������������ǰ��0������012A��
��������İ˽�����Ҳ������ǰ��0��
��������
2
39
123ABC
�������
����71
����4435274
��������ʾ��
�����Ƚ�ʮ��������ת����ĳ������������ĳ������ת���ɰ˽��ơ�
*/ 
#include <stdio.h>

#define ZD (100000) 
void sr_arr(int [],int *);
int q_sjz(char);
void sc_arr(int [],int);
void q_tw(int *,int *,int);
int q_zhi(int [],int);
void sc_wei(int [],int);

int main(void)
{
	int n;
	scanf("%d\n", &n );
	while( n -- > 0 )
	{
		int arr[ZD] , wei = 0 ;
		sr_arr(arr,&wei);
		sc_arr(arr,wei);
	}
	return 0;
}

void sc_wei(int a[],int n)
{
	int i;
	for( i = 0 ; i < n / 3 ; i ++ , a += 3 )
	{
		printf("%04o", q_zhi(a,3) );
	}
}


int q_zhi(int a[],int n)
{
	int shu = 0;
	while( n -- > 0 )
	{
		shu *= 16;
		shu += * a ++;
	}
	return shu ;
}

void q_tw(int * p_t,int * p_w,int ws)
{
	* p_t = ws % 3 == 0 ? 3 : ws % 3 ;
	* p_w = ws - * p_t;
}

void sc_arr(int a[],int ws)
{
	int tou , wei ;
	q_tw(&tou,&wei,ws);
	printf("%o", q_zhi(a,tou)) ;
	sc_wei(a + tou,wei);
	putchar('\n');
}

int q_sjz(char c)
{
	if( 'A' <= c && c <= 'F')
	{
		return c - 'A' + 10 ;
	}
	return c - '0';
}

void sr_arr(int a[],int * p_w)
{
	char c;
	while( ( c = getchar() ) != '\n')
	{
		a[* p_w] = q_sjz(c);
		++ * p_w;
	}
}

