/*

��������
������ͬѧ�ǵİ����£���С���Ǳ��Խ��Խ���ˣ������˶���Ը���Լ����Զ����ˣ�ÿ��Ĺ����������ڵ���ǰ���Լ��������˻���Ǯ�Ƿ��б�ࡣ����һ��ʱ��۲���������С�������Լ��˻���Ǯ�����������������ڼ��յ�ʱ������ͭ�嶼û���������Ƶ�����Щ����Ĳ��������ˣ��ɺ޵��������⼸�컹�п��ܡ��侮��ʯ��(���۸�������˰)�������Լ��˻���Ǯ���������ˣ���С�����б�����ĸо�(̫ʹ���ˣ�)����ʱ��С������Ը���������������ٶ��ս����𣬿�ʲô�����ܹ��ս������أ�������(�ϱ���)�����У�̫Σ�գ���������û������ά����״���ܲ��ˣ�§Ǯ̫���ˣ�������ȥ��ץ���Դ�֮�������뵽���ܿ��ٷ����¸��ķ���----���Ʊ����������Ǯ�������������õĻ�������ÿ��������������ģ���ˬ�գ����������뷨����С����ʼ���������Ʊ֮�á��뷨�ǡ��õġ���̫������OR ̫���ˣ��������ַ����Լ�����ѧ����̫���Ϊ��֪�����ֶ�����Щ������У������ھ���ͬѧ��д���ݹ���򣬰�����С�����һ���������ɣ�
�����ʽ
����������6λ����������N��ע�⣺����������N�����ֿ��ظ�
�����ʽ
�������������N������λ����ȫ���У���Щ���а����������ÿ������ռһ�С�

ע�⣺��������в������ظ�������
��������
123
�������
123
132
213
231
312
321
��������
3121
�������
1123
1132
1213
1231
1312
1321
2113
2131
2311
3112
3121
3211
��������
4003
�������
0034
0043
0304
0340
0403
0430
3004
3040
3400
4003
4030
4300

0034
0043
0304
0340
0403
0430
3004
3040
3400
4003
4030
4300


*/
#if 1
#include <stdio.h>

void q_qpl(int *,int,int,int*,int*);
void shuru(int*,int*);
void shuchu(int*,int,int);
void paixu(int*,int,int);
void swap(int*,int*);
void sqcfys(int*,int,int*,int*);
int q_shu(int*,int);

int main(void) 
{
	int k=0;
	int a[10];
	int ws=0,count=0,gs=0;
	shuru(a,&ws);
	int sz[10000];
	q_qpl(a,ws,k,&count,sz); 
	paixu(sz,0,count-1);
	int sz_0[1000];
	sqcfys(sz,count,sz_0,&gs);
	shuchu(sz_0,gs,ws);
	return 0;
}

void shuru(int a[],int *p_ws)
{
  char c;
  while((c=getchar())!='\n'&&c!=EOF)
  {
    a[*p_ws]=c-'0';
 	(*p_ws)++; 
  }
}

void paixu(int*a,int beg,int end)
{  
 int i, j;  
  if(beg < end)  
    {  
     i = beg + 1;   
     j = end;     
     while(i < j)  
    {  
     if(a[i] > a[beg])    
     {  
        swap(&a[i], &a[j]);  
        j--;  
     }  
     else  
     {  
      i++;    
     }  
     }  
    if(a[i] >= a[beg])   
    {  
      i--;  
     }  
     swap(&a[beg], &a[i]);  
     paixu(a,beg,i);  
     paixu(a,j,end);  
    }  
}
  

void sqcfys(int *sz,int count,int *a,int *p_gs)//ɾ���ظ�Ԫ�� 
{
  int i;
  a[*p_gs]=sz[0];
  for(i=1;i<count;i++)
  {
    if(sz[i]!=a[*p_gs])
    {
	 ++*p_gs;
	 a[*p_gs]=sz[i];
	}
  }
  ++*p_gs;
}

void shuchu(int *sz,int n,int ws)
{
    char gs[80];
	sprintf(gs,"%%0%dd\n", ws );
	int i;
	for(i=0; i<n;i++)
	{
		printf(gs,sz[i]);
	}
}

int q_shu(int *a,int n)
{
  int i,shu=0;
  for(i=0;i<n;i++)
  {
   shu*=10;
   shu+=a[i];
  }
  return shu;
}

void swap(int*p,int*q)
{
  int t;
  t=*q;
  *q=*p;
  *p=t;
}

void q_qpl(int* a,int end,int k,int*p_count,int* sz)
{
  if(k==end)
  {
   sz[*p_count]=q_shu(a,end);
   (*p_count)++;
   return;
  }
  int i;
  for(i=k;i<end;i++)
  {
   swap(a+k,a+i);
   q_qpl(a,end,k+1,p_count,sz);
   swap(a+k,a+i);
 }
}
#endif 
