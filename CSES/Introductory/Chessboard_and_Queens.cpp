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
int board[8][8];
int row[8] = {0};
int ans = 0;

bool pos(int tryrow, int col){
    if(col == 0 && board[tryrow][col] == 0)
        return false;
    for(int i =0 ;i<col;i++)
    {
        if(row[i] == tryrow || abs(tryrow - row[i]) == abs(i-col) || board[tryrow][col] == 0)
        {
            return false;
        }
    }
    return true;
}

void solve(int col){

    if(col == 8){
        ans++;
        return;
    }
    for(int tryrow = 0; tryrow<8;tryrow++)
    {
        if(pos(tryrow, col)){
            row[col] = tryrow;
            solve(col+1);
        }
    }

}

int main()
{
    string s;
    int index = 0;
    while(getline(cin, s)){
        for(int i=0;i<s.size();i++){
            if(s[i] == '.')
                board[index][i] = 1;
            else
                board[index][i] = 0;
        }
        index++;          
    }
    solve(0);
    cout << ans << "\n";
    return 0;
}
