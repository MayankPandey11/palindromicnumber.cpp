


// <-------------------mayank221602--------------------------->

#include <bits/stdc++.h>
using namespace std;
#define mod               1e9 + 7
#define fastio()          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout<<fixed;cout<<setprecision(1);
#define yes               cout << "YES" << endl;
#define no                cout << "NO" << endl;
#define print(x)          cout << x << endl;
#define MP                make_pair
#define pb                push_back
#define pob               pop_back
#define F                 first
#define S                 second
#define loop(i, x, n)     for(int i = x; i < n; i++)
#define loop_n(i, n, x)   for (int i = x; i > n; i--)

typedef long long int ll;
typedef vector<int> vec;
typedef pair<int, int> pr;
typedef map<int,int> mp;
void solution()
{
    ll n;
    string ans;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] == '9')
    {
        int c = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int x = s[i] - '0';
            x += c;
            if (x > 1)
            {
                int y = 11 - x;
                c = 1;
                ans += (y + '0');
            }
            else
            {
                c = 0;
                int y = 1 - x;
                ans += y + '0';
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    else
    {
        loop(i, 0, n)
        {
            cout << 9 - (s[i] - '0');
        }
        cout << endl;
    }
}
int main()
{
    fastio()
        ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}