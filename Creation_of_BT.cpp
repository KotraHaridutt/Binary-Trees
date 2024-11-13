//Creating whole left part of BT and going to right side part
#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*left,*right;

    Node(int value){
        data = value;
        left = right = NULL;
    }
};

Node*Binarytree()
{
    int x;

    cin>>x;

    if(x==-1)
        return NULL;
    Node*temp = new Node(x);
    cout<<"Enter left child of "<<x<<" : ";
    temp->left = Binarytree();
    cout<<"Enter right child of "<<x<<" : ";
    temp->right = Binarytree();
    return temp;
}
int main()
{
    cout<<"Enter the root node : ";
    Node*root;
    root = Binarytree();

}