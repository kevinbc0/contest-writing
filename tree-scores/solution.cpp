#include <iostream>
#include <cstdio>
#include <stack>
#include <algorithm>

using namespace std;

constexpr int MAXN = 2003;

int h[MAXN][MAXN];
int rows[MAXN];
int n;
int k;

int largestArea(int* arr) {
    stack<int> s;
    int ans = 0;
    for (int i = 0; i <= n; i++) {
        while (!s.empty() && (i == n || arr[i] < arr[s.top()])) {
            int index = s.top();
            s.pop();
            int length = i - (s.empty() ? -1 : s.top()) - 1;
            ans = max(ans, arr[index] * length);
        }

        s.push(i);
    }

    return ans;
}

int largestScore() {
    int prefix[n];
    prefix[0] = 0;

    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + rows[i - 1];
    }

    int w = n - k + 1;
    int windows[w];
    for (int i = 0; i < w; i++) {
        windows[i] = prefix[i + k] - prefix[i];
    }

    int max_left[w];
    int max_right[w];
    max_left[0] = windows[0];
    max_right[w - 1] = windows[w - 1];
    for (int i = 1; i < w; i++) {
        max_left[i] = max(windows[i], max_left[i - 1]);
        int ri = w - i - 1;
        max_right[ri] = max(windows[ri], max_right[ri + 1]);
    }

    int ans = 0;
    for (int i = k; i < w - k + 1; i++) {
        ans = max(ans, max_left[i - k] +  windows[i] + max_right[i + k]);
    }

    return ans;
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> h[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        rows[i] = largestArea(h[i]);
    }

    //for (int i = 0; i < n; i++) {
    //    cout << rows[i] << endl;
    //}
    int ans = largestScore();

    cout << ans << endl;
}
