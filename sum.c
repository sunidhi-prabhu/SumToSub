#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num1,num2,res,choice;
    printf("Enter two no.s\n");
    scanf("%d %d",&num1,&num2);
    printf("\nEnter 1 for sum and 2 for difference: ");
    scanf("%d",&choice);
    if(choice==1)
        res=num1+num2;
    else if(choice==2)
        res=num1-num2;
    else
    {
        printf("Invalid choice!!\n");
        exit(0);
    }
    printf("the result is %d\n",res);
}
