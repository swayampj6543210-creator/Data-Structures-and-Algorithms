#include <stdio.h>

 int row, column, i, j;
int main()
{
    printf("enter the number of rows :");
    scanf("%d", &row);
    printf("enter the number of column :");
    scanf("%d", &column);
    
   int arr[row][column]; //problem was that you were using rows and columns before it being assigned a value thru scanf!
                        //The values of row,column is first supposed to taken in by scanf and only then to be used in the program.
  
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("enter the %d%d element of the matrix :", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }


    for (int i  = 0; i < row;i++)
    {
        for (int j = 0;  j < column; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
// #include<stdio.h>

// int main (){
//     int marks[2][4]={{1,2,3,4},{1,2,3,4}};
//      for (int i=0;i<2;i++){
//         for (int j=0;j<4;j++){
//             printf("%d ",marks[i][j]);

//         }
//         printf("\n");

//      }

//     return 0;
// }