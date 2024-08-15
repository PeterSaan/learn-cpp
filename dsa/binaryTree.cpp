#include <iostream>
#include <vector>

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {} 
};

// Also for Leetcode problem 144
void preorderTraversal(TreeNode* root) {
	std::cout << root << std::endl;
}

int main() {
	TreeNode* tree = new TreeNode(1, new TreeNode(2), new TreeNode(3));

	preorderTraversal(tree);
}
