#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *next;
};

//printing nodes
void printLinkedList(struct node *ptr){
    // struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d -> ",ptr->value);
        ptr=ptr->next;
    }
    if(ptr==NULL){
        printf("NULL\n");
    }
}

void searchLinkList(struct node *ptr,int key){
    int count=0;
    while(ptr!=NULL){
        count++;
        if(ptr->value==key){
            printf("element found at node %d",count);
            return ;
        }
        ptr=ptr->next;
    }
    if (ptr==NULL){
        printf("element not found");
        return;
    }
}

//creating new nodes
struct node *newNode(int value){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->value=value;
    newNode->next=NULL;
    return newNode;
}

void insertAtBeginning(struct node **head,int value){
    struct node *new_node=newNode(value);
    new_node->next=*head;
    *head=new_node;

}

void insertAtEnd(struct node **head,int value){
    struct node *endNode=newNode(value);
    // endNode->next=NULL;
    struct node *last= *head;
    if (*head==NULL){
        *head=newNode;
        return;
    }

    while(last->next!=NULL)
        last=last->next;
    
    last->next=endNode;
    return;
}

void insertAfterLocation(struct node *previous_node,int value){
    struct node *new_node=newNode(value);
    if (previous_node==NULL){
        printf("previous node can't be null");
    }
    new_node->next=previous_node->next;
    previous_node->next=new_node; 
}

void delete(struct node *ptr,int key){
    while(ptr!=NULL){
        if(ptr->value==key){
                    

        }
    }


}

int main()
{
    // struct node *head=NULL;
    // struct node *second=newNode(2);
    // struct node *first=newNode(1);
    // first->next=second;
    // head=first;
    struct node *head=newNode(1);
    struct node *first=newNode(2);
    struct node *second=newNode(3);
    head->next=first;
    first->next=second;
    // printf("%d",first->value);
    printLinkedList(head);

    struct node *h=NULL;
    insertAtBeginning(&h,1);
    // printf("%d",h->next->value);
    insertAtEnd(&h,2);
    insertAfterLocation(h,3);
    insertAfterLocation(h->next,4);
    insertAtEnd(&h,4);
    printLinkedList(h);
    // printf("%d\n",h->value);
    // printf("%d\n",h->next->value);
    // printf("%d\n",h->next->next->value);
    // printf("%d\n",h->next->next->next->value);
    // printf("%d\n",h->next->next->next->next->value);
       // SEARCHING FOR A LINKED LIST
    // searchLinkList(h,4);


 //concatenating two linked list
 second->next=h;
 printLinkedList(head);

    // struct node *first=NULL;
    // struct node *second=NULL;
    // struct node *third=NULL;
    // first=(struct node*)malloc(sizeof(struct node));
    // second=(struct node*)malloc(sizeof(struct node));
    // third=(struct node*)malloc(sizeof(struct node));

    // first->value=1;
    // first->next=second;
    // second->value=2;
    // second->next=third;
    // third->value=3;
    // third->next=NULL;
    // head=first;
    // newNode(4);
    // struct node *fourth=newNode(4);
    // fourth->next=NULL;
    // third->next=fourth;
    // insertAtEnd(&head,4);
    // insertAtEnd(&head,5);
    // insertAtEnd(&head,6);
    // insertAfterLocation(head->next->next->next,99);
    // insertAtBeginning(&head,100);
    // insertAtBeginning(&head,34);
    // // struct node *fifth=newNode(5);
    // // fifth->next=third;
    // // second->next=fifth;
    // insertAtBeginning(&head,3);
    // insertAtEnd(&head,4);
    // insertAfterLocation(head->next,5);
    // // insertAtBeginning(&head,2);
    // insertAtBeginning(&head,1);
    // insertAfterLocation(head,2);
    // printLinkedList(head);
    return 0;
}
