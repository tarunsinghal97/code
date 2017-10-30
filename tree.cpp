#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *create(struct node *root,int value)
{
	if(root==NULL)
	{
		struct node *tmp;
		tmp = (struct node *)malloc(sizeof(struct node));
		tmp->data=value;
		tmp->left=NULL;
		tmp->right=NULL;
		return tmp;
	}
	if(value<=root->data)
	{
		root->left = create(root->left,value);
	}
	else
	{
		root->right = create(root->right,value);
	}
	return root;
}
void preorder(struct node *root)
{
	if(root!=NULL)
	{
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
}

void maximum(struct node *root)
{
	struct node *tmp=root;
	while(tmp->right!=NULL)
	{
		tmp = tmp->right;
	}
	cout<<tmp->data<<endl;
		
}

void minimum(struct node *root)
{
	struct node *tmp=root;
	while(tmp->left!=NULL)
	{
		tmp = tmp->left;
	}
	cout<<tmp->data<<endl;
		
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		struct node *root=NULL;
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			root = create(root,arr[i]);
		}
		inorder(root);
		cout<<endl;
		preorder(root);
		cout<<endl;
		postorder(root);
		cout<<endl;
		maximum(root);
		minimum(root);
	}
	return 0;
}
