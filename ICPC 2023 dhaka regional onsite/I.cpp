#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define rev(i,a,b) for(int i = a ; i >= b ; i--)

#define all(x) x.begin(),x.end()
const int N = 1e7 + 9;

void solve(int t){
    int n;
    cin >> n;

    rep(i,0,n){
        int a;
        cin >> a;
    }

    rep(i,0,10){
        if(i%3 == 0)        cout << 1 << ' ' << n/2;
        else if(i%3 == 1)   cout << n/2+1 << ' ' << n;
        else                cout << n/4+1 << ' ' << (3*n)/4;

        cout << "\n";
    }
}

int32_t main()
{
     int t = 1; 
     cin >> t; 

     rep(i,1,t+1){
        solve(i);
    }
     return 0;
}

