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
int gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(ll a, ll b) { return a / gcd(a, b) * b; }
vll divisors(ll n)
{
    vll ret;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ret.pb(i);
            if (i * i != n)
                ret.pb(n / i);
        }
    }

    return ret;
}
bool is_prime(ll n)
{
    if (n == 1 || n == 0)
        return 0;
    else if (n == 2)
        return 1;
    else if (n % 2 == 0)
        return 0;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
vpll primeFactors(ll n)
{
    vpll ret;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                n /= i;
                cnt++;
                ret.pb({i, cnt});
            }
        }
    }
    if (n > 1)
        ret.pb({n, 1});

    return ret;
}
ll power(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll x = power(a, b / 2);
    x *= x;
    if (b % 2 != 0)
        x *= a;
    return x;
}
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
    string s, y;
    cin >> s >> y;
    int n = min(s.size(), y.size());
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << y[i];
    }

    if (n == y.size())
    {
        for (int i = n; i < s.size(); i++)
        {
            cout << s[i];
        }
    }
    else
        for (int i = n; i < y.size(); i++)
        {
            cout << y[i];
        }
    cout << '\n';
}
signed main()
{
    // freopen(".in", "r", stdin);
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        A7MD();
    return 0;
}
