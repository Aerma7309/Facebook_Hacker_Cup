/*
* @Date    : 2020-08-05 15:21:35
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

int FastIO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

string in, out;
int n;
set<int> vis;
void dfs(vector<vector<bool>> &m, int s, int pos)
{
    if (vis.find(pos) != vis.end())
        return;
    vis.emplace(pos);
    m[s][pos] = true;
    if (pos - 1 >= 0 and out[pos] == 'Y' and in[pos - 1] == 'Y')
        dfs(m, s, pos - 1);
    if (pos + 1 < n and out[pos] == 'Y' and in[pos + 1] == 'Y')
        dfs(m, s, pos + 1);
}

signed main(int argc, char const *argv[])
{
    int t, cnt = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> in >> out;
        vector<vector<bool>> m(n, vector<bool>(n));
        cout << "Case #" << cnt++ << ":\n";
        for (int i = 0; i < n; i++)
        {
            vis.clear();
            dfs(m, i, i);
        }
        for (auto &&i : m)
        {
            for (auto &&j : i)
            {
                if (j)
                    cout << 'Y';
                else
                    cout << 'N';
            }
            cout << '\n';
        }
    }
    return 0;
}