/*
��������
��������ȡ�������ؾ���ı�ȡ��������ǰ������������ȡ���Ѿ�ȡ��������ת90�ȡ�
   һ��ʼλ�ھ������Ͻǣ��������¡�
�����ʽ
���������һ��������������200��������m, n����ʾ������к��С�������m��ÿ��n����������ʾ�������
�����ʽ
�������ֻ��һ�У���mn������Ϊ����������ȡ���õ��Ľ������֮����һ���ո�ָ�����ĩ��Ҫ�ж���Ŀո�
��������
3 3
1 2 3
4 5 6
7 8 9
�������
1 4 7 8 9 6 3 2 5
��������
3 2
1 2
3 4
5 6
�������
1 3 5 6 4 2
*/
#if 0
#include <stdio.h>

void shuru(int h,int l,int a[][l]);
void shuchu(int l,int a[][l],int h);

int main(void)
{
  int h,l;
  scanf("%d%d",&h,&l);
  int a[h][l];
  shuru(h,l,a);
  shuchu(l,a,h);
  return 0;
}

void shuru(int h,int l,int a[][l])
{
  int i;
  for(i=0;i<h;i++)
  {
   int k;
   for(k=0;k<l;k++)
   {
    scanf("%d",&a[i][k]);
   }
  }
}

void shuchu(int l,int arr[][l],int h)
{
int i;
for(i = 0; i < (h+1)/2 && i < (l+1)/2; i++)
{
    int j;
	for(j = i; j < h-i; j++)
    {
	 printf("%d ",arr[j][i]);
	}
    for(j = i+1; j < l-i; j++ )
    {
	 printf("%d ",arr[h-i-1][j]);
	}
    if(l-i-1 > i)
    {
        for(j = h-i-2; j >= i; j--)
        {
		 printf("%d ",arr[j][l-i-1]);
		}
    }
    if (h-i-1 > i)
    {
        for(j = l-i-2; j > i; j--)
        {
		 printf("%d ",arr[i][j]);
		}
    }
  }
}
#endif
#if 1
#include <stdio.h>
#define maxN 101
int main(int argc, char *argv[])
{
     int row,col,i,j,k;
     int a[maxN][maxN];
     int count;
     
     scanf("%d%d",&row,&col);
     for(i=0;i<row;i++)
     {
         for(j=0;j<col;j++)
         {
             scanf("%d",&a[i][j]);
        }
    }    
    if(row==1)//ֻ��һ��
     {
         i=0;j=0; 
         for(k=1;k<=col;k++)
         { printf("%d\n",a[i][j]);j++;}
     }
     else if(col==1)//ֻ��һ��
    {
         i=0;j=0;
         for(k=1;k<=row;k++)
         { printf("%d\n",a[i][j]);i++;}
     }
     else
     {
         i=0;j=0;
         count=row*col;
         while(count>0)
         {
             for(k=1;k<col;k++)
             { count--; printf("%d\n",a[i][j]);j++;}  //���һ������������һ���� 
             
             for(k=1;k<row;k++)
             { count--; printf("%d\n",a[i][j]);i++;}  //���һ�������Ҳ���һ����
             
             for(k=1;k<col;k++)
             { count--; printf("%d\n",a[i][j]);j--;}  //���һ������������һ����
             
             for(k=1;k<row;k++)
             { count--; printf("%d\n",a[i][j]);i--;}  //���һ�����������һ����
             
             i++;
             j++;
             row-=2;
             col-=2;
             if(row==1)//ֻʣ��һ��
            {
                for(k=1;k<=col;k++)
                
			{ count--; printf("%d\n",a[i][j]);j++;}
            }
             else if(col==1)//ֻʣ��һ��
            {
                for(k=1;k<=row;k++)
                { count--; printf("%d\n",a[i][j]);i++;}
             }
        }
    }
     return 0;
 }
#endif


