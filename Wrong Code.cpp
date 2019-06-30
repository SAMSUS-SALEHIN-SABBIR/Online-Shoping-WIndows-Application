#include <bits/stdc++.h>
/*
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list> 
#include <iterator>
#include <forward_list>
#include <array> 
#include <tuple>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <stack>
#include <deque>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <utility>
*/
 
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef long long int li;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
 
#define looplr(i,l,r) for(int i=l;i<=r;++i)
#define rlooplr(i,l,r) for(int i=l;i>=r;--i)
#define FOReach(x,Z) for(__typeof((Z).begin()) x=(Z).begin();x!=(Z).end();++x)
#define loop(i,n) for(int i=0;i<n;++i)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define transformlwr(S) transform((S).begin(), (S).end(), (S).begin(), ::tolower);
#define transformupr(S) transform((S).begin(), (S).end(), (S).begin(), ::toupper);
 
#define pb push_back
#define all(s) (s).begin(),(s).end()
#define SZ(X) ((int)(X).size())
#define CLR(X,x) memset(X, x, sizeof(X))
 
#define mp make_pair
#define F first
#define S second
#define sq(A) A*A
 
 
const int MAX = 100000;
const int INF = 1000000001;
const li  INF64 = 1e18;
const int MOD = 1e9 + 7;
const ld  PI = acosl(-1.0);
const ld  EPS = 1e-9;
 
// Binary predicate 
int compare(const void* a, const void* b){ 
    return ( *(int*)a - *(int*)b );
  // int ARR_SIZE = sizeof(arr) / sizeof(arr[0]); 
} //int* p = (int*) bsearch(&key1, arr, ARR_SIZE, sizeof(arr[0]), compare);
 
// Function for binary_predicate 
bool compare(int a, int b) 
{ 
    return (abs(a) == abs(b)); 
} // frdlist.unique(compare);
 
 
 
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
    fastio;
 
	int arr[MAX];
	int res,n,sum=0,temp,rem;//sum1=0,sum2=0,tc,x,y,z,count1=0,count2=0,rem,a,b,c,d,l,r,m,len;
	//string s,s1,s2;
 
	cin >> n ; 
	temp = n;
	while(n!=0){
		rem = n%10;
		sum = sum+rem;
		n=n/10;
	}
	//cout << "1st sum = "<< sum<< endl;
	if(sum%4==0){
		cout << temp<< endl;
	} //cout << res;
	else {
		res = sum%4;
		temp=temp+res; //cout << temp << endl;
		int temp2=temp;
		sum =0; //cout << "2nd sum = " << sum << endl;
		while(temp!=0){
		rem = temp%10;
		sum = sum+rem;
		temp=temp/10;
	}
	//cout << sum << endl;
	if(sum%4==0) cout <<temp2<<endl;
	else {
		res = sum%4;
		cout << temp2+res<< endl;
	}
	}
 
 
    //cout << clock()*1.0/ CLOCKS_PER_SEC << endl;
    return 0;
}
