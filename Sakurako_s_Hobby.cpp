#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define forn for(int i = 0; i < n; i++)
#define forrn for(int i = n - 1; i >= 0; i--)
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define M 1000000007

using namespace std;

void fill(auto arr,int n){forn cin >> arr[i];}
void print(auto arr,int n){forn cout << arr[i] << ' ';cout << endl;}
void print(auto& x){cout << x << ' ';}
// void reverse(string& s){for(int i = 0;i < s.length()/2; i++) swap(s[i], s[s.length() - i - 1]);}

class answer{
  public:
  void solve(){
    int n;
    cin >> n;
    int arr[n];

    fill(arr, n);
    // cout << 'n';

    bool visited[n];

    int out[n];

    forn out[i] = 0;

    forn visited[i] = false;

    string s;
    cin >> s;


    forn{
      if (visited[i] == true) continue;
      int a = i + 1;
      int p = arr[a - 1];
      vi v = {i};
      int black = 0;
      if (s[i] == '0') black++;
      

      while(p != a){
        // cout << "while " <<  p << " " << a << " " << black << endl;
        visited[p-1] = true;
        v.push_back(p - 1);
        if (s[p - 1] == '0') black++;
        p = arr[p - 1];
      }

      for(auto x: v) out[x] = black;
    }

    print(out, n);
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  answer s;
  while(t--){
    s.solve();
  }
  return 0; 
}