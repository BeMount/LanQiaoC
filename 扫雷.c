/*

��������
����ɨ����Ϸ��һ������ɣ����ڸ������ɸ�n��m�ĵ�������������ÿ��������ÿ����Ԫ�����ڵ�Ԫ��
�ڵ��׵ĸ�����ÿ����Ԫ�������8�����ڵĵ�Ԫ�� 0<n,m<=100
�����ʽ
��������������ɸ����󣬶���ÿ�����󣬵�һ�а�����������n��m���ֱ��ʾ��������������������
������n��ÿ�а���m���ַ�����ȫ�����á�.����ʾ���е���������'*'��ʾ����n=m=0ʱ���������
�����ʽ
�������ڵ�i�����������ڵ�����һ�����ӡ��ţ���Field #i:��,��������n���У������'.'
Ӧ����λ����Χ�ĵ����������档�����ÿ�������������һ�����и�����
��������
4 4
*...
....
.*..
....
3 5
**...
.....
.*...
0 0
�������
Field #1:
*100
2210
1*10
1110

Field #2:
**100
33200
1*100
��ע����������֮��Ӧ����һ�����У�����oj�ĸ�ʽ�����ﲻ����ʾ������
���ݹ�ģ��Լ��
����0<n,m<=100

*/
#if 0
#include <stdio.h>
void input(int,int l,char [][l]);
void output(int,int l,char [][l]);
int q_gs(int,int,int,int l,char [][l]);

int main(void) 
{
	int n,m,gs=0;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
	 char a[n][m];
	 if(n==0&&m==0)
	 {
	  return 0;
	 }
	 printf("Field #%d:\n",++gs);
	 input(n,m,a);
	 output(n,m,a);
	 putchar('\n');
	}
	return 0;
}

void input(int h,int l,char a[][l])
{
 int i;
 for(i=0;i<h;i++)
 {
  int k;
  for(k=0;k<l;k++)
  {
   scanf(" %c",&a[i][k]);
  }
 }
}

void output(int h,int l,char a[][l])
{
  int i;
  for(i=0;i<h;i++)
  {
  int k;
  for(k=0;k<l;k++)
  {
   if(a[i][k]=='*')
   {
    printf("%c",'*');
   }else{printf("%d",q_gs(i,k,h,l,a));
   }
  }
  putchar('\n');
  }
}


int q_gs(int n,int m,int h,int l,char a[][l])
{
	int i,j,gs=0;
	for(i=n-1;i<=n+1;i++)
	{
	for(j=m-1;j<=m+1;j++)
	{
	 if(a[i][j]=='*'&&i>=0&&j>=0&&i<h&&j<l)
	 {
	  gs++;
	 }
	}
	}
   return gs;
}
#endif
/*
�������ϣ�����1986�꣬�ɿ���˹������������ģ�����ϸ���Զ�����һ�֡�

����ƽ���ϵ������θ��ӱ����Ϻ�ɫ���ɫ��������һ������������һֻ�����ϡ���
�������ϵ�ͷ������Ϊ��������������һ����

�������ϵ��ƶ�����ʮ�ּ򵥣�
�����������ںڸ���ת90�ȣ����ø��Ϊ�׸񣬲���ǰ��һ��
�����������ڰ׸���ת90�ȣ����ø��Ϊ�ڸ񣬲���ǰ��һ��

����������Ȼ�򵥣����ϵ���Ϊȴʮ�ָ��ӡ��ոտ�ʼʱ���µ�·�߶����нӽ��Գƣ�
���ǻ��ظ�����������ʼ״̬��Σ����Ͼ��������Ļ��һ�󣬻Ὺ�ٳ�һ������ġ����ٹ�·����

�������ϵ�·���Ǻ�������Ԥ��ġ�

������������Ǹ��ݳ�ʼ״̬���ü����ģ�����������ڵ�n�����ߺ�������λ�á�
�����ʽ
�����������ݵĵ�һ���� m n ����������3 < m, n < 100������ʾ�����θ��ӵ�������������
������������ m �����ݡ�
����ÿ������Ϊ n �����ո�ֿ������֡�0 ��ʾ�׸�1 ��ʾ�ڸ�

������������һ�����ݣ�x y s k, ����x yΪ��������ʾ���������кź��кţ��кŴ��ϵ�����������
�Ŵ��������������Ǵ�0��ʼ��ţ���s ��һ����д��ĸ����ʾ����ͷ�ĳ�������Լ�����������ҷֱ��ã�
UDLR��ʾ��k ��ʾ�����ߵĲ�����
�����ʽ
�����������Ϊ�����ո�ֿ������� p q, �ֱ��ʾ������k�����������ӵ��кź��кš�
��������
5 6
0 0 0 0 0 0
0 0 0 0 0 0
0 0 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
2 3 L 5
�������
1 3
��������
3 3
0 0 0
1 1 1
1 1 1
1 1 U 6
�������
0 0
*/
#include <stdio.h>
void q_fx(int x,int y,char *p_s,int step,int h,int l,int a[][l],int k);
void select_fx0(int x,int y,char *p_s,int step,int h,int l,int a[][l],int k);
void select_fx1(int x,int y,char *p_s,int step,int h,int l,int a[][l],int k);


