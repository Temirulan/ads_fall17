// Key-logger problem

#include <iostream>
#include <string>

using namespace std;

struct Node {
    char value;
    Node *L, *R;

    Node (char _value) {
        value = _value;
        L = R = NULL;
    }
};

Node* cur = new Node('#');

void turnLeft() {
    if (cur->L) cur = cur->L;
}

void turnRight() {
    if (cur->R) cur = cur->R;
}

void remove() {
    if (cur->L) {
        Node* y = cur->L;
        Node* x = y->L;
        cur->L = x;
        if (x) {
            x->R = cur;
        }
    }
}

void add(char c) {
    Node* y = cur->L;
    Node* new_node = new Node(c);
    new_node->L = y;
    new_node->R = cur;
    cur->L = new_node;
    if (y) {
        y->R = new_node;
    }
}

int main () {

    string s;

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '<') turnLeft();
        else if (s[i] == '>') turnRight();
        else if (s[i] == '_') remove();
        else add(s[i]);
    }

    while (cur->L != NULL) cur = cur->L;

    while (true) {
        if (cur->R) {
            printf("%c", cur->value);
            cur = cur->R;
        } else break;
    }
    printf("\n");

    return 0;
}
