#include<stdio.h>
#include<malloc.h>

typedef struct node
{
  int data;
  struct node *left;
  struct node *right;
}btree;
btree *tree;
int create(btree *);
btree *insert(btree *,int);
void preorder(btree *);
void inorder(btree *);
void postorder(btree *);
void smallest(btree *);
btree *largest(btree *);
void main()
{
    int ch,val,temp;
    btree *ptr;
    do
    {
        printf("\n*******MAIN MENU**********");
        printf("\n1.create\n2.insert\n3.preorder traversal\n4.inorder traversal\n5.postorder traversal\n6.smallest element\n7.largest element\n8.delete an element\n9.count no of nodes\n10.count no of external node\n11.count no of internal node\n12.determine the height of the tree\n13.find minnor image of the tree\n14.delete the tree\n15.exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1:
                temp = create(tree);
                if(temp==1)
                 printf("Tree is successfully created\n");
                break;
          case 2:
                printf("\nEnter the value to insert: ");
                scanf("%d",&val);
                tree = insert(tree,val);
                 printf("%d is inserted successfully\n",val);
                break;
          case 3:
                printf("\nPreorder traversal of the tree is: ");
                preorder(tree);
                break;
          case 4:
                printf("\nInorder traversal of the tree is: ");
                inorder(tree);
                break;
          case 5:
                printf("\nPostorder traversal of the tree is: ");
                postorder(tree);
                break;
          case 6:
                printf("\nSmallest element is: ");
                smallest(tree);
                break;
          case 7:
                
                ptr = largest(tree);
                printf("\nLargest element is: %d",ptr->data); 
                break;
        }
    }while(ch != 15);
}
int create(btree *tree)
{
    tree=NULL;
    return 1;
}
btree *insert(btree *tree,int val)
{
  btree *ptr;
  
  if(tree == NULL)
  {
    ptr=(btree *)malloc(sizeof(btree));
    ptr->data = val;
    ptr->left=NULL;
    ptr->right=NULL;
    // tree=ptr; 
    return ptr;  
  }
  else
  {
  if(val<tree->data)
    tree->left = insert(tree->left,val);
  else
    tree->right = insert(tree->right,val);
  }
  return tree;
}
void preorder(btree *tree)
{
    if(tree != NULL)
    {
     printf("%d ",tree->data);
     preorder(tree->left);
     preorder(tree->right);
    }
}
void inorder(btree *tree)
{
    if(tree !=NULL)
    {
        inorder(tree->left);
        printf("%d ",tree->data);
        inorder(tree->right);
    }
}
void postorder(btree *tree)
{
    if(tree != NULL)
    {
        postorder(tree->left);
        postorder(tree->right);
        printf("%d ",tree->data);
    }
}
void smallest(btree *tree)
{
    btree *ptr=tree;
    while(ptr->left != NULL)
    {
      ptr=ptr->left;
    }
    printf("%d",ptr->data);
}
btree *largest(btree *tree)
{
  if((tree == NULL) || (tree->right == NULL))
    return tree;
  else
     return largest(tree->right);
}