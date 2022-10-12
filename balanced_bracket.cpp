#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> sym = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};

string brakcets(string str)
{
    char ch;
    stack<char> st;
    if(sym[str[0]] > 0)
        return "No";
    for (auto s : str)
    {
        if (sym[s] < 0)
            st.push(s);
        else
        {
            if (st.empty())
                return "No";
            ch = st.top();
            st.pop();
            if(sym[ch] + sym[s] != 0)
                return "No";
        }
    }
    if(st.empty()) return "Yes";
    return "No";
}

int main()
{
    int t;
    cout << "Enter number of cases\n";
    cin >> t;
    string str;
    while (t--)
    {
        cout << "Input brackets\n";
        cin >> str;
        cout << brakcets(str) << endl;
    }
    return 0;
}