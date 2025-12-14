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
void countNodes(BST *r, int &count){
    if(r!=NULL){
        countNodes(r->left,count);
        count++;
        countNodes(r->right,count);
    }
}
void findlevel(BST *r, int level, int &maxlevel){
    if(r!=NULL){
        if(level>maxlevel){
            maxlevel=level;
        }
        findlevel(r->left,level+1,maxlevel);
        findlevel(r->right,level+1,maxlevel);
    }
}
void delete_Node(int val) {
    temp = root;
    ttemp = NULL;
    while (temp != NULL && temp->data != val) {
        ttemp = temp;
        if (val < temp->data) {
            temp = temp->left;
        } else {
            temp = temp->right;
        }
    }
    if (temp == NULL) return; // Node not found

    // Node with one child or no child
    if (temp->left == NULL || temp->right == NULL) {
        BST *child = (temp->left != NULL) ? temp->left : temp->right;
        if (ttemp == NULL) { // Deleting root node
            root = child;
        } else if (ttemp->left == temp) {
            ttemp->left = child;
        } else {
            ttemp->right = child;
        }
        delete temp;
    } else { // Node with two children
        BST *successorParent = temp;
        BST *successor = temp->right; // Find the inorder successor
        while (successor->left != NULL) {
            successorParent = successor;
            successor = successor->left;
        }
        temp->data = successor->data; // Copy the inorder successor's value
        if (successorParent->left == successor) {
            successorParent->left = successor->right; // Remove the successor
        } else {
            successorParent->right = successor->right; // Remove the successor
        }
        delete successor;
    }
}

int main() {
   init();
   create_Root(50);// [data=100][left=NULL][right=NULL]
   add_Node(30);   //[data=50][left=NULL][right=NULL]
   add_Node(70);  //[data=200][left=NULL][right=NULL]
   add_Node(90);  //[data=150][left=NULL][right=NULL]
   add_Node(20);  //[data=250][left=NULL][right=NULL]
   add_Node(10);  //[data=30][left=NULL][right=NULL]
   add_Node(100); 
   add_Node(60);  
   add_Node(80);  
   add_Node(55);  
   add_Node(85);  
   add_Node(35);  
   add_Node(24);  
   add_Node(25);
   add_Node(45);  
   add_Node(15);  
   add_Node(59);  
   cout<<"Inorder Traversal: ";
    inorder(root);
    cout<<"\nPreorder Traversal: ";
    preorder(root);
    cout<<"\nPostorder Traversal: ";
    postorder(root);
    int count=0;
    countNodes(root,count);
    cout<<"\nTotal Nodes in BST: "<<count;
    int maxlevel=0;
    findlevel(root,1,maxlevel); 
    cout<<"\nHeight of BST: "<<maxlevel;    

   return 0;
}