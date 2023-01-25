#include<iostream>
#include<vector>
using namespace std;
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
public:
    vector<int> v;
    void recursive(TreeNode* p){
        if(p){
        recursive(p->left);
        v.push_back(p->val);
        recursive(p->right);
        }
        return;
    }
    vector<int> inorderTraversal(TreeNode* root) {
    recursive(root);
    return v; 
    }
};

/*

Solved using recurison but can also be solved using 
Iterative method.
-> Becuase Recursion is a trivial

*/