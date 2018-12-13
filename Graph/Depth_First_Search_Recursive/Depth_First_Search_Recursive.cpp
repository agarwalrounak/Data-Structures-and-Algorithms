#include <bits/stdc++.h>
using namespace std;

vector<int> s;
vector<vector<int>> g;

void dfs(int x){
    s[x]=true;
    cout<<x<<" ";
    for(auto i:g[x]){
        if(!s[i]){
            dfs(i);
        }
    }
}


int main() {
	
	int i,x,y,v,e;
	cin>>v>>e;
	g.assign(v,vector<int>());
	s.assign(v,false);
	for(i=0;i<e;i++){
	    cin>>x>>y;
	    g[x].push_back(y);
	}
	for(i=0;i<v;i++){
	    if(!s[i])dfs(i);
	}
	
	return 0;
}

