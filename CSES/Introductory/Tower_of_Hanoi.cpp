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

void Hanoi(int n, int start, int mid, int end){
    if(n==1)
    {
        cout << start << " " << end << "\n";
        return;
    }
    Hanoi(n-1, start, end, mid);
    cout << start << " " << end << "\n";
    Hanoi(n-1, mid, start, end);

}
int main()
{
    int n;
    cin >> n;
    cout << (1<<n)-1 << "\n";
    Hanoi(n,1,2,3);
    return 0;
}
