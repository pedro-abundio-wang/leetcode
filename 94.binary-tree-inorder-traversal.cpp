/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
 */

using namespace std;

#include <iostream>
#include <string>
#include <vector>

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
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
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
private:
  void inorderRecursive(TreeNode* root, vector<int>* inorder) {
    if (root != nullptr) {
      inorderRecursive(root->left, inorder);
      inorder->push_back(root->val);
      inorderRecursive(root->right, inorder);
    }
  }

public:
  vector<int> inorderTraversal(TreeNode* root) {
    vector<int> inorder{};
    inorderRecursive(root, &inorder);
    return inorder;
  }
};
// @lc code=end

int main() {
  vector<string> msg{"Welcome", "to", "leetcode"};
  for (const string word : msg) {
    cout << word << " ";
  }
  cout << endl;
}
