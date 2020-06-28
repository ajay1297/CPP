#include <bits/stdc++.h>

using namespace std;

class TreeNode
{
public:
    int data = 0;
    TreeNode *right;
    TreeNode *left;
    TreeNode(int val)
    {
        data = val;
        right = left = nullptr;
    }
};

class FindMaxInTree
{
public:
    static int findMax(TreeNode *root);
    static int findMaxRecurse(TreeNode *root);
};

int FindMaxInTree::findMaxRecurse(TreeNode *root)
{
    if (root->left == NULL && root->right == NULL)
        return root->data;
    int temp;
    if (root->left)
        temp = findMaxRecurse(root->left);
    if (root->right)
        temp = max(temp, findMaxRecurse(root->right));
    return temp;
}

int FindMaxInTree::findMax(TreeNode *root)
{
    int maxVal = INT_MIN;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *node = q.front();
        q.pop();
        //cout << node->data << " ";
        maxVal = max(maxVal, node->data);
        if (node->left != nullptr)
        {
            q.push(node->left);
        }

        if (node->right != nullptr)
        {
            q.push(node->right);
        }
    }
    return maxVal;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(16);
    root->right->right = new TreeNode(7);

    int maxVal = FindMaxInTree::findMaxRecurse(root);

    cout << maxVal << endl;
}
