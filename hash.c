#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 13

typedef int datatype;

typedef struct node
{
    datatype key;
    datatype value;
    struct node *next;
} listnode, *linklist;

typedef struct
{
    listnode hashdata[N];
} hash;

hash *hash_create();
int hash_insert(hash *HT, datatype key);
linklist hash_search(hash *HT, datatype key);
void hash_free(hash *HT);
int hash_delete(hash *HT, datatype key);

int main(int argc, char const *argv[])
{
    hash *HT;
    int data[] = {23, 34, 14, 38, 46, 16, 68, 15, 23, 7, 31, 26};
    int i;
    datatype key;
    linklist r;

    if ((HT = hash_create()) == NULL)
    {
        return -1;
    }

    for (i = 0; i < sizeof(data) / sizeof(int); i++)
    {
        hash_insert(HT, data[i]);
    }

    printf("input a number to find:");
    scanf("%d", &key);
    r = hash_search(HT, key);
    if (r == NULL)
        printf("not found\n");
    else
        printf("found %d %d\n", key, r->key);

    hash_delete(HT, 69);

    hash_free(HT);

    return 0;
}


hash *hash_create()
{
    hash *HT;
    if ((HT = (hash *)malloc(sizeof(hash))) == NULL)
    {
        printf("malloc failed\n");
        return NULL;
    }

    memset(HT->hashdata, 0, sizeof(HT->hashdata));
    return HT;
}

int hash_insert(hash *HT, datatype key)
{
    linklist p, q;
    if (HT == NULL)
    {
        printf("HT is NULL\n");
        return -1;
    }

    if ((p = (linklist)malloc(sizeof(listnode))) == NULL)
    {
        printf("malloc failed\n");
        return -1;
    }
    p->key = key;
    p->value = key % N;
    p->next = NULL;

    q = &(HT->hashdata[key % N]);

    while (q->next && p->key > q->next->key)
    {
        q = q->next;
    }

    if (q->next == NULL)
    {
        q->next = p;
        return 0;
    }
    else if (q->next->key == key)
    {
        printf("%d aready exists, insertion of %d failed\n", q->next->key, p->key);
        free(p);
        p = NULL;
        return -1;
    }
    else
    {
        p->next = q->next;
        q->next = p;
        return 0;
    }
}

linklist hash_search(hash *HT, datatype key)
{
    if (HT == NULL)
    {
        printf("HT is NULL\n");
        return NULL;
    }
    linklist p = &(HT->hashdata[key % N]);
    while (p->next && p->next->key < key)
    {
        p = p->next;
    }

    if (p->next == NULL || p->next->key != key)
    {
        return NULL;
    }
    else
    {
        return p->next;
    }
}

void hash_free(hash *HT)
{
    linklist p, q;
    if (HT == NULL)
        return;

    for (int i = 0; i < N; i++)
    {
        p = HT->hashdata[i].next;
        while (p)
        {
            q = p;
            p = p->next;
            printf("free %d\n", q->key);
            free(q);
        }
    }
    free(HT);
    HT = NULL;
}

int hash_delete(hash *HT, datatype key)
{
    if (HT == NULL)
    {
        printf("HT is NULL\n");
        return -1;
    }

    linklist p = &(HT->hashdata[key % N]);
    while (p->next && p->next->key < key)
    {
        p = p->next;
    }

    if (p->next == NULL || p->next->key != key)
    {
        printf("Didn't found %d for deletion\n", key);
        return -1;
    }
    else
    {
        linklist q = p->next;
        p->next = q->next;
        printf("Delete %d\n", key);
        free(q);
        q = NULL;
        return 0;
    }
}