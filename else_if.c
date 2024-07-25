#include <stdio.h>
int main(){
    int a;
    printf("enter your number: ");
    scanf("%d", &a);
    
    if (a >= 24){
        printf("you are pass ");
    }
    else{
        printf("you failed");
    }
}