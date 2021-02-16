#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
int main(){
    int array[12] = {6429, 2886, 8064, 9854, 6736, 5393, 4234, 7922, 1708, 6402, 4384, 9182};
    int temp[12] = {};
    int count[10], endpoint[10];
    int sum =0, mod=10;
    do{
        sum =0;
        count[10] = {};
        for(int i=0;i<12;i++){
            count[(array[i]%mod )/(mod/10)]++;
            sum++;
        }
        for(int i=1;i<10;i++)
            endpoint[i] = endpoint[i-1] + count[i];
        for(int i=0;i<12;i++){
            if(endpoint[(array[11-i]%mod )/(mod/10)]!=0)
                temp[--endpoint[(array[11-i]%mod )/(mod/10)]] = array[11-i];
        }
        mod*= 10;
        for(int i=0;i<12;i++){
            array[i] = temp[i];
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }while(sum>0);
    return 0;
} 