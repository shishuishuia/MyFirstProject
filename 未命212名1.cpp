#include<iostream>
#include<queue>
using namespace std;

typedef pair<int,int> PII;
const int N = 1010;
int a[N][N];
int n,m;

int main()
{
	cin>>n>>m;
	for(int i = 1 ; i <= n ; i ++)
		for(int j =1 ; j <= m ; j ++)
			scanf("%d",&a[i][j]);
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		priority_queue<PII,vector<PII>,greater<PII> > q;
		q.push({10000000,1010});
		for(int i = 1 ; i<=n ; i ++)
			q.push({a[i][x],i});
			
		for(int i = 1 ; i < y ; i ++)
			q.pop();
		PII t = q.top();
		q.pop();
		PII ne = q.top();
		while(t.first==ne.first)
		{
			if(ne.second<t.second)
			{
				t=ne;
			}
			q.pop();
			ne=q.top();
		}
		
		printf("%d\n",t.second);
	}
	return 0;
}
