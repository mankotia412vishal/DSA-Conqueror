string removeKdigits(string S, int K)
{
    int n = S.length();

    if (n == K)
        return "0";
    stack<char> st;

    for (int i = 0; i < n; i++)
    {
        while (K != 0 && !st.empty() && st.top() > S[i])
        {
            st.pop();
            K--;
        }
        st.push(S[i]);
    }
    while (K != 0)
    {
        st.pop();
        K--;
    }

    string ans = "";
    while (!st.empty())
    {

        ans += st.top();

        st.pop();
    }

    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] != '0')
        {
            return ans.substr(i);
        }
    }
    return "0";
}