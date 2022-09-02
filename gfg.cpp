#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define INF               (ll)1e17
typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
ll msb(ll N) {return (64 - __builtin_clzll(N) - 1);}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fr); cerr << ","; _print(p.sc); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
ll mod_sub(ll a, ll b, ll m) {return (((a % m - b % m + m) % m));}
vector <vector<ll>> adj(5e5 + 500);
ll lcm(ll a, ll b) {
    ll val = __gcd(a, b);
    return ((a * b) / val);
}
ll diff(pair<ll, ll> p1, pair<ll, ll> p2) {
    return (abs(p1.fr - p2.fr) + abs(p1.sc - p2.sc));
}
vector<int> dist(2e5 + 10, INT_MAX);
void Jai_shree_ganesh(ll tt) {
//cout<<"never give up"<<endl;
//cout << "play to win" << endl;
//cout<<"Case #"<<tt<<": ";
    ll N;
    cin >> N;
    vector<ll> v(N);
    for (ll i = 0; i < N; i++) cin >> v[i];
    ll i = 0;
    ll gcd = INF;
    while (i < N) {
        gcd = min(gcd, v[i]);
        if (i + 1 < N && v[i + 1] >= v[i]) {
            while (i + 1 < N && v[i + 1] >= v[i]) {
                gcd = min(gcd, __gcd(v[i + 1], gcd));
                i++;
            }
        }
        else {
            i++;
        }
    }
    cout << gcd << "\n";
}
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        Jai_shree_ganesh(i);
    }
    return (0);
}