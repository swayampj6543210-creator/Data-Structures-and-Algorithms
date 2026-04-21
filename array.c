#include<stdio.h>

int main (){
    int mark[4];

    for(int i=0;i<4;i++)
    {
      printf("enter the value of %d element of the array :",i+1);
      scanf("%d",&mark[i]); /// address of operator is required even for array, but not for the strings
    }
        printf("the array of numbers is as follows : {");

    for (int j=0;j<4;j++){
        printf("%d",mark[j]);
       
        
    } printf("}\n");
             
    return 0;
}