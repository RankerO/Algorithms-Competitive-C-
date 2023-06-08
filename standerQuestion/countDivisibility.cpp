
/* question Statement*/
/*
you have given array of numbers. example-[2,4,3,5,7,8]
you need to find for every elements(nums[i]) 0<=i<1E5 number of element in array devides nums[i];
*/

/*                                                                                                                      
                                                  ＨＡＣＫＥＲ__ＯＲ___ＷＨＡＴ                                    
                                                                                                                        
                                                   ＡＮＫＩＴ___ＰＡＮＤＥＹ                                       
                                                                                                                      
*/
#include <bits/stdc++.h>
#define int int64_t
#define vi vector<int>
using namespace std;

vi divisibility(vi &v)
{
    map<int, int> mp;
    for(auto c:v)
    {
        mp[c]++;
    }
    vi ans;
    for(auto c:v)
    {
        int s = 0;
        mp[c]--;
        for (int i = 1; i * i <= c;i++)
        {
            if(c%i==0)
            {
                s += mp[i];
                if(c/i!=i)
                {
                    s += mp[c / i];
                }
            }
        }
        mp[c]++;
        ans.push_back(s);
    }
    return ans;
}
void HackerOrWhat()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    vi ans = divisibility(v);
    for(auto c:ans)
    {
        cout << c << " ";
    }
    cout << endl;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        HackerOrWhat();
    return 0;
}

