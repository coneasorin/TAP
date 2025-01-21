#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

struct Node {
    char data;
    int freq;
    Node* left;
    Node* right;

    Node(char data, int freq) {
        left = right = nullptr;
        this->data = data;
        this->freq = freq;
    }
};

struct Compare {
    bool operator()(Node* left, Node* right) {
        return left->freq > right->freq;
    }
};

void printCodes(Node* root, string str, unordered_map<char, string>& huffmanCodes) {
    if (!root)
        return;

    if (root->data != '$') {
        huffmanCodes[root->data] = str;
    }

    printCodes(root->left, str + "0", huffmanCodes);
    printCodes(root->right, str + "1", huffmanCodes);
}

Node* buildHuffmanTree(const string& text) {
    unordered_map<char, int> freqMap;

    for (char c : text) {
        freqMap[c]++;
    }

    priority_queue<Node*, vector<Node*>, Compare> pq;

    for (auto pair : freqMap) {
        pq.push(new Node(pair.first, pair.second));
    }

    while (pq.size() > 1) {
        Node* left = pq.top();
        pq.pop();
        Node* right = pq.top();
        pq.pop();

        Node* newNode = new Node('$', left->freq + right->freq);
        newNode->left = left;
        newNode->right = right;

        pq.push(newNode);
    }

    return pq.top();
}

string encode(const string& text, unordered_map<char, string>& huffmanCodes) {
    string encodedStr = "";
    for (char c : text) {
        encodedStr += huffmanCodes[c];
    }
    return encodedStr;
}


int main() {
    string text = "this is an example for huffman encoding";

    Node* root = buildHuffmanTree(text);

    unordered_map<char, string> huffmanCodes;
    printCodes(root, "", huffmanCodes);

    cout << "\nEncoded text: ";
    string encodedStr = encode(text, huffmanCodes);
    cout << encodedStr << endl;


    return 0;
}
