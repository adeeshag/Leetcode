//
// Created by Adeesh Ankaraju Gopalakrishnan on 2019-06-21.
//
// Untested

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* inorder_successor(struct node* root, struct node* node1) {
    struct node* temp, *last_left;
    if(root == NULL) return NULL;

    // Case 1
    if(node1->right != NULL) {
        temp = node1->right;
        while (temp->left != NULL) {
            temp = temp->left;
        }
        return temp;
    } else {
        // Case 2
        temp = root;
        while(temp->data != node1->data){
            if(temp->data < node1->data){
                last_left = temp;
                temp = temp->left;
            } else {
                temp = temp->right;
            }
        }
        return last_left;
    }
}