#include<iostream>
using namespace std;

class Solution {
public:
    
    void preorderfun(vector<int>&preorder, TreeNode* root){
        if(root == NULL)
      {
        return ;
      }
      preorder.push_back(root->val);
      preorderfun(preorder,root->left);
      preorderfun(preorder,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>preorder;
        preorderfun(preorder, root);
        return preorder;
    }
};
