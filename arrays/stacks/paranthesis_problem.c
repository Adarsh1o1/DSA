#include<stdio.h>
int size=8;
int paranthesis_checker(){
    // printf('%c',arr[2]);
    char arr[8]={};
    int x=0;
    for(int i=0;i<size;i++){
        printf("%d",x);
        if(arr[i]=='{'||arr[i]=='('||arr[i]=='['){
            x++;
            printf("%dff",x);
        }
        else if(arr[i]=='}'||arr[i]==')'||arr[i]==']'){
            x--;
            printf("%dff",x);
            if (x>0){
                break;
            }
        }

    }
    printf("%d",x);
    if (x==0){
        return 1;
    }
}

int main()
{
   char arr[]={'[[{()}]]('};
   if(paranthesis_checker()){
    printf("balanced");
   }
   else{
    printf("not");
   }

return 0;
}
