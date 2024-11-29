#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef vector<pii> vii;

vll powers(19, 1);
void setIO(string s)
{
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
    for (int i = 1; i < 19; i++)
        powers[i] = powers[i - 1] * 10;
    int q;
    cin >> q;
    while (q--)
    {
        ll k;
        cin >> k;
        ll numdigits = 0;
        ll count = 0, prev = 0;
        for (int i = 1; i < 19; i++)
        {
            count += (powers[i] - powers[i - 1]) * i;
            if (count >= k)
            {
                numdigits = i;
                break;
            }
            prev = count;
        }
        ll low = powers[numdigits - 1];
        ll high = powers[numdigits] - 1;
        ll ans = 0, firstnumber = 0;
        while (low <= high)
        {
            ll mid = (low + high) / 2;
            ll start = (mid - powers[numdigits - 1]) * numdigits + prev + 1;
            // cout << low << " " << mid << " " << high << " " << start << "\n";
            if (start == k)
            {
                ans = mid;
                firstnumber = start;
                break;
            }
            else if (start < k)
            {
                ans = mid;
                firstnumber = start;
                low = mid + 1;
            }
            else
            {
                high = mid-1;
            }
            // cout << "END" << low << " " << mid << " " << high << " " << start << "\n";
        }
        string num = to_string(ans);
        cout << num[k - firstnumber] << "\n";
    }
    return 0;
}
