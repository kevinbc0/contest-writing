#include <cstdio>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

constexpr int MAXN = 100005;

int n;
unordered_map<int, vector<int>> graph;
int colors[MAXN];
int indegrees[MAXN];

int map[55];
int moves = 0;

inline void build_graph() {
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        int c, d;
        scanf("%d %d", &c, &d);
        
        colors[i] = c;

        vector<int> v;
        for (int j = 0; j < d; j++) {
            int b;
            scanf("%d", &b);
            v.push_back(b);
            indegrees[b]++;
        }

        graph.insert(make_pair(i, v));
    }

    for (int i = 1; i <= n; i++) {
        if (indegrees[i] == 0) {
            int color = colors[i];
            moves += map[color];
            map[color]++;
        }
    }
}

inline void answer_queries() {
    int q;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        int t, a, b;
        scanf("%d %d %d", &t, &a, &b);

        if (t == 1) {
            if (indegrees[a] != 0 || indegrees[b] != 0 || colors[a] != colors[b]) {
                printf("Nice try!\n");
            } else {
                printf("Nice move!\n");

                map[colors[a]] -= 2;
                moves -= 2 * map[colors[a]] + 1;

                graph[a].insert(graph[a].end(), graph[b].begin(), graph[b].end());
                for (int dest : graph[a]) {
                    indegrees[dest]--;
                    if (indegrees[dest] == 0) {
                        int color = colors[dest];
                        moves += map[color];
                        map[color]++;
                    }
                }
            }
        } else {
            printf("%d\n", moves);
        }
    }
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    build_graph();
    answer_queries();
}
