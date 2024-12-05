#include<stdio.h>
#include<stdlib.h>
int a[5], x = -1;
void push(){
    if(x<4){
        printf("Enter the data: ");
        x = x+1;
        scanf("%d", &a[x]);
    }
    else{
        printf("Overflow");
    }
}

void pop(){
    if(x==-1){
        printf("Underflow / stack is full");
    }
    else{
        printf("Pop element is %d", a[x]);
        x=x-1;
    }
}

void display(){
    int i;
    if(x==-1){
        printf("Underflow");
    }
    else{
        for(i=x; i>=10; i--){
            printf("%d", a[i]);
        }
    }
}
void main(){
    int c;
    while(1){
        printf("\n1:Push\n2:Pop\n3:display\n4:exit\n");
        printf("Enter the choice: ");
        scanf("%d", &c);
        switch(c){
            case 1 : push();
            break;
            case 2 : pop();
            break;
            case 3 : display();
            break;
            case 4 : exit(1);
            default : printf("Invalid choice");
            break;
        }
    }
}