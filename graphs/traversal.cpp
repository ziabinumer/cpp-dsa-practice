#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int value) {
        this->left = this->right = nullptr;
    }
};

void traverse(Node* node) {
    queue<Node*> q;
    q.push(node);
    while (node != nullptr) {
        cout << node->value << ",";
        q.pop();
        q.push(node->left);
        q.push(node->right);
        node = q.front();
    }

}

int main() {

    return 0;
}

/*
*/