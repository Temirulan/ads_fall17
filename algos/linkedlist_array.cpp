// Key-logger problem

#include <iostream>
#include <string>

using namespace std;

int sz = 0, cur = 0;
char value[100100];
int L[100100], R[100100];

void turnLeft() {
    if (L[cur] != -1) cur = L[cur];
}

void turnRight() {
    if (R[cur] != -1) cur = R[cur];
}

void remove() {
    if (L[cur] != -1) {
        int x = L[L[cur]];
        int y = L[cur];
        int z = cur;
        L[z] = x;
        if (x != -1) R[x] = z;
    }
}

void add(char c) {
    int x = L[cur];
    int y = cur;
    value[sz] = c;
    L[sz] = x;
    R[sz] = y;
    L[y] = sz;
    if (x != -1) R[x] = sz;
    sz++;
}

int main () {

    L[sz] = R[sz] = -1;
    value[sz] = '#';
    sz++;

    string s;

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '<') turnLeft();
        else if (s[i] == '>') turnRight();
        else if (s[i] == '_') remove();
        else add(s[i]);
    }

    while (L[cur] != -1) cur = L[cur];

    while (true) {
        if (R[cur] == -1) break;
        cout << value[cur];
        cur = R[cur];
    }
    printf("\n");

    return 0;
}
