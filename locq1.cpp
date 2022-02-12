#include<stdio.h>
int main(){
	
    int regno;
    char name[20],branch[20],hobby[20];
    printf("Enter your name:");
    scanf("%s",&name);
    printf("Reg NO:");
    scanf("%d",&regno);
    printf("Branch:");
    scanf("%s",&branch);
    printf("Hobbies:");
    scanf("%s",&hobby);
    printf("My name is %s\nReg No: %d\nBranch: %s\nHobbies: %s", name,regno,branch,hobby);
    return 0;
}
