/*
Hey
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<pii>
#define vpll vector<pll>
#define mii map<int, int>
#define pb push_back
#define all(x) x.begin(), x.end()
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define setp(x) cout << fixed << setprecision(x)
#define countOnes(x) __builtin_popcount(x)
#define countOnesll(x) __builtin_popcountll(x)
#define clz(x) __builtin_clz(x)
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
bool odd(int n) { return n & 1 ? true : false; }
bool ispowerof2(int n) { return n & (n - 1) == 0 ? true : false; }
bool isset_bit(int n, int k) { return (n & (1 << k)) != 0; }
void toggle_bit(int &n, int k) { n ^= (1 << k); }
void set_bit(int &n, int k) { n |= (1 << k); }
void unset_bit(int &n, int k) { n &= ~(1 << k); }
const int MOD = 1e9 + 7;
template <typename T>
ostream &operator<<(ostream &os, vector<T> &v)
{
    for (auto &i : v)
        os << i << ' ';
    return os;
}
ostream &operator<<(ostream &os, const pii &p)
{
    os << p.first << ' ' << p.second;
    return os;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &v)
{
    for (auto &i : v)
        is >> i;
    return is;
}

void A7MD()
{
    int n;
    cin >> n;
    vi a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << abs(sum) << "\n";
}
int32_t main()
{
    IOS;
    int t = 1;
    // cin>>t;
    while (t--)
        A7MD();
    return 0;
}
