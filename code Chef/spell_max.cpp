#include <bits/stdc++.h>
using namespace std;

void Vishal()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        long long K;
        cin >> N >> K;

        vector<long long> X(N), p(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> X[i];
        }
        for (int i = 0; i < N; ++i)
        {
            cin >> p[i];
        }

        bool poss = false;

        if (p[0] >= X[1] - X[0] || p[N - 1] >= X[N - 1] - X[N - 2])
        {
            poss = true;
        }

        for (int i = 1; i < N && !poss; ++i)
        {
            long long dis = 0;
            for (int j = i; j < N - 1; ++j)
            {
                dis += X[j + 1] - X[j];
                if (p[i] >= dis)
                {
                    poss = true;
                    break;
                }
            }
        }

        for (int i = N - 2; i >= 0 && !poss; --i)
        {
            long long dis = 0;
            for (int j = i; j > 0; --j)
            {
                dis += X[j] - X[j - 1];
                if (p[i] >= dis)
                {
                    poss = true;
                    break;
                }
            }
        }

        for (int i = 0; i < N && !poss; ++i)
        {
            for (int j = i + 1; j < N; ++j)
            {
                if ((p[i] >= X[j] - X[i]) || (p[j] >= X[j] - X[i]))
                {
                    poss = true;
                    break;
                }
            }
        }

        if (poss)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Vishal();

    return 0;
}
