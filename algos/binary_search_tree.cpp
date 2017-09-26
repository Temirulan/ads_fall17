#include <iostream>

using namespace std;

struct Node {
    int value;
    Node *L;
    Node *R;

    Node (int _value) {
        value = _value;
        L = R = NULL;
    }
};

Node *root;

int main () {

    return 0;
}
