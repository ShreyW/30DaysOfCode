#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef vector<pii> vii;

void setIO(string s)
{
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
    int n;
    cin >> n;
    if(n==1)
        cout << 1; //Oopsie
    else if(n < 4)
        cout << "NO SOLUTION";
    else{
        for(int i=2;i<=n;i+=2) //Handles n == 4 as well
            cout << i << " ";
        for(int i=1;i<=n;i+=2)
            cout << i << " ";
    }
    return 0;
}
