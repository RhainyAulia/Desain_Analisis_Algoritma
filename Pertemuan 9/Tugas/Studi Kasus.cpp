//Studi Kasus Pohon Biner
#include <iostream>
using namespace std;

//declare
struct Node {
	int data;
	Node* left;
	Node* right;
};
//insert
Node* newNode(int data){
	Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

//Pre-Order 18, 30, 29, 32, 33
void preOrder (Node* node){
	if (node == NULL){
		return;
	}
	cout << node->data << " ";
	preOrder (node->left);
	preOrder (node->right);
}

//In-Order 29, 30, 32, 18, 33
void inOrder (Node* node){
	if (node == NULL){
		return;
	}
	
	inOrder (node->left);
	cout << node->data << " ";
	inOrder (node->right);
}

//Post Order 29, 32, 30, 33, 18
void postOrder (Node* node){
	if (node == NULL){
		return;
	}
	
	postOrder (node->left);
	postOrder (node->right);
	cout << node->data << " ";
}

int main () {

Node* root = newNode (18);
root ->left = newNode (30);
root ->right = newNode (33);
root ->left ->left = newNode (29);
root ->left ->right = newNode (32);

	cout << "DATA :" << endl
     << "\t       18\n"
     << "\t      / \\\n"
     << "\t    30   33\n"
     << "\t   / \\\n"
     << "\t  29  32\n\n";
     
    cout << "Pre-order traversal: ";
    preOrder(root);
    cout << endl;

    cout << "In-order traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postOrder(root);
    cout << endl;
    
    return 0;
}

