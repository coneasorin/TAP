#include <iostream>

using namespace std;

/*
11
5 9 12 20 2 15 6 -3 0 8 1
*/

struct bst_node {
    int val;
    bst_node* left, * right;
};

bst_node* bst_insert(bst_node* node, bst_node* parent, int val) {
    if (node == NULL) {
        bst_node* new_node = new bst_node;
        *new_node = { 0 };
        new_node->val = val;

        if (parent) {
            if (parent->val > val)
                parent->left = new_node;
            else
                parent->right = new_node;
        }

        return new_node;
    }

    if (node->val > val) 
        return bst_insert(node->left, node, val);
    else 
        return bst_insert(node->right, node, val);
}

void bst_inorder_and_free(bst_node* node, int* order, int& curr_idx) {
    if (node == NULL)
        return;

    bst_inorder_and_free(node->left, order, curr_idx);
    order[curr_idx++] = node->val;
    bst_inorder_and_free(node->right, order, curr_idx);

    delete node;
}

void bst_sort(int* vec, int n) {
    if (n == 0)
        return;

    bst_node* bst_root = bst_insert(NULL, NULL, vec[0]);
    for (int i = 1; i < n; i++)
        bst_insert(bst_root, NULL, vec[i]);

    int idx = 0;
    bst_inorder_and_free(bst_root, vec, idx);
}

int main()
{
    int n;
    cin >> n;

    int* vec = (int*)malloc(n * sizeof(int));
    if (!vec)
        return 0;

    for (int i = 0; i < n; i++)
        cin >> vec[i];

    bst_sort(vec, n);

    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
    free(vec);
    return 0;
}