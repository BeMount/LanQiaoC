/*
��������
����Tom�������ڸ��о�������һ�Ź��ڻ���Ŀγ̣���һ������������Ϊͷ�ۣ�
һ��Ⱦɫ�����г�ǧ���������ԣ����Ǵ�0��ʼ��ţ��������򣬼�ǧ���������ڡ�
��������˵���ڶ�ѧ�������1234567009��λ���ϵļ��ʱ���⿴�������Ǻ���׼ȷ��������ġ�
�������ԣ������е���Ҫһ��ϵͳ��Ȼ��������12 3456 7009ʱ���������Ӧ�����
����ʮ������ǧ�İ���ʮ������ǧ���
�����ú���ƴ����ʾΪ
����shi er yi san qian si bai wu shi liu wan qi qian ling jiu
����������ֻ��Ҫ������Ϳ����ˡ�
������������ǰ����������һ��ϵͳ������һ�����������ִ�����
�����������Ķ�д�Ĺ淶תΪ����ƴ���ִ������ڵ�����������һ���ո���񿪡�
����ע������ϸ��չ淶������˵��10010��������yi wan ling yi shi����
���ǡ�yi wan ling shi������100000��������shi wan�������ǡ�yi shi wan����
��2000��������er qian�������ǡ�liang qian����
�����ʽ
������һ�����ִ�����ֵ��С������2,000,000,000��
�����ʽ
������һ����СдӢ����ĸ�����źͿո���ɵ��ַ�������ʾ������Ӣ�Ķ�����
��������
1234567009
�������
shi er yi san qian si bai wu shi liu wan qi qian ling jiu
 
*/
#include <stdio.h>
#include <stdbool.h>

enum
{
	GW =0 ,
	SW =1 ,
	WW =4 ,
	SWW=5 ,
	YW =8 ,
	SYW=9 ,
};

void du(int);
void q_wq(int *,int *,int);
void du1wei(int,int,int *,bool);
void du_qw0(int ,bool);
void du_sz(int,int,int *,bool);
bool byd0(bool,int *);
bool byd1(bool,int);
void du_wm(int,int,int);
bool bydw(int,int,int);
bool jixudu(int,int);

int main(void)
{
	int szc;
	scanf("%d",&szc);
	du(szc);
	return 0;
}

bool jixudu(int sxs,int wx)
{
	if(sxs!=0)
	{
		return true;
	}
	if(wx!=WW&&wx!=YW&&wx!=GW)
	{
		return true;
	}
	return false;
}

bool bydw(int sz,int wx, int qw0gs)
{
	if(sz!=0)
	{
		return false;
	}
	if(wx!=WW&&wx!=YW)
	{
		return true;
	}
	if(qw0gs<4)
	{
		return false;
	}
	return true;
	
}

void du_wm(int sz,int wx, int qw0gs)
{
	if(bydw(sz,wx,qw0gs)==true)
	{
		return ;
	} 
	static char const * weidf[]={"","shi","bai","qian","wan","shi","bai","qian","yi","shi"};
    printf("%s ",weidf[wx]);
}

bool byd1(bool zgw,int wx)
{
	if(zgw==false)
	{
		return false;
	}
	if(wx==SW||wx==SWW||wx==SYW)
	{
		return true;
	}
	return false;
}

bool byd0(bool zgw,int *p_qw0gs)
{
	if(zgw==false)
	{
		++ * p_qw0gs;
		return  true;
	}
	return  false;
}

void du_sz(int sz,int wx,int *p_qw0gs,bool zgw)
{
	if(sz==0)
	{
		if(byd0(zgw,p_qw0gs)==true)
		{
			return ;
		}
	}
	*p_qw0gs=0;
	if(sz==1)
	{
		if(byd1(zgw,wx)==true )
		{
			return ;
		}
	}
	static char const * szdf[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	printf("%s ",szdf[sz]);
}

void du_qw0(int sz,bool zby0)
{
	if(sz==0)
	{
		return ;
	}
	if(zby0==false) 
	{
		return ;
	}
	printf("ling ");
}

void du1wei(int sz,int wx,int *p_qw0gs,bool zgw)
{
	du_qw0(sz,*p_qw0gs>0);
	du_sz(sz,wx,p_qw0gs,zgw);
	du_wm(sz,wx,*p_qw0gs);
}

void q_wq(int *p_wx,int *p_qn,int s)
{
	*p_wx=0;
	*p_qn=1;
	while(s>9)
	{
		++*p_wx;
		*p_qn*=10;
		s/=10;
	}
}

void du(int s)
{
	int wx;
	int quan;
	q_wq(&wx,&quan,s);
	int qw0gs=0;
	bool zgw=true;
	do
	{
		du1wei(s/quan,wx,&qw0gs,zgw);
		zgw=false;
		s%=quan;
		quan/=10;
		wx--;
	}
	while(jixudu(s,wx+1)==true);
}


