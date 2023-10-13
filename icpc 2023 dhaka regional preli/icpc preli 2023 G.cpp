//Starting in the name of Allah(THE ALMIGHTY)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+7;

#define int long long
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

void solve(int t){
    string s;
    cin >> s;

    int n = s.size();
    int run = 0 , wt = 0;


    rep(i,0,n){
        if(s[i] == 'W') ++wt;
        else run += (s[i] - '0');
    }

    int over = n/6 , balls = n%6;
    cout << over << '.' << balls << (over > 1 or over == 1 and balls > 0?" Overs ": " Over ") << run << (run > 1 ? " Runs ":" Run ") << wt << ' ' << (wt > 1 ? "Wickets" : "Wicket" )<< ".\n";
}

int32_t main()
{
     int T = 1;
     cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}


