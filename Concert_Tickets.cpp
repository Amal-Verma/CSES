#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define forn(start, end, var) for(int var = start; var < end; var++)
#define forrn(start, end, var) for(int var = start - 1; var >= end; var--)
#define forauto(v, var) for(const auto& var: v)
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
void printImpl(const T& in){cout << in << " ";}
template<typename T>
void printImpl(const vector<T>& v){forauto(v, x){printImpl(x);}}

template<typename... Args>
void print(Args&&... args)
{
    (printImpl(std::forward<Args>(args)), ...);
    cout << endl;
}

void fill(auto& v){forn(0, v.size(), i) cin >> v[i];}
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
  int t, p;
  cin >> t >> p;
  vi tv(t), pv(p);
  fill(tv);
  fill(pv);

  multiset<int> m;
  forauto(tv, x) m.insert(x);

  // forauto(m, x) print(x);

  forauto(pv, x){
    // print("x", x);
    auto it = m.upper_bound(x);

    if (it == m.begin()){
      print(-1);
    }
    else{
      it--;
      print(*it);
      m.erase(it);
    }
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