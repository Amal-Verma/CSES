#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define forn(start, end, var) for(int var = start; var < end; var++)
#define forrn(start, end, var) for(int var = start - 1; var >= end; var--)
#define fora(v, var) for(const auto& var: v)

# define pii pair<int, int>
# define pll pair<ll int,ll int>
#define vi vector<int>
#define vl vector<ll int>
#define vpi vector<pii>
#define vpl vector<pll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll int>>

#define all(v) v.begin(),v.end()
#define _sort(v) sort(all(v))
#define pb push_back
#define get_bit(x,r) (x&(1<<r))
#define M 1000000007

#define pyes cout<<"YES"<<endl
#define pno cout<<"NO"<<endl

struct custom_hash {
   static uint64_t splitmix64(uint64_t x) {
      x += 0x9e3779b97f4a7c15;
      x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
      x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
      return x ^ (x >> 31);
   }
   size_t operator()(uint64_t x) const {
       static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
       return splitmix64(x + FIXED_RANDOM);
   }
};
#ifdef ONLINE_JUDGE
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
#define um gp_hash_table
#else
#define um unordered_map
#endif
template<typename Key, typename Value, typename Hash = custom_hash>
using hashmap = um<Key, Value, Hash>;

int binExp(int a, int b, int mod = M,int ans=1) {
    for (; b; b >>= 1, a = 1ll * a * a % mod)
        if (b & 1) ans = 1ll * a * ans % mod;
    return ans;
}

template<typename T>
typename std::enable_if<std::is_arithmetic<T>::value||std::is_same<T,char>::value>::type
pim(const T& in,string s=" "){cout<<in<<s;}
void pim(const string& in,string s=" "){cout<<in<<s;}
template<typename T1,typename T2>
void pim(const std::pair<T1,T2>& p,string s=" "){cout<<'(';pim(p.first,", ");pim(p.second,")");cout<<s;}
template<typename T>
typename std::enable_if<std::is_same<decltype(std::begin(std::declval<T>())),decltype(std::end(std::declval<T>()))>::value>::type
pim(const T& c,string s="\n"){cout<<'[';int n=c.size();fora(c,x){n--;pim(x,n?", ":"");}cout<<"]";cout<<s;}
template<typename F,typename... R>
void print(const F& f,const R&... r){if constexpr(sizeof...(r)>0){pim(f);print(r...);}else{pim(f," ");cout<<endl;}}

template<typename T>
auto vec(int n, T in){return vector(n, in);}
template<typename... Args>
auto vec(int n, Args... args) {return vector(n, vec(args...));}

template<typename T>
void fill(T& x){cin >> x;}
template<typename T>
void fill(vector<T>& v){forn(0, v.size(),i)fill(v[i]);}

void reverse(string& s){for(int i = 0;i < s.length()/2; i++) swap(s[i], s[s.length() - i - 1]);}

template<typename T>
pair<T,int> min(const vector<T>& v) {
    auto it = min_element(all(v));
    return {*it,it-v.begin()};
}
template<typename T>
pair<T,int> max(const vector<T>& v) {
    auto it = max_element(all(v));
    return {*it,it-v.begin()};
}

#define precision(x, p) std::cout << std::fixed << std::setprecision(p) << x << endl;

void solve(){
  int n, p;
  cin >> n >> p;
  auto pe = vec(p, 0);
  fill(pe);

  multiset<ll int> pos;
  multiset<ll int> dif;

  pos.insert(0);
  pos.insert(n);
  dif.insert(n);

  fora(pe, x){
    // print(pos, dif);
    auto it = pos.lower_bound(x);
    int g = *it;
    it--;
    int l = *it;

    pos.insert(x);

    it = dif.find(g - l);
    dif.erase(it);
    dif.insert(g - x);
    dif.insert(x - l);

    cout << *(--dif.end()) << " ";
  }
  cout << endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}