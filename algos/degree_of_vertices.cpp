#include <iostream>

using namespace std;

int n, m;
int deg[111];

int main () {

    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        deg[x]++;
        deg[y]++;
    }

    for (int i = 1; i <= n; i++) {
        cout << deg[i] << " ";
    }
    cout << endl;

    return 0;
}
