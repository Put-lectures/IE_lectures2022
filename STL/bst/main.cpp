#include <fstream>
#include <iostream>
using namespace std;
struct sNode
{
    std::string text;
    int counter;
    sNode *left;
    sNode *right;
};

sNode *newNode(const string &str, int cnt = 1)
{
    sNode *tmp = new sNode;
    tmp->text = str;
    tmp->counter = cnt;
    tmp->left = nullptr;
    tmp->right = nullptr;
    return tmp;
}
sNode *insert(sNode *node, const string &str, int cnt = 1)
{
    if (node == nullptr) {
        node = newNode(str, cnt);
        return node;
    }
    if (node->text == str) {
        node->counter++;
        return node;
    }
    if (node->text > str) {
        if (node->left != nullptr)
            return insert(node->left, str, cnt);
        else {
            node->left = newNode(str, cnt);
            return node->left;
        }
    } else {
        if (node->right != nullptr)
            return insert(node->right, str, cnt);
        else {
            node->right = newNode(str, cnt);
            return node->right;
        }
    }
}
void print(sNode *node)
{
    if (node->left != nullptr)
        print(node->left);
    cout << node->text << " - " << node->counter << endl;
    if (node->right != nullptr)
        print(node->right);
}
int get(sNode *node, string key)
{
    if (node == nullptr)
        return -1;
    if (node->text == key) {
        return node->counter;
    }
    if (node->text < key)
        return get(node->right, key);
    else
        return get(node->left, key);
}
int main()
{
    fstream file("/home/piotr/license.txt", ios::in);
    if (file.is_open()) {
        string word;
        file >> word;
        sNode *root = nullptr;
        root = insert(nullptr, word);
        while (!file.eof()) {
            file >> word;
            //            cout << word;
            insert(root, word);
        }

        print(root);

        cout << "word the occured " << get(root, "the1");
    }
    return 0;
}
