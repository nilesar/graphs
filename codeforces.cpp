/**
 *    theme : A Song of Ice and Fire
 *    motto : A dragon burns, ice cools — together, devastating.
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using os = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using oms = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;
#define int long long
#define pb push_back
#define all(x) (x).begin(),(x).end()
const int MOD=998244353;
const int LOG=20;
const int N=2e5+5;
struct Edge{
  int u,v,w,id;
};
struct DSU{
  vector<int>parent,sz;
  DSU(int n){
    parent.resize(n+1);
    sz.assign(n+1,1);
    iota(begin(parent),end(parent),0);
  }
  int find(int x){
    return (parent[x]==x)?parent[x]:(parent[x]=find(parent[x]));
  }
  bool unite(int u,int v){
    u=find(u);
    v=find(v);
    if(u==v)return false;
    if(sz[u]<sz[v])swap(u,v);
    parent[v]=u;
    sz[u]+=sz[v];
    return true;
  }
};
int n,m;
vector<pair<int,int>>adj[N];
int up[N][LOG];
int depth[N];
int mx[N][LOG];
void dfs(int u,int p,int w){
  up[u][0]=p;
  mx[u][0]=w;
  for(auto it:adj[u]){
    if(it.first==p)continue;
    depth[it.first]=depth[u]+1;
    dfs(it.first,u,it.second);
  }
}
void build(){
  for(int j=1;j<LOG;j++){
    for(int i=1;i<=n;i++){
      up[i][j]=up[up[i][j-1]][j-1];
      mx[i][j] = max(mx[i][j - 1],mx[up[i][j-1]][j - 1]);
    }
  }
}
int query(int u,int v){
  int ans=0;
  if(depth[u]<depth[v])swap(u,v);
  int diff=depth[u]-depth[v];
  for(int j=LOG-1;j>=0;j--){
    if(diff&(1<<j)){
      ans=max(ans,mx[u][j]);
      u=up[u][j];
    }
  }
  if(u==v)return ans;
  for(int j=LOG-1;j>=0;j--){
    if(up[u][j]!=up[v][j]){
      ans=max(ans,mx[u][j]);
      ans=max(ans,mx[v][j]);
      u=up[u][j];
      v=up[v][j];
    }
  }
  ans=max(ans,mx[u][0]);
  ans=max(ans,mx[v][0]);
  return ans;
}
void solve(){
    cin>>n>>m;
    vector<Edge>edges(m);
    for (int i = 0; i < m; i++) {
        cin >>edges[i].u>>edges[i].v>>edges[i].w;
        edges[i].id = i;
    }
    sort(edges.begin(), edges.end(),[](const Edge &a, const Edge &b) {return a.w < b.w;});
    DSU dsu(n);
    ll mstwei = 0;
    vector<bool> inmst(m, false);
    for (auto &e : edges) {
        if (dsu.unite(e.u, e.v)) {
            mstwei += e.w;
            inmst[e.id] = true;
            adj[e.u].push_back({e.v, e.w});
            adj[e.v].push_back({e.u, e.w});
        }
    }
    dfs(1, 0, 0);
    build();
    vector<ll> ans(m);
    for (auto &e : edges) {

        if (inmst[e.id])
        {

            ans[e.id] = mstwei;

        }
        else{
            int maxEdge = query(e.u, e.v);
            ans[e.id] = mstwei + e.w - maxEdge;
        }
    }
    for (int i = 0; i < m; i++) {
        cout << ans[i] << '\n';
    }
}
int32_t main() 
{ 
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
t=1;
// cin>>t;
for(int test=1;test<=t;test++){
    solve();
}
return 0;
}
