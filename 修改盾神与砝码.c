/*
��������
������һ�죬���������������з�����һ����ƽ�������ƽ����֣���n����õ����룬
����û�����롣����Ϊ���ķ����˷ܲ��ѣ�������׼��ȥ��һ���Լ��Ķ�������׼������m����Ʒȥ�ơ�
������ǣ�����һ���֪����m����Ʒ�����������������뿴�������ƽ�ܲ��ܳƳ���Щ��Ʒ������
���Ƕ�����΢����1�����Ժ�;����������̫�����ˣ����ǾͶ������㡣
�����ʽ
������һ��Ϊ��������n��m��
�����ڶ���Ϊn��������ʾ��n�������������
����������Ϊm��������ʾ��m����Ʒ��������
�����ʽ
�������m�У����ڵ�i�У������i����Ʒ�ܱ��Ƴ������YES�������NO��
��������
4 2
1 2 4 8
15 16
�������
YES
NO
��������
4 1
10 7 1 19
6
�������
YES
���ݹ�ģ��Լ��
����1<=n<=24, 1<=m<=10
*/
#if 0
#include <stdio.h>
void shuru(int*,int);
void sort(int*,int ); 
void jiaohuan(int*,int*);
int q_zwt(int*a,int n);
int panduan(int *,int ,int ,int ,int);
void output( int [] , int );


int main(void) 
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n];
	shuru(a,n);
	
	int zwt=q_zwt(a,n);
	sort(a,n);
	int sz[m];
	shuru(sz,m);
	
	int i;
	for(i=0;i<m;i++)
	{
	 	printf("%s\n",panduan(a,0,n,sz[i],zwt)?"YES":"NO");
	} 
	return 0;
}

void output( int a[] , int n )
{
	while( n -- )
	{
		printf("%d ", * a ++ );
	}
	putchar('\n');
}


void shuru(int *a,int n)
{
  while(n-->0)
  {
   scanf("%d",a++);
  }
}


int q_zwt(int *a,int n)
{
 int i,he=0;
 for(i=0;i<n;i++)
 {
  he+=a[i];
 }
 return he;
}


void sort(int *a,int n )
{
int i;
for(i=1;i<n;i++ )
{
 int j;
 for(j=0;j<n-i;j++ )
 {
	if(a[j]<a[j+1] )
	{
		jiaohuan(a+j,a+j+1);
	}
 }
}
} 


void jiaohuan(int *q,int* p)
{
  int t=*q;
  *q=*p;
  *p=t;
}


int panduan(int *a,int k,int n,int dcwt,int zfmwt)
{
 if(k==n)
 {
  return dcwt==0;
 }
 if(dcwt==zfmwt)
 {
  return 1;
 }
 if(dcwt>zfmwt)
 {
  return 0;
 }
 return panduan(a,k+1,n,dcwt+a[k],zfmwt-a[k]) ||  
	    panduan(a,k+1,n,dcwt-a[k],zfmwt-a[k]) ||  
		panduan(a,k+1,n,dcwt,zfmwt-a[k]);
}

#endif
/*
��������
����Torry��Сϲ����ѧ��һ�죬��ʦ����������2��3��5��7����������������������TorryͻȻ�뵽һ�����⣬
ǰ10��100��1000��10000�����������ĳ˻��Ƕ����أ�����������������ʦ��
��ʦ�ס�ˣ�һʱ�ش𲻳���������Torry�����ڻ��̵��㣬�������ǰn�������ĳ˻���
���������ǵ���ŽӴ���̲��ã�TorryֻҪ����������ģ��50000��ֵ��
�����ʽ
����������һ��������n������n<=100000��
�����ʽ
�������һ�У���ǰn�������ĳ˻�ģ50000��ֵ��
��������

1


�������

2


*/
#if 0
#include <stdio.h>
int q_zscj(int n);
int panduan(int);

int main(void)
{
   int n;
   scanf("%d",&n);
   printf("%d\n",q_zscj(n));
   return 0;
}

int q_zscj(int n)
{
  int i,k=0,ji=1;
  for(i=2;k<n;i++)
  {
   if(panduan(i))
   {
    k++;
    ji=ji*i%50000;
   }
  }
  return ji;
}

int panduan(int n)
{
  int i;
  for(i=2;i*i<=n;i++)
  {
   if(n%i==0)
   {
    return 0;
   }
  }
  return 1;
}
#endif

/*
һ����5���������ŷֱ�ΪA��B��C��D��E�������̱���������һ����������·��

���������������˵����
   A ���Һ�E��û�з�������

����B ���������Ǳ�C��E����һ��������ֵ�

����C ���������Ǳ��Һ�D����һ��������ֵ�

����D ��B��C��û�з������̹���

����E ����û�з�������

����

������֪��������������ֻ�У�����˵�����滰��������˭���������̹��˽֣�

�������ж���𰸣���һ������������֮���ÿո������


��������
����A B C D E������Ȼ������ȷ�𰸣�?
 
*/
#if 0
#include <stdio.h>
void q_flnndr(int*,int,int);

int main(void)
{
  int a[5]={0};
  q_flnndr(a,5,0);
  return 0;
}

void q_flnndr(int*a,int n,int k)
{
  int i;
  for(i=0;i<n;i++)
  {
   a[i]=1;
   if(panduan(a,n))
   {
    printf("%c ",'A'+i);
   }
   a[i]=0;
  }
}


int panduan(int *a,int n)
{
 return (a[0]+a[4]==0)+(a[2]+a[4]==1)+(a[2]+a[3]==1)+(a[1]+a[2]==0)+(a[4]==0)==2;
}

#endif
#if 1
#include <stdio.h>
void test(int*a,int n,int k)
{
  if(k==n)
  {
   output(a,n);
   return ;
  }
  for(a[k]=0;a[k]<2;a[k]++)
  {
   test(a,n,k+1);
  }
}

output(int*a,int n)
{
  while(n-->0)
  {
   printf("%d",*a++);
  }
  putchar('\n');

}

int main(void)
{
  int a[5]={0};
  test(a,5,0);
  return 0;
} 


#endif


