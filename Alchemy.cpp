/*
* @Date    : 2020-08-05 15:59:20
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

// vector<char> stk;

// bool merge()
// {
//     if (stk.size() < 3)
//         return false;
//     char a, b, c, major;
//     int s = stk.size();
//     unordered_map<char, int> m;
//     m[stk[s - 1]]++;
//     m[stk[s - 2]]++;
//     m[stk[s - 3]]++;
//     if (m.size() == 2)
//     {
//         for (auto &&i : m)
//             if (i.second == 2)
//                 major = i.first;
//         for (int i = 0; i < 3; i++)
//             stk.pop_back();
//         stk.push_back(major);
//         return true;
//     }
//     return false;
// }

// signed main(int argc, char const *argv[])
// {
//     int t, cnt = 1;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string in;
//         cin >> in;
//         stk.clear();
//         cout << "Case #" << cnt++ << ": ";
//         for (auto &&i : in)
//         {
//             stk.push_back(i);
//             while (merge())
//                 ;
//         }
//         if (stk.size() == 1)
//             cout << "Y\n";
//         else
//             cout << "N\n";
//     }
//     return 0;
// }

signed main()
{
    int t, cnt = 1;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        string in;
        cin >> in;
        for (auto &&i : in)
            if (i == 'A')
                c++;
            else
                c--;
        cout << "Case #" << cnt++ << ": ";
        if (abs(c) == 1)
            cout << "Y\n";
        else
            cout << "N\n";
    }

    return 0;
}