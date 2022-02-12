#include<stdio.h>
int main(){
    int num;
    printf("Enter a positive integer");
    scanf("%d",&num);
    switch(num%2){
        case 0:
        printf("%d is an Even number",num);
        break;
        case 1:
        printf("%d is an ODD number",num);
        break;
    }
    return 0;

