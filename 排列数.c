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

*/
#if 0
#include <stdio.h>

void q_yxqpl(int *,int,int,int*,int*);
void xryw(int*,int ,int ,int );
void xzyw(int*,int ,int ,int );
void output(int*,int);

int main(void) 
{
	int k=0;
	int a[10];
	int ws=0,count=0,gs=0;
	shuru(a,&ws);
	int sz[10000];
	q_yxqpl(a,ws,k,&count,sz); 
	paixu(sz,0,count-1);
	int sz_0[1000];
	sqcfys(sz,count,sz_0,&gs);
	shuchu(sz_0,gs);
	return 0;
}

void shuru(int *a,int *p_ws)
{
  char c;
  while((c=getchar())!='\n'&&c!=EOF)
  {
    a[*p_ws]=c-'0';
 	(*p_ws)++; 
  }
}




void paixu( int*a,int beg,int end)
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
        jiaohuan(&a[i], &a[j]);  
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
     jiaohuan(&a[beg], &a[i]);  
     paixu(a,beg,i);  
     paixu(a,j,end);  
    }  
}  

void sqcfys(int *sz,int count,int *a,int *p_gs)//ɾ���ظ�Ԫ�� 
{
  int i;
  for(i=0;i<count-1;i++)
  {
    if(sz[i]==sz[i+1])
    {
	  continue;
	}
	else{a[i]=sz[i];
	++*p_gs; 
	}
  }
}

void shuchu(int *sz,int gs)
{
  int i;
  for(i=0;i<gs;i++)
  {
   printf("%04d",sz[gs]);
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

void q_yxqpl(int* a,int end,int k,int*p_count,int* sz)
{
  if(k==end)
  {
   sz[*p_count]=q_shu(a,end);
   ++*p_count;
   return;
  }
  int i;
  for(i=k;i<end;i++)
  {
   swap(a+k,a+i);
   q_qpl(a,end,k+1,p_count);
   swap(a+k,a+i);
 }
}

#endif
#if 0
#include <stdio.h>
#include <string.h>



int main(void)
{
	int n;
	scanf("%d", &n );
	char str1[10000] = "0" , str2[10000] = "1";
	output( str1 , str2 , 1 , n );
	return 0;
}

void output( char * s1 , char * s2 , int k , int n )
{
	if( n == 0 )
	{
		puts(s1);
		return ;
	}
	
	if( n == 1 )
	{
		puts(s2);
		return ;
	}
	if( k == n )
	{
		puts(s2);
		return ;
	}
	output( s2 , strcat( s1 , s2 ) , k + 1 , n );
}
#endif
/*

��������
�����κ�һ����������������2���ݴη���ʾ�����磺
����137=27+23+20
����ͬʱԼ����������������ʾ����ab �ɱ�ʾΪa��b����
�����ɴ˿�֪��137�ɱ�ʾΪ��
����2��7��+2��3��+2��0��
������һ����7= 22+2+20 ��21��2��ʾ��
����3=2+20
�����������137�ɱ�ʾΪ��
����2��2��2��+2+2��0����+2��2+2��0����+2��0��
�������磺
����1315=210 +28 +25 +2+1
��������1315���ɱ�ʾΪ��
����2��2��2+2��0����+2��+2��2��2+2��0������+2��2��2��+2��0����+2+2��0��
    2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2(0))+2+2(0)
�����ʽ
�����������һ��������N��N<=20000����ΪҪ��ֽ��������
�����ʽ
���������������һ���ַ�����Ϊ����Լ����n��0��2��ʾ���ڱ�ʾ�в����пո�
 
*/

#include <stdio.h>
void fenjie(int,int);

int main(void)
{
  int n,wx=0;
  scanf("%d",&n);
  fenjie(n,wx);
}

void fenjie(int n,int wx)
{
   if(n>0)
   {
   fenjie(n/2,wx+1);//��λ n/2
   if(n%2!=0)//��λ n%2 
   {
    if(n/2!=0) 
    {
      printf("+");
    }
    printf("2");
    if(wx==0)
    {
      printf("(0)");
    }
    if(wx>1)
    {
     printf("(");
	 fenjie(wx,0);
	 printf(")");
    }
   }
 }
}

