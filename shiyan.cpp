#include<iostream>
#include <fstream>
using namespace std;

const int N = 1e7+10;
const int M = 1e6+10;

bool st[N];
int a[M],s[M];
int n;
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
	slove();
	st[0]=true;
	st[1]=true;
	st[2]=true;
	s[0]=0;
	
	ifstream infile("10.in");
	ofstream dataFile;
    dataFile.open("10.out", ofstream::app);
    
	infile >> n;
	
	for(int i = 1 ; i <= n ; i ++)
		infile >> a[i];
	for(int i = 1 ; i <= n ; i ++)
	{
		s[i]=s[i-1]+a[i];
		if(!st[s[i]]) 
		{
			st[s[i]]=true;
			num++;
		}	
	}
	
	dataFile<<num<<endl;
	
	dataFile.close();
	return 0;
}
