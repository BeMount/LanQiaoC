/*
��������
�����������������ʹ�õ�һ������ʽ�����ڸ�����n������ɵ�һ�����飬��ʹ�ÿ�����������������
�����ָ���һ���У����ÿ��������䰴�������������
�����ʽ
������һ��һ����N��
������2~N+1��ÿ��һ��������ʾ�������С�
�����ʽ
������N�У�ÿ��һ��������ʾ�������С�
��������
5
1
4
2
3
4
�������
1
2
3
4
4
���ݹ�ģ��Լ��
������10�����ݡ�
������100%�����ݣ�N<=10^5����������Ϊ�Ǹ�������int��Χ�ڡ�
 
*/
#if 0
#include <stdio.h>

void jiaohuan(int*,int*);
int q_zd(int*,int,int);
void selcect(int*,int);
void shuru(int*,int);
void shuchu(int*,int);
 
int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[n];
	shuru(a,n);
	selcect(a,n);
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

void selcect(int * a,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
   int xb=q_zd(a,i,n);
   if(xb!=i)
   {
    jiaohuan(a+xb,a+i);
   }
   printf("swap(a[%d], a[%d]):",i,xb);
   shuchu(a,n);
  }
}

void jiaohuan(int* a,int* b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp ;
}

int q_zd(int *a ,int i,int n)
{
  int k,xb;
  int zx=a[i];
  xb=i;
  for(k=i+1;k<n;k++)
  {
   if(zx>a[k])
   {
	zx=a[k];
	xb=k;
   }
  }
  return xb;
}


void shuchu(int * a,int n)
{ 
  int i;
  for(i=0;i<n;i++)
  {
   printf("%d ",a[i]);
  }
  putchar('\n');
}
#endif

/*
��������
������x(i), y(i), z(i)��ʾ�����ַ�����X={x(1)x(2)����x(m)}��Y={y(1)y(2)����y(n)}��Z={z(1)z(2)����z(k)},���ǳ���Ϊ�ַ����У���
    ��m,n��k�ֱ����ַ�����X��Y��Z�ĳ��ȣ�����()�е����ֱ������ַ����е��±ꡣ
�����������һ���ϸ�������ҳ��ȴ���0���±�����{i1,i2����ik}��ʹ�ö����е�j=1,2,����k��
    ��x(ij)=z(j)����ô���ǳ�Z��X���ַ������С����ң����Z����X���ַ�����������Y���ַ������У�
	��ô���ǳ�ZΪX��Y�Ĺ����ַ����С�
���������ǽ���������У�����ϣ���������������ַ�����X��Y����󳤶ȵĹ����ַ����У�
   ��������ֻҪ����������󳤶ȹ��������ж�Ӧ�ĳ���ֵ��
����������˵���ַ�����X=abcd��Y=acde����ô���ǵ���󳤶�Ϊ3��
   ��Ӧ�Ĺ����ַ�����Ϊacd��
�����ʽ
��������һ�У��ÿո�����������ַ���
�����ʽ
��������������ַ����ж�Ӧ����󳤶ȹ����ַ����еĳ���ֵ
��������
aAbB aabb
�������
2
���ݹ�ģ��Լ��
���������ַ��������Ϊ100�����ִ�Сд��
*/

#include<stdio.h>
#include<string.h>

int q_xt(char*,char*);

int main(void)
{
 char s[180];
 char str[180];
 gets(s);
 gets(str);
 printf("%d\n",q_xt(s,str));
 return 0;
}

int q_xt(char*s,char*str)
{
 if(*s==0)
 {
 return 0;
 }
 if(*s==*str)
 {
  return 1;
 }
 return q_xt(s+1,str)+q_xt(s,str+1); 
}

//int count=0;
// int len=strlen(s);
// int len1=strlen(str);
// int i;
// for(i=0;i<len;i++)
// {
//  int k;
//  for(k=0;k<len1;k++)
// {
//   if(s[i]==str[k])
//   {
//    count++;
//    break;
//   }
// }
// }



