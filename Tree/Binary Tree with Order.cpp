#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = right = NULL;

    }
};

void preOrder(Node *root){
    if (root == NULL) return;

    //node
    cout<<root->data<<" ";
    //left
    preOrder(root->left);
    //right
    preOrder(root->right);
}

void inOrder(Node *root){
    if(root == NULL) return;

    //left
    inOrder(root->left);
    //node
    cout<<root->data<<" ";
    //right
    inOrder(root->right);
}

void postOrder(Node *root){
    if(root == NULL) return;

    //left
    postOrder(root->left);
    // right
    postOrder(root->right);
    //Node
    cout<<root->data<<" ";
}
Node * BinaryTree(){
    int x;
    cin>>x;
    if(x == -1) return NULL;

    Node * temp = new Node(x);
    // left side
    cout<<"Enter the left child of "<<x<<": ";
    temp->left = BinaryTree();
    // right side
    cout<<"Enter the right child of "<<x<<": ";
    temp->right = BinaryTree();
    return temp;
    
}
int main(){
    cout<<"Enter the root node: ";
    Node *root = BinaryTree();

    //PreOrder Traversal
    cout<<"PreOrder Traversal: ";
    preOrder(root);

    //InOrder Traversal
    cout<<"\n InOrder Traversal: ";
    inOrder(root);

    //PostOrder Traversal
    cout<<"\n PostOrder Traversal: ";
    postOrder(root);
}
