#include<iostream>
using namespace std;

class Node {
    public :
    int data ;
    Node *left, *right;

    Node (int val){
        data = val;
        left = right = NULL;
    }
};

Node* insertBST(Node *root, int target){
    // base case
    if(root == NULL){
        Node *temp = new Node(target);
        return temp;
    }

    if(target < root->data){ //go to left subtree
        root->left = insertBST(root->left, target);
    } else{ // go to right subtree
        root->right = insertBST(root->right, target);
    }
    return root;


}

searchBST(Node* root, int target){
    //base case
    if(root == NULL){
        return 0;
    }

    if(root->data == target ){
        return 1;
    }
    else if (target < root->data){
        return searchBST(root->left, target);
    }else {
        return searchBST(root->right, target);
    }
}

int main(){
    int arr[] = {6, 3, 17, 5, 11, 18, 2, 1, 20, 14};
    Node *root = NULL;

    for(int i = 0; i<10; i++){
        root = insertBST(root, arr[i]);
    }

  cout<< searchBST(root, 8)<<endl;
}
