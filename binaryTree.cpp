#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root=NULL;

 node* buildTree(){
  int n;
  cin>>n;
  if(n==-1){
  	return NULL;
  }
  struct node *root=new node();
  root->data=n;
  
  	root->left=buildTree();
  	root->right=buildTree();
  
  return root;
}

// postorder traversal without recurssion 

void postorder(node* root){
  stack<node*>s1;
  stack<node*>s2;
  
  s2.push(root);
  while(!s2.empty()){
  	struct node * x=s2.top();
  	s1.push(x);
  	s2.pop();
  	if(x->left){
  		s2.push(x->left);
  	}
  	if(x->right){
  		s2.push(x->right);
  	}
  }
  while(!s1.empty()){
  	struct node *temp=s1.top();
  	s1.pop();
  	cout<<temp->data<<" ";
  }
}

void printTree(node *root){
	if(root==NULL){
		return ;
	}
	cout<<root->data<<" ";
	printTree(root->left);
	printTree(root->right);
}

int main(){
	
	root=buildTree();
	cout<<"inorder traversal with recurssion "<<endl;
	printTree(root);
	cout<<endl;
	cout<<"postorder traversal without recurssion "<<endl;
	postorder(root);
	cout<<endl;
	return 0;

}
