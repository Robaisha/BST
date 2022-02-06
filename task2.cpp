#include<iostream>
using namespace std;
class BinaryTree{
	public:
		int data;
		BinaryTree *left;
		BinaryTree *right;
		BinaryTree(){
			left=NULL;
			right=NULL;
			data=0;
		}
		BinaryTree(int d){
			left=NULL;
			right=NULL;
			data=d;
		}
		BinaryTree * InsertBST(BinaryTree *root,int val){
			if(root==NULL){
				return new BinaryTree(val);
			}
			if(val < root->data){
				root->left = InsertBST(root->left,val);
			}
			else if(val > root->data){
				root->right = InsertBST(root->right,val);
			}
			return root;
		}
		void inorder(BinaryTree *root){
			if(root==NULL){
				return;
			}
			inorder(root->left);
			cout<<root->data<<" ";
		    inorder(root->right);
			return;
		}
};
int main(){
	BinaryTree *root=NULL;
	BinaryTree obj;
	root=obj.InsertBST(root,15);
	obj.InsertBST(root,10);
	obj.InsertBST(root,20);
	obj.InsertBST(root,8);
	obj.InsertBST(root,12);
	obj.InsertBST(root,16);
	obj.InsertBST(root,25);
	obj.inorder(root);
	cout<<endl;
	
	return 0;
}
