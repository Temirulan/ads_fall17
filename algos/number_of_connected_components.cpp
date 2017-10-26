#include <iostream>

using namespace std;

int n;
int a[111][111];
int col[111];

int main(){

    // col[i]

    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        cin >> col[i];
    }

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i < j && a[i][j] == 1 && col[i] != col[j]) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
