/*

��������
����"������
����������
������������С˾��
��������С˾��
������Ϊ�������æ
��������æ"
�������Ƕ��衰���ֵ�С˾��������˵���ڵ�˾�����к��Ĳ��У���Ҫ�������ܡ�
  �������ǳ��أ���Ҫ�����ػ����ֵ����ر����ڵ�ǰ�ͼ����������ʱ��
   ˾����������Ϊɢ��������ס���ۡ�ɳʯ������......
��������֪����������������Ϊw���ɹ�ѡ�����Ʒ������n��
  ÿ����Ʒ������Ϊgi,��ֵΪpi����������װ�ص�����ֵ����n<10000,w<10000,0<gi<=100,0<=pi<=100)
�����ʽ
���������һ��Ϊ�ɿո�ֿ�����������n w
�����ڶ��е���n+1�У�ÿ���������������ɿո�ֿ����ֱ��ʾgi��pi
�����ʽ
��������ֵ������һλС����
��������
5 36
99 87
68 36
79 43
75 94
7 35
�������
71.3
���ͣ�
��װ��5����Ʒ���ü�ֵ35��ռ������7
��װ��4����Ʒ���ü�ֵ36.346,ռ������29
�����һλС������71.3
 

*/
#if 0
#include <stdio.h>

typedef
struct {int wt;
int jz;
double dwjz;
}wp_t;

void  shuru(wp_t *,int ); 
double q_zdjz(wp_t*,int,int);
void paixu(wp_t*, int);
void swap(wp_t*,wp_t*);
 
int main(void) 
{
	int xz,zl;
	scanf("%d%d",&xz,&zl);
	wp_t a[xz];
	shuru(a,xz);

	paixu(a,xz);

    printf("%.1lf",q_zdjz(a,xz,zl));
	return 0;
}

void shuru(wp_t*a,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
   scanf("%d%d",&a[i].wt,&a[i].jz);
   a[i].dwjz=(double)a[i].jz/(double)a[i].wt;
  }
}

void paixu(wp_t*b, int n) 
{
  int i;
  for(i=1;i<n;i++)
  {
   int k;
   for(k=0;k<n-i;k++)
   {
    if(b[k].dwjz<b[k+1].dwjz)
    {
	 swap(b+k,b+k+1);
	}
   }
  }
}

void swap(wp_t*p,wp_t*q)
{
  wp_t t=*p;
  *p=*q;
  *q=t;
}

double q_zdjz(wp_t*a,int n,int zzl)
{
  int i;double ly=0.;
  for(i=0;i<n;i++)
  {
   if(zzl-a[i].wt>0&&zzl>0.)
   {
    ly+=a[i].jz;
    zzl-=a[i].wt;
   }else{ly+=a[i].dwjz*zzl;
   break;
   }
  }
  return ly;
}
#endif
/*
/*
��������
����������0��ʾ�ֵ���1��ʾ����ΰ��
��������������ÿ�л����һ��0����1����ʾ��Ӧѡ�ֵ�1�֡�
������һ���÷ִﵽ21��ʱ��ֻҪ�÷���Է��ֲ��1�֣��÷���ʤ����
��������Ҫ�������ʤѡ�ֵĴ��š�
�����ʽ
����������ÿ��һ��0����1��
�����ʽ
����һ��һ��0����1��ʾʤ�ߡ�
��������
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
�������
1
���ݹ�ģ��Լ��
�����������ݿ��ܴ��ڶ�����Ϣ��ѡ����Ҫ�ڵ�һ�γ���ʤ��ʱ���������
�����������ʹ��while (cin >> x){}���ô������ڶ����������ݺ�ִ����ϡ�
*/
#if 1
#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
  int ld=0,lzw=0,fs;
  while(scanf("%d",&fs))
  {
   if(fs==1)
   {
    lzw++;
   }else{ld++;
   }
   if((ld>=21||lzw>=21)&&abs(lzw-ld)>1)
   {
    printf("%d\n",ld>lzw?0:1);
    break;
   }
  }
  return 0;
}
#endif
#if 0 
#include <stdio.h>

int main(void)
{
  int n;
  while(scanf("%d",&n))
  {
   if(n!=1)
   {
    return 0;
   }
  }
  return 0;
}
#endif
