/***   Bismillahir Rahmanir Rahim   ***/

#include<bits/stdc++.h>
using namespace std;

#define     nn          '\n'
#define     ss          second
#define     ff          first
#define     sp(d, n)    fixed << setprecision(d) << n
#define     srt(v)      sort(v.begin(),v.end());
#define     rsrt(v)     sort(v.rbegin(),v.rend());
#define     rev(v)      reverse(v.begin(),v.end());
#define     mem(a, x)   memset(a, x, sizeof a)

using ll =  long long;
using ld =  long double;
using ull = unsigned long long;
const ld pi = acos(-1.0);
template <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;

int dx[]= {-1, 1, 0, 0, -1,-1, 1, 1};
int dy[]= { 0, 0,-1, 1, -1, 1,-1, 1};

const int mod = 1e9 + 7;
const int N = 1e6 + 9;
int spf[N];

int legendre(long long n, long long p) {
  int ans = 0;
  while (n) {
    ans += n / p;
    n /= p;
  }
  return ans;
}

void solution()
{
   cout << legendre(4, 3) << nn;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1, c = 1;
    //cin >> t;
    //cin.ignore();
    while(t--)
    {
        //cout << "Case " << c++ << ": ";
        solution();
    }
    return 0;
}
