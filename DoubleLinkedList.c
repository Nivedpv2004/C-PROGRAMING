#include <stdio.h>
#include <stdlib.h>
typedef struct node1
{
 int data;
 struct node1 *Llink;
 struct node1 *Rlink;
 } node;
node *CreateNode(int n)
{
node *header = (node *)malloc(sizeof(node));
 node *ptr1; ptr1 = header;
 header->data = 0;
 header->Llink = NULL;
 header->Rlink = NULL;
for (int i = 0; i < n; i++)
{
node *ptr2 = (node *)malloc(sizeof(node));
printf("Enter the element: ");
 scanf("%d", &ptr2->data);
 ptr2->Rlink = NULL;
 ptr2->Llink = ptr1;
 ptr1->Rlink = ptr2;
 ptr1 = ptr1->Rlink;
}
return header;
}
void TraverseNode(node *header)
{
if (header->Rlink == NULL)
{
printf("Empty set");
}
else
{
node *ptr = header->Rlink;
 printf("The element are: \n");
 while (ptr != NULL)
{
 printf("%d\t", ptr->data);
 ptr = ptr->Rlink;
}
 }
 printf("\n");
}
void DeleteNodeFirst(node *header)
{
node *ptr1 = header->Rlink;
 node *ptr2; ptr2 = ptr1->Rlink;
 if (ptr2 != NULL)
ptr2->Llink = header;
header->Rlink = ptr2;
 free(ptr1);
}
void InsertNodeFirst(node *header, int data)
{
node *ptr1 = header->Rlink;
 node *ptr2 = (node *)malloc(sizeof(node));
 ptr2->data = data;
ptr2->Llink = header;
 header->Rlink = ptr2;
 ptr2->Rlink = ptr1;
}
void DeleteNodeEnd(node *header)
{
node *ptr1 = header;
 while (ptr1->Rlink != NULL)
ptr1 = ptr1->Rlink;
node *ptr2 = ptr1->Llink;
 ptr2->Rlink = NULL; free(ptr1);
}
void InsertNodeEnd(node *header, int data)
{
node *ptr1 = header;
 while (ptr1->Rlink != NULL)
ptr1 = ptr1->Rlink;
node *ptr2 = (node *)malloc(sizeof(node));
 ptr2->Rlink = NULL;
 ptr2->data = data;
ptr2->Llink = ptr1;
 ptr1->Rlink = ptr2;
}
void DeleteNode(node *header, int key)
{
node *ptr1 = header;
 node *ptr2;
 int postion = 0;
 while (ptr1->data != key && ptr1->Rlink != NULL)
{
 ptr1 = ptr1->Rlink; postion++;
}
if (ptr1->data == key)
{
if (ptr1->Rlink == NULL)
{
DeleteNodeEnd(header);
}
else if (postion == 1)
{
DeleteNodeFirst(header);
}
else
{
 ptr2 = ptr1->Llink;
 ptr2->Rlink = ptr1->Rlink;
 ptr1->Rlink->Llink = ptr2;
 free(ptr1);
}
}
else
{
printf("Element not present in the list");
}
}
void InsertNode(node *header, int pos, int data)
{
node *ptr1 = header;
 node *ptr2 = (node *)malloc(sizeof(node));
 int postion = 0;
 while (postion != pos && ptr1->Rlink != NULL)
{
 ptr1 = ptr1->Rlink; postion++;
}
if (postion == pos)
{
 if (postion == 1)
{
InsertNodeFirst(header, data);
}
else
{
ptr2->data = data;
 ptr1->Llink->Rlink = ptr2;
 ptr2->Llink = ptr1->Llink;
 ptr1->Llink = ptr2;
 ptr2->Rlink = ptr1;
}
}
else
{
printf("Invalid postion\n");
}
}
int main()
{
printf("Enter the number of nodes you want in the linked list: ");
 int x;
scanf("%d", &x);
node *header = CreateNode(x);
 TraverseNode(header);
int y; 
  char c; 
  int option;
 printf("Operations\n1 - Deletion from the front\n2 Deletion from the end\n3 - Deletion from any position\n4 - Insertion from the front\n5 - Insetion from the end\n6 - Insertion from any position\n7 - Display\n");
do
{
 printf("Enter(1  2  3  4) :");
 scanf("%d", &option);
 switch (option)
{
case 1:
DeleteNodeFirst(header); 
     break;
case 2:
DeleteNodeEnd(header); 
     break;
case 3:
printf("Enter key :");
scanf("%d", &y); 
     DeleteNode(header, y); 
     break;
case 4:
printf("Enter data :"); 
     scanf("%d", &y); 
     InsertNodeFirst(header, y); 
     break;
case 5:
printf("Enter data :"); 
     scanf("%d", &y);
     InsertNodeEnd(header, y); 
     break;
case 6:
 printf("Enter the position and data :");
int pos;
scanf("%d %d", &pos, &y);
 InsertNode(header, pos, y); 
     break;
case 7:
 TraverseNode(header);
     break;
default:
 printf("Wrong option"); break;
}
printf("Do want to perform more operations ?(y/n) :");
 scanf(" %c", &c);
} while (c == 'y' || c == 'Y');
 return 0;
}
