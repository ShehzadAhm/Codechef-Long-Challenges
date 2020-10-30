/*
https://www.codechef.com/OCT20B/problems/CVDRUN
*/
#include <bits/stdc++.h>
using namespace std;
#define ff                first
#define ss                second
#define INF               1e18L+1
#define pb                push_back
#define mp                make_pair
#define all(v)            v.begin(),v.end()
#define f(i,a,b,c)        for(i = a; i < b; i += c)
#define rf(i,a,b,c)       for(i = b-1; i >= a; i -= c)
#define fo(i,n)           for(i = 0; i < n; i++)
#define rfo(i,n)          for(i = n-1; i >= 0; i--)
#define MEM(a,b)          memset(a, b, sizeof(a))
#define alldec(v)         v.begin(), v.end(), greater<int>()
#define fio               ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg1(x)           cout << #x << "=" << x << endl;
#define dbg2(x,y)         cout << #x << "=" << x << " " << #y << "=" << y << endl;
#define dbg3(x,y,z)       cout << #x << "=" << x << " " << #y << "=" << y << " " << #z << "=" << z << endl;
#define dbg4(x,y,z,w)     cout << #x << "=" << x << " " << #y << "=" << y << " " << #z << "=" << z << " " << #w << "=" << w << endl;
#define dbgarr(arr,n)     for(int i = 0; i < n; i++) {cout << "i=" << i << " arr[i]=" << arr[i] << "\n";}
#define dbgmat(a,n,m)     cout<<setwp(5*m+8)<<"MATRIX\n\n";for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<setw(10)<<a[i][j];}cout<<"\n";}
typedef long long int ll; typedef vector<int> vi; typedef vector<ll> vll;   typedef pair<int,int>	pi;  typedef pair<ll,ll>	 pll;
const  ll M =1000000007;  /* const ll M = 998244353; */     const double PI = 3.141592653589793;  vll primefactors, factors, fact;
bool isPowerTwo(ll x)     {return (x && !(x & (x - 1))); }
ll   add(ll a,ll b)       {return((a%M)+(b%M)+M)%M;} ll sub(ll a,ll b){return((a%M)-(b%M)+M)%M;}ll mul(ll a,ll b){return((a%M)*(b%M))%M;}
void getFactorial(ll n)   {fact.pb(1);for(ll i=1;i<=n;i++)fact.pb((i*1ll*fact[i-1])%M);}
bool isPrime(ll n)        {if(n<2)return false;for(ll i=2;i*i<=n;i++)if(n%i==0)return false;return true;}
ll   power(ll a, ll b)    {ll res=1;while(b){if(b&1) res=(res*a);a=(a*a);b>>=1;}return res;}
ll   powerM(ll a, ll b)   {ll res=1;while(b){if(b&1) res=(res*a)%M;a=(a*a)%M;b>>=1;}return res;}
ll   modi(ll a)           {ll m=M,s=1,p=0; while(a>1){ll q=a/m,t=m;m=a%m;a=t;t=p;p=s-q*p;s=t;}return s>=0?s:s+M;}
void getPrimeFactors(ll n){primefactors.clear();for(ll i=2;i*i<=n;i++){if(n%i==0){primefactors.pb(i);while(n%i==0)n=n/i;}}if(n!=1)primefactors.pb(n);}
ll   ncr(ll n, ll r)      {if(r==0)return 1;fact[0]=1;for(int i=1;i<=n;i++)fact[i]=fact[i-1]*i%M;return(fact[n]*modi(fact[r])%M*modi(fact[n-r])%M)%M;}
void getFactors(ll n)     {factors.clear();for(ll i=1;i*i<=n;i++){if(n%i==0){factors.pb(i);if(n/i!=i)factors.pb(n/i);}}sort(all(factors));}

//****************************************************************************************************************************************************

void solve(ll n, ll k, ll x, ll y){
  std::map<int, int> map;
  map[x] = 1;

  int i = x;
  bool flag = false;
  do{
    int next = (i + k) % n;
    map[next] = 1;
    if(map[y]){
      cout << "YES" << "\n";
      flag = true;
      break;
    }
    i = next;
  }
  while(i != x);
  if(!flag)
    cout << "NO" << "\n";
}

int main(){
  fio
  ll tc = 1;
  cin >> tc;
  while(tc--){
    ll k, x, y, n;
    cin >> n >> k >> x >> y;
    solve(n,k,x,y);
    // ll sum=0, ans=0, flg=1;
    // vll a(n);
    // fo(i,n){
    //   cin >> a[i];
    // }
  }
  return 0;
}
