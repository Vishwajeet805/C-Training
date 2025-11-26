#include <iostream>
using namespace std;
struct BST
{
int data;
BST *left,*right;
};
BST *root,*temp,*ttemp,*p;//Global Pointers
void init(){
    root =temp=ttemp= NULL;
}
void create_Root(int val){
    root = new BST();//ek memmory banti h dynamically [data][left][right]{base address=100} -> root=100
    root->data=val;
    root->left=root->right=NULL;
}
void add_Node(int val){
    temp = root;
    while(temp!=NULL){
        ttemp = temp;
        if(temp->data>val){
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }
    }
    p=new BST;
    p->data=val;
    p->left=p->right=NULL;
    if(ttemp->data>val){
        ttemp->left=p;
    }
    else{
        ttemp->right=p;
    }
}//create inorder preorder postorder functions without using recursion using stack
void inorder(BST *r){
    if(r!=NULL){
        inorder(r->left);
        cout<<r->data<<" ";
        inorder(r->right);
    }

}
void preorder(BST *r){
    if(r!=NULL){
        cout<<r->data<<" ";
        preorder(r->left);
        preorder(r->right);
    }   
}
void postorder(BST *r){
    if(r!=NULL){
        postorder(r->left);
        postorder(r->right);
        cout<<r->data<<" ";
    }   
}
int main() {
   init();
   create_Root(100);// [data=100][left=NULL][right=NULL]
   add_Node(50);   //[data=50][left=NULL][right=NULL]
   add_Node(200);  //[data=200][left=NULL][right=NULL]
   add_Node(150);  //[data=150][left=NULL][right=NULL]
   add_Node(170);  //[data=250][left=NULL][right=NULL]
   add_Node(300);  //[data=30][left=NULL][right=NULL]
   add_Node(20);  //[data=20][left=NULL][right=NULL]
   cout<<"Inorder Traversal: ";
    inorder(root);
    cout<<"\nPreorder Traversal: ";
    preorder(root);
    cout<<"\nPostorder Traversal: ";
    postorder(root);


   return 0;
}