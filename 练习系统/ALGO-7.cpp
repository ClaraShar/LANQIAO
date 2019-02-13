#include <iostream>
using namespace std;

struct TreeNode
{
	int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
void inorder(TreeNode* root,vector<int> &v)
{
    if(root->left!=NULL)
        inorder(root->left,v);
    v.push_back(root->val);
    if(root->right!=NULL)
        inorder(root->right,v);
}
int main()
{
	int n;
	cin>>n;
	int a[2*n-1];
	vector<int> v;
	TreeNode* root;
	for(int i=0;i<2*n-1;++i)
		cin>>a[i];
	for(int i=0;i<2*n-1;++i)
	{
		if(a[i]==0)
		{

		}
	}
	
	
    
    inorder(root,v);
    return v;

    return 0;
}