/*

��������
����һ�����������Ի���Ϊ����������ĺͣ�����n=3ʱ��
����3��1��2��1��1��1��
�����������ֻ��ַ�����
��������һ�������������ж����ֻ��ַ�����
�����ʽ
����һ��������n
�����ʽ
����һ������������ʾ���ַ�����
��������
3
�������
3
���ݹ�ģ��Լ��
����n<=100

*/


#include<stdio.h>   

void copy(int ,int l,int [][l]);
int  q_way(int,int l,int [][l]);
#define zd 100
int main(void)  
{  
int n;  
scanf("%d",&n); 
int arr[zd][zd];
copy(n,n,arr);
printf("%d\n",q_way(n,n,arr));  
}  

void copy(int n ,int l,int arry[][l])
{
int i;
for(i=0;i<=n;i++)  
{  
    arry[i][1]=1;  
    arry[0][i]=1; 
}  

} 

int q_way(int n,int l,int arr[][l])
{
int i;
for( i=1;i<=n;i++)  
{
	int j;
	for(j=1;j<=n;j++)  
    {  
       if(j<=i)
       {  
        arr[i][j]=arr[i][j-1]+arr[i-j][j];      
       }
       else
       {  
        arr[i][j]=arr[i][i]; 
       }  
    }  
}
 return arr[n][n];
}  
