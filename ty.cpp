#include<iostream>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>
#include<cstring> 
#include<deque>
#include<unordered_map>
#include<unordered_set>
#include<stack>
#include<queue>
#include<list>
#include<string>
#include <sstream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll modularFact(int n,ll mod){ll temp = 1; for(int i = 1; i <= n;i++){ temp = ((temp % mod) * (i % mod)) % mod; } return temp;}
ll modInv(ll n,ll mod){ return (expo(n , mod -2 , mod) % mod);}
ll choose(ll n , ll k, ll mod){ ll numerator = 1,denominator = 1; for(int i = n,r = 1;r <= k;i--,r++){ numerator = (numerator * i) % mod; denominator = (denominator * r) % mod;} return (numerator * modInv(denominator,mod)) % mod;} // only when MOD is prime this to calculate nCk


int main(){
   int ap
}