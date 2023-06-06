/*                                                                                                                      
                                                  ＨＡＣＫＥＲ__ＯＲ___ＷＨＡＴ                                    
                                                                                                                        
                                                   ＡＮＫＩＴ___ＰＡＮＤＥＹ                                       
                                                                                                                      
*/
#include <bits/stdc++.h>
#define int int64_t
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vs vector<string>
#define say(n) cout << n << endl;
#define vc vector<char>
#define vvc vector<vector<char>>
#define vb vector<bool>
#define pb push_back
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define vin(x, v)     \
    for (auto &x : v) \
        cin >> x;
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define MP make_pair
#define endl "\n"
#define deb(x) cout << #x << "=" << x << endl
#define debb(x, y) cout << #x << "=" << x << " , " << #y << "=" << y << endl
using namespace std;
void HackerOrWhat()
{
    int n;
    cin >> n;
    map<int, int> mp;
    vi v(n);
    vin(x, v);
    loop(i, 0, n)
        mp[v[i]] = max(mp[v[i]],i+1);
    vvi v1;
    for(auto c:mp)
    {
        v1.pb({c.second, c.first});
    }
    // sort(all(v1));
    int x = v1.size();
    int ans = -1;
    for (int i = 0; i < x;i++)
    {
        for (int j = i; j < x;j++)
        {
            if(__gcd(v1[i][1],v1[j][1])==1)
            {
                ans = max(ans, v1[i][0] + v1[j][0]);
            }
        }
    }
    say(ans);
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 0;
    cin >> T;
    while(T--)
        HackerOrWhat();
    return 0;
}

