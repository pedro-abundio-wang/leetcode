/*
 * @lc app=leetcode id=145 lang=cpp
 *
 * [145] Binary Tree Postorder Traversal
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
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
  void postorderRecursive(TreeNode* root, vector<int>* postorder) {
    if (root != nullptr) {
      postorderRecursive(root->left, postorder);
      postorderRecursive(root->right, postorder);
      postorder->push_back(root->val);
    }
  }

public:
  vector<int> postorderTraversal(TreeNode* root) {
    vector<int> postorder{};
    postorderRecursive(root, &postorder);
    return postorder;
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
