#include <stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node* right;
};



struct Node* createtree(struct Node* node,int data){
    if(node==NULL){
        struct Node*temp;
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=data;
        temp->right=temp->left=NULL;
        return temp;
    }
    if(data<node->data)node->left=createtree(node->left,data);
    else if(data>node->data)node->right=createtree(node->right,data);

    return node;
}

struct Node*search(struct Node*node,int data){
    if(node==NULL)printf("\nElement not found");
    else if(data < node->data)

{

node->left=search(node->left, data);

}

else if(data > node->data)

{

node->right=search(node->right, data);

}

else

printf("\nElement found is: %d", node->data);

return node;
}

int height(struct Node* node)
{
    if (node == NULL)
        return -1;
    else
    {
        int lDepth = height(node->left);
        int rDepth = height(node->right);
        if (lDepth > rDepth)
            return(lDepth + 1);

        else return(rDepth + 1);
    }
}

struct Node* findMin(struct Node *node)

{

if(node==NULL)

{

return NULL;

}

if(node->left)

return findMin(node->left);

else

return node;

}


struct Node* del(struct Node *node, int data)

{

struct Node *temp;

if(node == NULL)

{

printf("\nElement not found");

}

else if(data < node->data)

{

node->left = del(node->left, data);

}

else if(data > node->data)

{

node->right = del(node->right, data);

}

else

{ 
if(node->right && node->left)
{

temp = findMin(node->right);

node -> data = temp->data;

node -> right = del(node->right,temp->data);

}

else

{
temp = node;

if(node->left == NULL)

node = node->right;

else if(node->right == NULL)

node = node->left;

free(temp); 

}

}

return node;

}

void inOrder(struct Node*node){
    if(node != NULL)

{

inOrder(node->left);

printf("%d\t", node->data);

inOrder(node->right);

}
}

int main(){
    int data,choice;int n,h;
    struct Node* root=NULL;
    while(1){
        printf("\n1.Insert a node\n2.Search in the tree\n3.Display the tree\n4.Height of the tree\n5.Delete a node\n6.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\nEnter how many values you want to insert:");
            scanf("%d",&n);
            printf("\nEnter the values of the nodes to insert\n");
            for(int i=0;i<n;i++){
                scanf("%d",&data);
                root=createtree(root,data);
            }
            break;

            case 2:
            printf("\nEnter element to search:");
            scanf("%d", &data);
            root=search(root, data);
            break;

            case 3:
            inOrder(root);
            break;

            case 4:
            h=height(root);
            printf("the height of the tree is %d\n",h);
            break;

            case 5:
            printf("\nEnter the element to delete: ");
            scanf("%d", &data);
            root=del(root, data);
            break;

            case 6:
            printf("\nExiting\n");
            return 0;

            default:
            printf("\nInvalid Option\n");
            break;
        }
    }
}