#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> graph1(N, vector<int>(N));
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        graph1[u-1][v-1] = i + 1;
        graph1[v-1][u-1] = i + 1;
    }

    int tri = 0;
    vector<int> line(M);
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            if (graph1[i][j] > 0) {
                for (int k = j + 1; k < N; k++) {
                    if (k != i && graph1[j][k] > 0 && graph1[k][i] > 0) {
                        line[graph1[i][j]-1] += 1;
                        line[graph1[j][k]-1] += 1;
                        line[graph1[k][i]-1] += 1;
                    }
                }
            }
        }
    }
    
    for (int i = 0; i < M; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            if (graph1[i][j] == max_element(line.begin(), line.end())) 
        }
    }

    cout << tri << endl;
    return 0;
}