#include <cstdio>
#include <iostream>

using namespace std;
using ll = long long;

constexpr ll MOD = 1000000007;
constexpr int MAX_N = 1003;

ll dp[MAX_N][MAX_N];

void solve(int n, int k) {
    dp[0][0] = 1;
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j > i) {
                dp[i][j] = dp[i][j - 1];
                continue;
            }
            ll a = dp[i - j][j - 1];
            ll b = (j - 1 - k) >= 0 ? dp[i - j][j - 1 - k] : 0;
            if (b > a) {
                a += MOD;
            }

            ll c = a - b;
            dp[i][j] = (dp[i][j - 1] + c) % MOD;
        }
    }

    printf("%lld\n", dp[n][n]);
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    scanf("%d %d", &n, &k);

    solve(n, k);
}
