#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
struct node *create(struct node *);
void display(struct node *);
struct node *insert_beg(struct node *);
void insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
void delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_entire(struct node *);
struct node *sort(struct node *);


int main()
{
    int ch;
    do
    {
    printf("\n\n---------Main Menu----------");
    printf("\n1.Create a list\n2.Display the list\n3.add new node at beginning\n4.add new node at end\n5.add new node before a given node\n6.add new node after a given node\n7.Delete a node from beginning\n8.Delete a node from end\n9.Delete a given node\n10.Delete entire list\n11.sort the list\n12.Exit");
    printf("\n\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
               start = create(start);
               printf("\nLinked list is created");
               break;
        case 2:
              display(start);
              break;
        case 3:
              start = insert_beg(start);
              break;
        case 4:
              insert_end(start);
              break;
        case 5:
              start = insert_before(start);
              break;
        case 6:
              start = insert_after(start);
              break;
        
        case 7:
            start = delete_beg(start);
            break;

        case 8:
              delete_end(start);
              break;
        case 9:
              start = delete_node(start);
              break;
        
        case 10:
              start = delete_entire(start);
              printf("\nList is successfully deleted");
              break;
        case 11:
              start = sort(start);
              printf("\nSuccessfully sort");
              break;
        default:
              printf("\nEnter valid choice....");
    }
    }
    while(ch != 12);
    printf("\n\n");
    return 0;
}
struct node *create(struct node *start)
{
    struct node *new_node,*ptr;
    int num;
    printf("\nEnter -1 as data to end ");
    printf("\nEnter the data: ");
    scanf("%d",&num);
    while(num !=-1)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = num;
        if(start == NULL)
        {
            new_node->next = NULL;
            start=new_node;
        }
        else
        {
            ptr=start;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
                ptr->next=new_node;
                new_node->next=NULL;
        }
        printf("\nEnter the data: ");
        scanf("%d",&num);
    }
    return start;
}
void display(struct node *start)
{
    if(start==NULL)
    {
        printf("\n No element present");
        
    }
    struct node *ptr;
    ptr=start;
    printf("\nElements of list are: ");
    while(ptr != NULL)
    {
        printf("%d-->",ptr->data);
        ptr = ptr->next;
    }
}
struct node *insert_beg(struct node *start)
{
    struct node *new_node;
    int num;
    printf("Enter the data to insert: ");
    scanf("%d",&num);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    new_node->next=start;
    start=new_node;
    return start;  
}
void insert_end(struct node *start)
{
    struct node *new_node,*ptr;
    int num;
    printf("\nEnter the data to insert: ");
    scanf("%d",&num);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    new_node->next=NULL;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=new_node;
}
struct node *insert_before(struct node *start)
{
    struct node *ptr,*preptr,*new_node;
    int num,val;
    printf("\nEnter the data to insert: ");
    scanf("%d",&num);
    new_node =(struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    ptr=start;
    printf("\nEnter after what value you want insert: ");
    scanf("%d",&val);
    while(ptr->data !=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=new_node;
    new_node->next=ptr;
    return start;
}

struct node *insert_after(struct node *start)
{
    struct node *ptr,*preptr,*new_node;
    int num,val;
    printf("\nEnter the data to insert: ");
    scanf("%d",&num);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    ptr=start;
    preptr=ptr;
    printf("\nEnter after what value you want insert: ");
    scanf("%d",&val);
    while(preptr->data != val)
    {
         preptr=ptr;
         ptr=ptr->next;
    }
    preptr->next=new_node;
    new_node->next=ptr;
    return start;
}
struct node *delete_beg(struct node *start)
{
    if(start == NULL)
    {
    printf("\nUnderflow");
    goto l1;
    }
    struct node *ptr;
    ptr=start;
    start=start->next;
    free(ptr);
    l1: return start;
}

void delete_end(struct node *start)
{
    struct node *ptr,*preptr;
    ptr=start;
    while(ptr->next != NULL)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next= NULL;
    free(ptr);
    
}
struct node *delete_node(struct node *start)
{
    struct node *ptr,*preptr;
    int val;
    printf("\nEnter the value of the node to delete: ");
    scanf("%d",&val);
    ptr=start;
    if(ptr->data == val)
    {
        start=delete_beg(start);
        return start;
    }
    else
    {
    while(ptr->data != val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
    return start;
    }
}
struct node *delete_entire(struct node *start)
{
    struct node *ptr;
    if(start!=NULL)
    {
        ptr=start;
        while(ptr!=NULL)
        {
            printf("\n%d is to be delete next",ptr->data);
            start=delete_beg(ptr);
            ptr=start;
        }

    }
    return start;
}

struct node *sort(struct node *start)
{
    struct node *preptr,*ptr;
    int temp;
    preptr=start;
    while(preptr->next !=NULL)
    {
        ptr=preptr->next;
        while(ptr)
        {
            if(ptr->data < preptr->data)
            {
             temp = preptr->data;
             preptr->data = ptr->data;
             ptr->data = temp;
            }
            ptr=ptr->next;
        }
    preptr=preptr->next;
    }
   return start;
}
