#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define forn(start, end, var) for(int var = start; var < end; var++)
#define forrn(start, end, var) for(int var = start - 1; var >= end; var--)
#define fora(v, var) for(const auto& var: v)
#define vi vector<int>
#define vvi vector<vector<int>>
#define all(v) v.begin(),v.end()
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
void fill(T& v){forn(0, v.size(), i) cin >> v[i];}
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
  int n, m;
  cin >> n >> m;

  vi vin(n+2);
  vector<pair<int, int>> ve(n+2);

  forn(1, n+1, i) { cin >> vin[i];}
  vin[0] = 0;
  vin[n+1] = n+1;
  
  // print(vin);
  forn(0, n+2, i){
    ve[vin[i]].first = vin[i];
    ve[vin[i]].second = i;
  }

  // sort(all(ve));

  // print(ve);

  int cnt = 1;
  int pre = ve[0].second;

  forn(1, n+1, i){
    if (pre > ve[i].second) cnt++;
    pre =  ve[i].second;
  }

  // print(cnt);

  forn(0, m, q){
    int x, y;
    cin >> x >> y;
    int a = x;
    int b = y;
    x = vin[x];
    y = vin[y];

    int d = 0;

    if ((ve[x].second < ve[x-1].second)) d--;
    if ((x+1 != y) & (ve[x+1].second < ve[x].second)) d--;
    if ((ve[y].second < ve[y-1].second)) d--;
    if ((x != y+1) & (ve[y+1].second < ve[y].second)) d--;

    // print(cnt);
    // print(x, y);
    // print(ve[x-1], ve[x], ve[x+1]);
    // print(ve[y-1], ve[y], ve[y+1]);
    // print(ve);
    swap(ve[x].second, ve[y].second);
    swap(vin[a], vin[b]);
    // print(ve);
    // print(ve[x-1], ve[x], ve[x+1]);
    // print(ve[y-1], ve[y], ve[y+1]);

    if ((ve[x].second < ve[x-1].second)) d++;
    if ((x+1 != y) & (ve[x+1].second < ve[x].second)) d++;
    if ((ve[y].second < ve[y-1].second)) d++;
    if ((x != y+1) & (ve[y+1].second < ve[y].second)) d++;

    // print(d);

    cnt += d;
    print(cnt);
  }
  
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