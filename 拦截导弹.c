/*
��������
����ĳ��Ϊ�˷����й��ĵ���Ϯ������չ��һ�ֵ�������ϵͳ���������ֵ�������ϵͳ��һ��ȱ�ݣ�
��Ȼ���ĵ�һ���ڵ��ܹ���������ĸ߶ȣ�
�����Ժ�ÿһ���ڵ������ܸ���ǰһ���ĸ߶ȡ�
ĳ�죬
�״ﲶ׽���й��ĵ�����Ϯ�����ڸ�ϵͳ�������ý׶Σ�����ֻ��һ��ϵͳ������п��ܲ����������еĵ�����
���뵼�����η����ĸ߶ȣ��״�����ĸ߶������ǲ�����30000������������
��������ϵͳ��������ض��ٵ��������Ҫ�������е�������Ҫ�䱸���������ֵ�������ϵͳ��
�����ʽ
����һ�У�Ϊ�������η����ĸ߶�
�����ʽ
�������У��ֱ�����������صĵ�������Ҫ�������е�������Ҫ�䱸��ϵͳ��
��������
389 207 155 300 299 170 158 65
�������
6
2
*/
#if 1
#include <stdio.h>
void q_max(int,int*,int*);

int main(void) 
{
   int i=0;
   int max_len[10];
   int a[10];
   while(1)
   {
    scanf("%d",&a[i]);
    max_len[i]=1;
    i++;
    char ch=getchar();
    if(ch='\n')
    {
	 break;
	}
   }
   q_max(i,a,max_len);
   printf("%d\n",q_zdz(i,max_len));
   return 0;
}

void q_max(int n,int *a,int *max_len)
{
 int i;
 for(i=1;i<n;i++)
 {
 int k;
 for(k=0;k<i;k++)
 {
  if(a[i]<a[k])
  {
   max_len[i]=max(max_len[i],max_len[k]+1);
  }
 }
 }
}

int max(int a,int b)
{
 return a>b?a:b;
}

int q_zdz(int n,int *a)
{
 int i;
 int zd=a[0];
 for(i=1;i<n;i++)
 {
  printf("%d ",a[i]);
  if(zd<a[i])
  {
   zd=a[i];
  }
 }
 return zd;
}
#endif
#if 0
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
using namespace std;

const int maxn = 100;
vector<int> Bomb;
void solve();

void solve() 
{
    int ans = 0, cnt = 0, high;
    int up[maxn],         //����������� 
        down[maxn];       //��½������� 
    while (cin >> high) {
        Bomb.push_back(high);
    }
    unsigned len = Bomb.size(); 
    for (unsigned i = 0; i < len; i++) {
        down[i] = 1;
        up[i] = 1;
        for (int j = 0; j < i; j++) {
            if (Bomb[j] > Bomb[i]) {
                down[i] = max(down[i], down[j] + 1);
            }
            if (Bomb[j] < Bomb[i]) {
                up[i] = max(up[i], up[j] + 1);
            }
            ans = max(ans, down[i]);
            cnt = max(cnt, up[i]);
        }
    }
    
    printf("%d\n%d\n", ans, cnt);    
}

int main()
{
    solve();
    return 0;
#endif

