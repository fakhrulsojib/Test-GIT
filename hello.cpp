#include <bits/stdc++.h>

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt=2;
    //actually entering is good
    cin >> tt;
    for(int cse=1; cse<=tt; cse++)
    {
        int i=0, j=0, k=0, l=0, m=0,
        n=0, x=0, y=0, ans=0, sum=0;
        
        cin >> n;
        int a[n];

        forr(i, 0, n)
        	cin >> a[i];
        //changed again l
        // cout << "Case " << cse <<  ":";
        cout << ans << endl;
    }
    return 0;
}