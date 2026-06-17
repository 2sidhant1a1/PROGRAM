# include<stdio.h>
struct node
{
    int data;
    struct node *link;
};
struct node* createNode(int data)
{
    struct node* newNode= (struct node*)malloc(sizeof(struct node*));
    newNode->data=data;
    newNode->link=NULL:
    retrun newNode;
}
void insertEnd(struct node** head, int data)
{
    struct node* newNode= createNode(data);
    if(*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct node* temp= *head;
    while(temp -> link != NuLL)
    {
        temp = temp -> link;
    }
    temp->next = newNode;
}


void main()
{
    struct node *head=NULL;
    head=(struct node)*malloc(sizeof(struct node));

    head->data = 45;
    head->link = ;

    head->data = 55;
    head->link = NULL;
}