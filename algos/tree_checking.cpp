#include <iostream>

using namespace std;

int n, a[111][111];
int used[111];

void dfs(int v) {
    used[v] = 1;
    for (int i = 1; i <= n; i++) {
        if (a[v][i] == 1 && used[i] == 0) {
            dfs(i);
        }
    }
}

int main () {

    cin >> n;
    int m = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            m += a[i][j];
        }
    }
    m = m / 2;

    dfs(1);

    bool has_unvisited = false;

    for (int i = 1; i <= n; i++) {
        if (used[i] == 0) {
            has_unvisited = true;
        }
    }

    if (has_unvisited || m != n - 1) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}
