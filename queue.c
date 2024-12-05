#include<stdio.h>
#include<stdlib.h>
int a[5], f=-1, r=-1;
void end(){
    if(f==-1 && r==-1){
        f++;
        r++;
        printf("Enter the no. ");
        scanf("%d", &a[r]);
    }
    else if(r<4){
        r++;
        printf("Enter the no. ");
        scanf("%d", &a[r]);
    }
    else{
        printf("Q full");
    }
}

 void delt(){
    if ((f==-1 && r==-1)||(f>r)){
        printf("Q is empty");
    }
    else{
        printf("Deleted item %d\n", a[f]);
        f = f+1;
    }
 }
 void disp(){
    int i;
    if((f==-1&&r==-1)||(f>r)){
        printf("Q is empty");
    }
    else{
        for(i=f; i<=r; i++){
            printf("Display item %d\n", a[i]);
        }
    }
 }

 void main(){
    int c; 
    while(1){
        printf("\n1:end\n2:delt\n3:disp\n4:exit\n");
        printf("Enter the choice: ");
        scanf("%d", &c);
        switch(c){
            case 1 : end();
            break;
            case 2 : delt();
            break;
            case 3 : disp();
            break;
            case 4 : exit(1);
            default : printf("Wrong choice");
            break;

        }
    }
 }