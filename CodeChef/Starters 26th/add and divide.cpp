#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define Mod 1000000007
#define ll long long
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(), (v).end()
#define pii pair<ll, ll>
#define vii vector<pii>
#define calc_fact(n) tgamma(n + 1)
#define inf LONG_LONG_MAX
#define mod 3e5
#define ar array
#define mp make_pair;
// #define rep(i, a, b) for (int i=a; i<b; i++)
ll gcd(ll a, ll b)
{
    while (a && b)
        a > b ? a %= b : b %= a;
    return a + b;
}
ll lcm(ll a, ll b) { return (max(a, b) / gcd(a, b)) * min(a, b); }
// // ll power(ll b, ll e){ ll p = 1; while(e>0){ if(e&1){ p = (p*b)%mod; }
// // e = e>>1; b = (b*b)%mod;} return p; }
// Modular Exponentiation (Power in Modular Arithmetic)
ll power(ll x, ll y)
{
    // Initialize answer
    ll res = 1;
    // Check till the number becomes zero
    while (y)
    {
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x);
        // y = y/2
        y = y >> 1;
        // Change x to x^2
        x = (x * x);
    }
    return res;
}

//function to count the digit
int digitCount(ll n)
{
    int count = 0;
    while (n)
    {
        count++;
        n = n / 10;
    }
    return count;
}
// function to check prime number
ll is_prime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
string IntToString(ll a)
{
    char x[100];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}

ll StringToInt(string a)
{
    char x[100];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
}

string GetString(void)
{
    char x[1000005];
    scanf("%s", x);
    string s = x;
    return s;
}

string uppercase(string s)
{
    int n = s.size();
    //REP(i,n) if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 'a' + 'A';
    return s;
}

string lowercase(string s)
{
    int n = s.size();
    //REP(i,n) if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
    return s;
}

long long int lastDigit(ll n)
{

    return (n % 10);
}

void solve()
{
    ll k, l;
    cin >> k >> l;
    unordered_map<ll, ll> count;
    count[k]++;
    while (1)
    {
        ll num = lcm(k, l);
        ll val = num / l;
        k = val;
        if (val == 1)
        {
            cout << "YES"
                 << "\n";
            return;
        }
        if (count[val] > 0)
        {
            cout << "NO"
                 << "\n";
            return;
        }
        count[val]++;
    }
}

int main()
{

    FastIO;

    ll t = 1;
    cin >> t;

    // for(int i = 1; i<=t; i++)
    // {
    // cout<<"Case #"<<i<<": ";
    // solve();
    // }
    while (t--)
    {
        solve();
    }
    return 0;
}