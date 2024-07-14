// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int mat[2][2];
    int mat2[2][2];
    
    // taking input 
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
           printf("enter mat[%d][%d] : ",i,j);
        scanf("%d",&mat[i][j]);
    }
    }
    
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("enter mat2[%d][%d] : ",i,j);
        scanf("%d",&mat2[i][j]);
    }
    }
    
    // multiplying the matrices...
        int temp,row,col,k;
 

    for(row=0;row<2;row++){
    
        for(col=0;col<2;col++){
            //temp += mat[i][j]*mat2[j][i];
            // row[i][k] , row[i][k`]
            // col[k][j] , col[k`][j]
            temp = 0;
            for(k=0;k<2;k++){
                temp += mat[row][k]*mat2[k][col];
                //temp1 += mat[i][k]*mat2[k][j];
            }
            printf("%d %d",temp);
    }
    printf("\n");
    }  
        

    
    


    return 0;
}
