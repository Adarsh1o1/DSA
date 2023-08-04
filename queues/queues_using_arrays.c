#include<stdio.h>
#define max_size 5
int queue[max_size],front=-1,rear=-1;

void print_queue(){
    for(int i=front;i<rear;i++){
        printf("%d ",queue[i]);
    }
}

void insert(int value){
    if (rear==max_size){
        printf("queue is full cannot insert %d\n",value);
    }
    else{
        queue[rear]=value;
        rear++;
    }
}

void delete(){

}


int main()
{
front=0,rear=0;
insert(1);
insert(2);
insert(3);
insert(4);
insert(5);
insert(6);
print_queue();
printf("\n%d",rear);
     
return 0;
}
