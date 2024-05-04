#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define    bit(a)          __builtin_popcount(a)
#define    all(x)           x.begin(), x.end()
#define    minv(v)         *min_element(all(v))
#define    maxv(v)         *max_element(all(v))
#define    unq(v)           sort(all(v)),v.erase(unique(all(v)),v.end())
#define    w(x)             while(x--)
#define    rep(i,a,b)       for(i=a;i<=b;i++)
#define    ll               long long
#define    pb               push_back
#define    vii              vector<int>
#define    vll              vector<ll>
#define    vcc              vector<char>
#define    sii              set<int>
#define    sll              set<ll>
#define    scc              set<char>
#define    li               list<int>
#define    pii              pair<int,int>
#define    pll              pair<ll,ll>
#define    mii              map<int,int>
#define    mll              map<ll,ll>
#define    fill(arr,x)      memset(arr,x,sizeof(arr))
#define    gcd(a,b)         __gcd(a,b)
#define    lcm(a,b)        (a*(b/gcd(a,b)))
#define    srtc(a,b)        sort(a,a+b,greater<int>())
#define    pi               acos(-1.00)
#define file() freopen("input.txt","r",stdin);
int main(){
    fast;
    //freopen("input.txt","r",stdin);
    #ifndef ONLINE_JUDGE
    file();
    #endif
    int t;
    cin>>t;
    while(t--){
        int n,m,i,j;
        cin>>n>>m;
        int A[n],B[m];
        for(i=0;i<n;i++)
            cin>>A[i];
        for(j=0;j<m;j++)
            cin>>B[j];
        sort(B,B+m);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(A[i]<B[j])
                    break;
                while(A[i]%B[j]==0)
                {
                    A[i]/=B[j];
                }
            }
        }
        set<int>s;
        for(i=0;i<n;i++)
        {
            s.insert(A[i]);
            if(s.size()>1)
                break;
        }
        if(s.size()==1)
        {
            cout<<"YES"<<endl;
            cout<<*s.begin()<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
    /*****************  ALHAMDULILLAH  *****************/
}
