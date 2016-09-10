#include <bits/stdc++.h>

using namespace std;

#define min(x,y) x<y?x:y
#define max(x,y) x>y?x:y
#define REP(i,n) for (int i = 0; i < n; ++i)
#define REP1(i,n,step) for (int i = 0; i < n; i+=step)
#define REP2(i,x,y) for (int i = x; i < y; i++)
#define REP3(i,x,y,step) for (int i = x; i < y; i+=step)
#define NREP(i,n) for (int i = n-1 ; i >= 0; --i)
#define NREP1(i,n,step) for (int i = n-1 ; i >= 0; i-=step)
#define NREP2(i,x,y) for (int i = x; i >= y; i--)
#define NREP3(i,x,y,step) for (int i = x; i >= y; i-=step)
#define sortv(a) sort(a.begin(),a.end())

#define pb push_back
#define mp make_pair
 
const float PI=3.1415926535897932384626433832795;
const int MOD=1e9+7;
 
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

bool even(int x) { return x%2==0?true:false; }
bool odd(int x) {return x%2==1?true:false; }
ull fact(int a){ ull f=1; REP(i,a) f*=1; return f;}
ull gcd(int a, int b){ return b == 0 ? a : gcd(b,a%b); }
ull lcm(int a,int b){ return a*b/gcd(a,b);}
ll fast_expo(ll a,ll b)
{
    if(b==1) return a;
    if(b==2) return a*a;
    return b&1 ? a*fast_expo(fast_expo(a,(b-1)/2),2) : fast_expo(fast_expo(a,b/2),2);
}

void spiralOrder(int matrix[4][4])
{
     int top = 0;
     int down = 3;
     int left = 0;
     int right = 3;
     while(1)
     {
         // Print top row
         REP2(j,left,right+1) cout<<matrix[top][j]<<" ";
         top++;
         if(top > down || left > right) break;
         //Print the rightmost column
         REP2(i,top,down+1) cout<<matrix[i][right]<<" ";
         right--;
         if(top > down || left > right) break;
         //Print the bottom row
         NREP2(j,right,left) cout<<matrix[down][j]<<" ";
         down--;
         if(top > down || left > right) break;
         //Print the leftmost column
         NREP2(i,down,top) cout<<matrix[i][left]<<" ";
         left++;
         if(top > down || left > right) break;
     }
     cout<<endl;
 }

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[4][4];
		REP(i,4)
			REP(j,4)
				cin>>a[i][j];
		spiralOrder(a);
	}
	return 0;
}
