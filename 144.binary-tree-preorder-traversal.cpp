/*
 * @lc app=leetcode id=144 lang=cpp
 *
 * [144] Binary Tree Preorder Traversal
 */

using namespace std;

#include <iostream>
#include <string>
#include <vector>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
private:
    void preorderRecursive(TreeNode *root, vector<int> *preorder)
    {
        if (root != nullptr)
        {
            preorder->push_back(root->val);
            preorderRecursive(root->left, preorder);
            preorderRecursive(root->right, preorder);
        }
    }

public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> preorder{};

        preorderRecursive(root, &preorder);

        return preorder;
    }
};
// @lc code=end

int main()
{
    vector<string> msg{"Welcome", "to", "leetcode"};

    for (const string word : msg)
    {
        cout << word << " ";
    }

    cout << endl;
}
