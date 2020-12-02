#include <bits/stdc++.h>
#include <string>
#define MAX 100007
#define scn1(a) scanf("%d", &a);
#define scn2(a, b) scanf("%d %d", &a, &b);
#define scn3(a, b, c) scanf("%d %d %d", &a, &b, &c);
#define lscn1(a) scanf("%lli", &a);
#define lscn2(a, b) scanf("%lli %lli", &a, &b);
#define lscn3(a, b, c) scanf("%lli %lli %lli", &a, &b, &c);
#define prnt(a) printf("%d\n", a);
#define forr(i, a, n) for(int i=a;i<n;i++)
#define nl puts("");
#define PB push_back
#define enl cout << "\n";
#define CHK(a) cout << (#a) << " = " << (a) << endl;
typedef long long int ll;
using namespace std;
void arraychk(int a[],int n) {for(int i=0;i<n;i++)cout<<a[i]<<" ";enl;}
#define LOOPCHK(a, n) arraychk(a, n);
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt=1;
    cin >> tt;
    for(int cse=1; cse<=tt; cse++)
    {
        int i=0, j=0, k=0, l=0, m=0,
        n=0, x=0, y=0, ans=0, sum=0;
        
        cin >> n;
        int a[n];

        forr(i, 0, n)
        {
        	cin >> a[i];
        }
        cout << a[0] << endl;
        
        // cout << "Case " << cse <<  ":";
        cout << ans << endl;
    }
    return 0;
}