#include <iostream>
using namespace std;


struct Node {
    int key;
    Node *left, *right;
};


Node* newNode(int item) {
    Node* temp = new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}


Node* insert(Node* node, int key) {
    if (node == NULL)
        return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}

void storeSorted(Node* root, int arr[], int &i) {
    if (root != NULL) {
        storeSorted(root->left, arr, i);
        arr[i++] = root->key;
        storeSorted(root->right, arr, i);
    }
}


void treeSort(int arr[], int n) {
    Node* root = NULL;


    for (int i = 0; i < n; i++)
        root = insert(root, arr[i]);

    int i = 0;
    storeSorted(root, arr, i);
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;

    cout << "ادخل عدد العناصر: ";
    cin >> n;

    int arr[n];

    cout << "ادخل العناصر:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    treeSort(arr, n);

    cout << "المصفوفة بعد الترتيب:\n";
    printArray(arr, n);

    return 0;
}