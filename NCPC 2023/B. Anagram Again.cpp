#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


//Starting in the name of Allah(THE ALMIGHTY)

// #define int long long int
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

void FastIO()
{
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r", stdin);
          // freopen("out.txt", "w", stdout);
          // freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE      
}


const int N = 1e6+7;


void solve(int t){
    int n , m;
    cin >> n;

    string dictWords[n];

    rep(i,0,n){
        cin >> dictWords[i];
    }

    cin >> m;
     string qWords[m];

    rep(i,0,m){
        cin >> qWords[i];
    }

    int dictWordsCount[n][26] = {};
       
    rep(i,0,n){
        int sz = dictWords[i].size();
        rep(j,0,sz){
            dictWordsCount[i][(dictWords[i][j] - 'a')]++;

        }
    }


    int qWordsCount[m][26] = {};


    cout << "Case " << t << ": " << '\n';
 
    rep(i,0,m){
        int sz = qWords[i].size();
        rep(j,0,sz){
            qWordsCount[i][(qWords[i][j]  - 'a')]++;

        }
    }





    rep(i,0,m){
        int cnt = 0;
        rep(j,0,n){
            bool ok = 1;
            rep(letter,0,26){
                if(qWordsCount[i][letter] < dictWordsCount[j][letter]){
                    ok = 0;break;
                }
            }
            if(ok) ++cnt;
        }

        cout << cnt << '\n';
    }
}
int32_t main()
{
     // FastIO();

     int T = 1;
     cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}

