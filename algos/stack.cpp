#include <iostream>

using namespace std;

int sz = 0;
char st[100100];

bool isEmpty() {
    if (sz == 0) {
        return true;
    } else {
        return false;
    }
}

int getSize() {
    return sz;
}

void push(char c) {
    st[sz++] = c;
}

void pop() {
    if (sz != 0) {
        sz--;
    }
}

char top() {
    if (sz != 0) {
        return st[sz - 1];
    } else {
        return char(0);
    }
}

int main () {

    return 0;
}
