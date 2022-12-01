#include<iostream>

using namespace std;

const int N = 1e7+10;
const int M = 1e6+10;

int a,s[M];
int n;

bool st[N]; 
int cnt;
int prim[N];

void slove()
{
	for(int i = 2 ; i < N ; i ++)
	{
		if(!st[i]) prim[cnt++]=i;
		for(int j = 0 ; prim[j] <= N / i; j ++)
		{
			st[prim[j]*i]=true;
			if(i%prim[j]==0) break;
		}
	}
}


int main()
{
	int num=0;
	scanf("%d",&n);
	slove();
	st[0]=true;
	st[1]=true;
	st[2]=true;
	s[0]=0;
	for(int i = 1 ; i <= n ; i ++)
	{
		scanf("%d",&a);
		s[i]=s[i-1]+a;
		if(!st[s[i]]) 
		{
			st[s[i]]=true;
			num++;
		}	
	}
	cout<<num<<endl;
	
	return 0;
}

