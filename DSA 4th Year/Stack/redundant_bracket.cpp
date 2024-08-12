#include <iostream>
#include <vector>

using namespace std;

int maximizeProtein(int N, int M, int K, vector<int>& prices, vector<int>& proteins) {
    vector<vector<vector<int>>> dp(N + 1, vector<vector<int>>(K + 1, vector<int>(M + 1, 0)));

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= K; j++) {
            for (int k = 0; k <= M; k++) {
                dp[i][j][k] = dp[i - 1][j][k];
                if (k >= prices[i - 1] && j > 0) {
                    dp[i][j][k] = max(dp[i][j][k], dp[i][j - 1][k - prices[i - 1]] + proteins[i - 1]);
                }
            }
        }
    }

    return dp[N][K][M];
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<int> prices(N);
    vector<int> proteins(N);

    for (int i = 0; i < N; i++) {
        cin >> prices[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> proteins[i];
    }

    int result = maximizeProtein(N, M, K, prices, proteins);
    cout << result+proteins[N-1] << endl;

    return 0;
}


// 4
//   4
//   1
//   5 7 2 4
//   15 10 20 17