#include<iostream>
using namespace std;
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int count = 1;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; i++){
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left==NULL && curr->right==NULL) return count;
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            count++;
        }

        return count;
    }
};
