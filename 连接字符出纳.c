#if 0
#include <stdio.h>
void lianjie(char*,char*);

int main(void)
{
  char s[300];
  scanf("%s",s);
  char s1[180];
  scanf("%s",s1);
  lianjie(s,s1);
  puts(s);
  return 0;
}

void lianjie(char*s,char*s1)
{
 while(*s!=0)
 {
  s++;
 }
 while(*s=*s1,*s!=0)
 {
  s1++;
  s++;
 }
}
#endif
/*
"������
����������
������������С˾��
��������С˾��
������Ϊ�������æ
��������æ"
�������Ƕ��衰���ֵ�С˾��������˵���ڵ�˾�����к��Ĳ��У���Ҫ�������ܡ��� 
 �����ǳ��أ���Ҫ�����ػ����ֵ����ر����ڵ�ǰ�ͼ����������ʱ��˾����������Ϊɢ��������ס���ۡ�ɳʯ������......
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
#if0
#include <stdio.h>
typedef
struct
{
  int w;
  int v;
}zt_t;

void shuru(zt_t,int);

int main(void)
{
  int gs,zw;
  scanf("%d%d",&gs,&zw);
  zt_t zg;
  shuru(zg,gs);
  
  return 0;
}

void shuru(zt_t zg,int gs)
{
  int i;
  for(i=0;i<gs;i++) 
  {
   scanf("%d%d",&zg.w,&zg.v);
  }
}
#endif
/*
��n�����Ŷӵ�r��ˮ��ͷȥ��ˮ������װ��ˮͰ��ʱ��t1��t2������..tnΪ�����Ҹ�����ȣ�
Ӧ��ΰ������ǵĴ�ˮ˳�����ʹ�����ܹ����ѵ�ʱ�����٣�
�����ʽ
������һ��n��r (n <=500,r<=75)
�����ڶ���Ϊn���˴�ˮ���õ�ʱ��Ti (Ti<=100)��
�����ʽ
�������ٵĻ���ʱ��
��������
3 2
1 2 3
�������
7

���ݹ�ģ��Լ��
��������80%�����ݱ�֤n<=10


*/

#include<stdio.h>
void shuru(int* a,int n);
void paixu(int* a,int n);
void jiaohuan(int*,int*);
int q_he(int*,int);
int q_zxsj(int*,int,int);

int main(void)
{
 int n,m;
 scanf("%d%d",&n,&m);
 int a[n];
 shuru(a,n);
 printf("%d\n",q_zxsj(a,n,m));
 return 0;
}

void shuru(int * a,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
}

void paixu(int*a ,int n)
{
  int i;
  for(i=1;i<n;i++)
  {
   int k;
   for(k=0;k<n-i;k++)
   {
    if(a[k]>a[k+1])
    {
	 jiaohuan(a+k,a+k+1);
	}

   }
  }

}

int q_zxsj(int*a,int n,int m)
{
  if(n<=m)
  {
  return q_he(a,n);
  }
  paixu(a,n);
  int count[n];
  int i;
  for(i=0;i<m;i++)
  {
   b[i]=a[i];
  }
  int k;
  for(k=i;k<n;k++)
  {
    b[k]=a[i]+a[i-r];
  } 
  return q_he(b,n);
}

void jiaohaun(int*p_1,int*p_2)
{
  int temp;
  temp=*p_1;
  *p_1=*p_2;
  *p_2=temp;
}

int q_he(int*a,int n)
{
 int i,he=0;
 for(i=0;i<n;i++)
 {
  he+=a[i];
 }
 return he;
}

