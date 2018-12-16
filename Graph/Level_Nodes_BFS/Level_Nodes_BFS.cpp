#include <bits/stdc++.h>
using namespace std;

vector<bool> s;
vector<vector<int>> g;
vector<int> l;

void bfs(int x){
    int a;
    queue<int> q;
    s[x]=true;
    l[x]=1;
    q.push(x);
    while(!q.empty()){
        a=q.front();
        q.pop();
        for(auto i:g[a]){
            if(!s[i]){
                s[i]=true;
                q.push(i);
                l[i]=l[a]+1;
            }
        }
    }
    
}


int main() {
	
	int i,x,y,m,c=0,n;
	cin>>n;
	g.assign(n+1,vector<int>());
	s.assign(n+1,false);
	l.assign(n+1,0);
	for(i=0;i<n-1;i++){
	    cin>>x>>y;
	    g[x].push_back(y);
	    g[y].push_back(x);
	}
	cin>>m;
	bfs(1);
	for(auto j:l){
	    if(j==m)c++;
	}
	cout<<c;
	return 0;
}
