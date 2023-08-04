#include <stdio.h>
#define max_size 5
int stack[max_size];
int top=-1;

void print_stack(){
    for(int i=0;i<max_size;i++){
        printf("%d\n",stack[i]);
    }
}

void push(int item){
    if (top>=max_size-1){
        printf("stack is overflow\n");
    }
    else{
        top++;
        stack[top]=item;
    }

}

void pop(){
    if (top<=-1){
        printf("stack is empty\n");
    }
    else{
        printf("poped %d from stack\n",stack[top]);
        stack[top]=0;
        top--;
    }
}


int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    pop();
    pop();
    push(3);
    pop();
    push(90);
    print_stack();
    return 0;
}
