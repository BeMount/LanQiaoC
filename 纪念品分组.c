/*
��������
����Ԫ���쵽�ˣ�Уѧ���������ָ����������ļ���Ʒ���Ź�����Ϊʹ�òμ�����ͬѧ����õļ���Ʒ��ֵ ��
�Ծ��⣬��Ҫ�ѹ����ļ���Ʒ���ݼ۸���з��飬��ÿ�����ֻ�ܰ�����������Ʒ��
����ÿ�����Ʒ�ļ۸�֮�Ͳ��ܳ���һ��������������Ϊ�˱�֤�ھ����̵�ʱ ���ڷ������м���Ʒ��
����ϣ���������Ŀ���١�
�������������дһ�������ҳ����з��鷽���з��������ٵ�һ�֣�������ٵķ�����Ŀ��
�����ʽ
�����������n+2�У�
������1�а���һ������w��Ϊÿ�����Ʒ�۸�֮�͵����ޡ�
������2��Ϊһ������n����ʾ�����ļ���Ʒ���ܼ�����
������3~n+2��ÿ�а���һ��������pi (5 <= pi <= w)����ʾ����Ӧ����Ʒ�ļ۸�
�����ʽ
���������һ�У�����һ�������������ٵķ�����Ŀ��
��������
100
9
90
20
20
30
50
60
70
80
90
�������
6
���ݹ�ģ��Լ��
����50%���������㣺1 <= n <= 15
����100%���������㣺1 <= n <= 30000, 80 <= w <= 200

 
*/

#include<stdio.h>

void paixu(int *,int,int);
void jiaohuan(int*,int*);
void shuru(int*,int);
int q_zs(int*,int,int);

int main(void)
{
  int sx,num;
  scanf("%d%d",&sx,&num);
  int a[num];
  shuru(a,num);
  paixu(a,0,num-1);
  printf("%d\n",q_zs(a,num,sx));
  return 0;
}

void shuru(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
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


void jiaohuan(int *p_1,int *p_2)
{
  int temp;
  temp=*p_1;
  *p_1=*p_2;
  *p_2=temp;
}

int q_zs(int *a,int n,int sx)
{
  int i,k,count=0;
  for(i=n-1,k=0;k<=i;i--,k++)
  {
    if(a[i]+a[k]>sx)
    {
      k--;;
      count++;
	}else{count++;
	}
  }
  return count;
}


