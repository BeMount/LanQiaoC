/*

��������
������ȫ����������һ��(n��)���֤���룬ϣ�����������ڶ����ǽ��дӴ�С����
�������ͬ���ڣ������֤�����С�����������֤����Ϊ18λ��������ɣ���������Ϊ��7����14λ
�����ʽ
������һ��һ������n����ʾ��n�����֤����
�������µ�n�У�ÿ��һ�����֤���롣
�����ʽ
�������������ڴӴ�С���������֤�ţ�ÿ��һ��
��������
5
466272307503271156
215856472207097978
234804580401078365
404475727700034980
710351408803093165
�������
404475727700034980
234804580401078365
215856472207097978
710351408803093165
466272307503271156
���ݹ�ģ��Լ��
����n<=100000

*/
#if 0
#include <stdio.h>
#include <string.h>

#define zd 20

typedef
struct 
{char s[zd];
 int  shu;
}jgt;

void input(int,jgt*);
void paixu(jgt*,int);
void output(jgt*,int);
void s_to_z(jgt*);
void swap(jgt*,jgt*);

int main(void) 
{
	int n;
	scanf("%d",&n);
	jgt sz[100000];
	int xb=0;
	input(n,sz);
	paixu(sz,n);
	output(sz,n);
	return 0;
}

void input(int n,jgt*sz)
{
  int i;
  for(i=0;i<n;i++)
  {
   scanf("%s",sz[i].s);
   sz[i].shu=0;
   s_to_z(&sz[i]);
  }
}

void s_to_z(jgt*sz)
{
  int i,k;
  for(k=6;k<=13;k++)
  {
    sz->shu*=10;
    sz->shu+=(sz->s[k]-'0'); 
  }
}

//void paixu( int*a,int beg,int end)
//{  
// int i, j;  
//  if(beg < end)  
//    {  
//     i = beg + 1;   
//     j = end;     
//     while(i < j)  
//    {  
//     if(a[i] > a[beg])    
//     {  
//        jiaohuan(&a[i], &a[j]);  
//        j--;  
//     }  
//     else  
//     {  
//      i++;    
//     }  
//     }  
//    if(a[i] >= a[beg])   
//     {  
//      i--;  
//     }  
//     jiaohuan(&a[beg], &a[i]);  
//     paixu(a,beg,i);  
//     paixu(a,j,end);  
//    }  
//}  


void paixu(jgt *sz,int n)
{
 int i;
 for(i=1;i<n;i++)
 {
  int k;
  for(k=0;k<n-i;k++)
  {
   if(sz[k].shu<sz[k+1].shu)
   {
    swap(sz+k,sz+k+1);
   }else{
    if(sz[k].shu==sz[k+1].shu)
    {
     if(strcmp(sz[k+1].s,sz[k].s)==1)
      {
      swap(sz+k,sz+k+1);
      }
    }
   }
   }
  }
}



void swap(jgt*p,jgt*q)
{
 jgt t;
 t=*p;
 *p=*q;
 *q=t;
}

void output(jgt*a,int n)
{ 
 int i=0;
 while(n--)
 {
  printf("%s\n",a[i++].s);
 }
}
#endif

/*

��������
��������һ��������k(3��k��15),������k�ķ��ݼ��������޸�������ȵ�k�ķ���֮�͹���һ�����������У�
���磬��k=3ʱ����������ǣ�
����1��3��4��9��10��12��13����
������������ʵ���Ͼ��ǣ�30��31��30+31��32��30+32��31+32��30+31+32������
�����������������еĵ�N���ֵ����10��������ʾ����
�������磬����k=3��N=100����ȷ��Ӧ����981��
�����ʽ
����ֻ��1�У�Ϊ2������������һ���ո������
����k N
������k��N�ĺ�������������������һ�£���3��k��15��10��N��1000����
�����ʽ
��������������һ���������������еĲ��������У������������2.1*109����������ǰ��Ҫ�пո���������ţ���
��������
3 100
�������
981
3^0                                  2^0                                  
3^1 3^1+3^0                          2^1
3^2 3^2+3^0 3^2+3^1 3^2+3^0+3^1;     2^2
3^3                                  2^3
*/
#if 0
#include <stdio.h>
int q_cf(int,int);
int q_zhi(int*,int,int,int);
void q_ws(int,int*,int*a);

int main(void)
{
  int n,k,ws=0;
  scanf("%d%d",&k,&n);
  int a[12];
  q_ws(n,&ws,a);
  printf("%d",q_zhi(a,n,k,ws));
  return 0;
}

int q_zhi(int *a,int n,int k,int ws)
{
 int i,he=0;
 for(i=0;i<ws;i++)
 {
  if(a[i]!=0)
  {
   he+=q_cf(k,i);
  }
 }
 return he;
}