int main(void)
{
  int n,m;
  scanf("%d%d",&n,&m);
  int a[n][m];
  input(n,m,a);
  int x,y,k;
  char s;
  scanf("%d%d %c%d",&x,&y,&s,&k);
  q_fx(x,y,&s,k,n,m,a,0);
  return 0;
}

void input(int h,int l,int a[][l])
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
//�������ںڸ���ת90�ȣ����ø��Ϊ�׸񣬲���ǰ��һ��
//�������ڰ׸���ת90�ȣ����ø��Ϊ�ڸ񣬲���ǰ��һ��
//0 ��ʾ�׸�1 ��ʾ�ڸ�

void q_fx(int x,int y,char *p_s,int step,int h,int l,int a[][l],int k)
{
   if(k==step)
   {
   	printf("%d %d",x,y);
    return ;
   }
   if(a[x][y]==1)
   {
    a[x][y]=0;
    select_fx0(x,y,p_s,step,h,l,a,k);
   }else{
    a[x][y]=1;
    select_fx1(x,y,p_s,step,h,l,a,k);
   }
}
//�������ںڸ���ת90�ȣ����ø��Ϊ�׸񣬲���ǰ��һ��

void select_fx0(int x,int y,char *p_s,int step,int h,int l,int a[][l],int k)
{
  switch(*p_s)
  {
   case 'U': *p_s='R';
   q_fx(x,y+1,p_s,step,h,l,a,k+1);
   break;
   case 'R':*p_s='D';
   q_fx(x+1,y,p_s,step,h,l,a,k+1);
   break;
   case 'D':*p_s='L';
   q_fx(x,y-1,p_s,step,h,l,a,k+1);
   break;
   case 'L':*p_s='U';
   q_fx(x-1,y,p_s,step,h,l,a,k+1);
   break;
  }
}
//�������ڰ׸���ת90�ȣ����ø��Ϊ�ڸ񣬲���ǰ��һ��
void select_fx1(int x,int y,char*p_s,int step,int h,int l,int a[][l],int k)
{
  switch(*p_s)
  {
   case 'U': *p_s='L';
   q_fx(x,y-1,p_s,step,h,l,a,k+1);
   break;
   case 'R':*p_s='U';
   q_fx(x-1,y,p_s,step,h,l,a,k+1);
   break;
   case 'D':*p_s='R';
   q_fx(x,y+1,p_s,step,h,l,a,k+1);
   break;
   case 'L':*p_s='D';
   q_fx(x+1,y,p_s,step,h,l,a,k+1);
   break;
  }
}






