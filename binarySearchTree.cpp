#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
     
    node(int value){
        data = value;
        left = NULL;
        right =NULL;
     }
};
void preOrder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data;
    preOrder(root->left);
    preOrder(root->right);
}
int main(){
node* rootNode = NULL;
rootNode = new node(5);
rootNode->left = new node(1);
rootNode->right = new node(7);
rootNode->left->right = new node(3);
rootNode->left->right->left = new node(2);
rootNode->left->right->right = new node(4);

preOrder(rootNode);

return 0;
}