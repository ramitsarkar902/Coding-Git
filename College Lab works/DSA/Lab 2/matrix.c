#include <stdio.h>
int main(){
  int row,col;
  printf("Enter the row size of matrix:\n");
  scanf("%d", &row);
  printf("Enter the col size of matrix:\n");
  scanf("%d", &col);
    int m1[row][col];
    printf("Enter elements for matrix 1\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    int m2[row][col];
    printf("Enter elements for matrix 2\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    int res[row][col];int ch;
    printf("_ _ _MENU_ _ _\n");
    printf("1. Addition\n2.Substraction\n3.Multiplication\n");
    printf("Enter the option:\n");
    scanf("%d",&ch);
    
    switch(ch){
      case 1:
      //addition part
      {
         for (int i = 0; i < row; ++i)
    for (int j = 0; j < col; ++j) {
      res[i][j] = m1[i][j] + m2[i][j];
    }
    printf("The resulting matrix after adding  is\n");

    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        {
            printf("%d  ",res[i][j]);
             if (j == col - 1) {
        printf("\n\n");
      }
        }
    };
      break;

      case 2:
      //substraction part
      {
        for (int i = 0; i < row; ++i)
    for (int j = 0; j < col; ++j) {
      res[i][j] = m1[i][j] - m2[i][j];
    }
    printf("The resulting matrix after substraction  is\n");

    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        {
            printf("%d  ",res[i][j]);
             if (j == col - 1) {
        printf("\n\n");
      }
    
  }
    
    }
    break;

    case 3:
    {
      for(int i=0;i<row;i++){    
        for(int j=0;j<col;j++)    
      {       
        res[i][j]=0; 
          for(int k=0;k<col;k++)    
      {    
        res[i][j]+=m1[i][k]*m2[k][j];    
        }    
      }    
    }

    printf("The resulting matrix after multiplication  is\n");

    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        {
            printf("%d  ",res[i][j]);
             if (j == col - 1) {
        printf("\n\n");
      }    
    }
    }
    break;

    default:
    printf("Invalid option\n");
    break;
    
  
    
        }

}