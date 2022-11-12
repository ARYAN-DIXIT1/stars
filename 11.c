#include<stdio.h>
int main(){
    int num;
printf("enter the value of the number\n");
scanf("%d",&num);
for (int i = 1; i <=num; i++)
{
    for (int j =1; j <=i; j++){
     printf(" ");
        
    }
    

    for (int j = 1; j <=(2*num-(2*i-1)); j++)
    {
        if(j==1 || i==num || j==(2*num-(2*i-1)) || i==1){
        printf("*");}
       else{
           printf(" ");
       }
    }
    
    printf("\n");
    
    
}


return 0;
}