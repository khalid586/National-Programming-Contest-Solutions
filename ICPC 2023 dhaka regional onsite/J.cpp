#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define rev(i,a,b) for(int i = a ; i >= b ; i--)

#define all(x) x.begin(),x.end()
const int N = 1e7 + 9;

void solve(int t){
    // think of these possible cases
    // topmost team won 2 games (6 - 3 - 0 or 6 - 1 - 1)
    // topmost team won 1 and drawn 1 [there will be 2 cases also (drawn against which team losing team of the other 2 or winning team of the other two)](4-4-0) or (4-3-1)
    // all teams won exactly 1 match each (3 points each) (3-3-3)
    // all teams drawn against each other (2 points each) (2-2-2)
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