void q_ws(int n,int*p_ws,int *a)
{
 while(n!=0)
 {
   a[(*p_ws)++]=n%2;
   n/=2;
 }
}

int q_cf(int a,int n)
{
 int ji=1;
 while(n--)
 {
  ji*=a;
 }
 return ji;
}
#endif

#if 0
  /* 
    ����:   
    3^0                                 
    3^1 3^0+3^1                        
    3^2 3^0+3^2 3^1+3^2  3^0+3^1+3^2    
    ���ɵ�ǰn�ӽ�ȥһ����Ȼ��Ҫ�ټ���ǰ�����еĸ���  
    �������ĳ��n,��ǰ�����еĴ���N��,��ɨ��ʣ�µĵڼ�������  
    ʱ�临�Ӷ�O(n)  
    f(n)=1+2*f(n-1)   fn��ʾ�м�����Ŀǰ 
    f(0)=1; 
    f(1)=3; 
    f(2)=7;  
    ��ô��ڵ���Nʱ��n��Ȼ��N-f(n-1)ʣ�µĴ���߿�ʼ��  
    */  
    #include <iostream>  
    #include <cstdio>  
    using namespace std;  
    const int N=1000+5;  
    int a[N];   //����ָ�longlong���һ���������ݻ����ȥ   
    int main()  
    {  
        int n,i,len;   
        int now,k;   //k^i  
        while(cin>>k>>n){  
            len=0;  
            now=1;  
            while(len<n){  
                int tmp=len;  
                a[len++]=now;  
                for(i=0;i<tmp&&len<n;i++)  
                    a[len++]=now+a[i];          
                now*=k;  
            }  
            cout<<a[n-1]<<endl;  
        }  
        return 0;  
    } 
	
#endif 
#if 0
#include <stdio.h>

void zh (int [],int ,int *);
int q_shulie (int [],int ,int ,int );
int q_mi (int ,int );

int main(void) 
{
	int n,k;
	scanf ("%d%d",&k,&n);
	int a[1000];
	int ws = 1;
	zh (a,n,&ws);
	int sum = q_shulie (a,n,k,ws);
	printf ("%d\n",sum);
	return 0;
}

int q_mi (int k,int n)
{
	int sum = 1;
	int i;
	for (i = 1;i <= n;i ++)
	{
		sum *= k;
	}
	return sum;
}

int q_shulie (int a[],int n,int k,int ws)
{
	int sum = 0;
	int i;
	for (i = 1;i <= ws;i ++)
	{
		if (a[i] != 0)
		{
			sum += q_mi (k,i-1);
		}
	}
	return sum;
}

void zh (int a[],int n,int * p_ws)
{
	while (n != 0)
	{
		a[(* p_ws) ++] = n % 2;
		n /= 2;
	}
	(* p_ws) --;
}
#endif

#if 0
#include <stdio.h>
int main(void)
{

 return 0;
}
#endif

/*

��������
��������N����Ʒ,ÿ����Ʒ��һ������W��һ����ֵV.����һ����װM�����ı���.
����ôװʹ����װ��ֵ���.ÿ����Ʒֻ��һ��.
�����ʽ
��������ĵ�һ�а�����������n, m���ֱ��ʾ��Ʒ�ĸ����ͱ�����װ������
�����Ժ�N��ÿ��������Wi��Vi,��ʾ��Ʒ�������ͼ�ֵ
�����ʽ
�������1�У�����һ����������ʾ����ֵ��
��������
3 5
2 3
3 5
4 7
�������
8
���ݹ�ģ��Լ��
����1<=N<=200,M<=5000.
 
*/
#include<stdio.h>
int panduan_max(int,int);
void shuru(int*dv,int*jz,int n);
void q_zdjz(int*,int*,int,int*,int);
void chush(int*b,int n);

int main(void)
{
    int n,zcwt,dcwt[1000],jz[1000];
    scanf("%d%d", &n, &zcwt);
    int b[5000]={0};
    
    shuru(dcwt,jz,n);
    q_zdjz(dcwt,jz,n,b,zcwt);
    printf("%d\n", b[zcwt]);
    return 0; 
}

int panduan_max(int p,int q)
{
 return p>q?p:q;
}


void shuru(int*dcwt,int*jz,int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  scanf("%d%d",&dcwt[i],&jz[i]);
 }
}

void q_zdjz(int*dcwt,int*jz,int n,int *b,int zcwt)
{
  int i;
  for(i=0;i<n;i++)
    {
	int j;
    for(j=zcwt;j>=dcwt[i];j--)//�������һᱻ���󸲸� 
    {
        b[j]=panduan_max(b[j],b[j-dcwt[i]]+jz[i]);
    }
    }

}



