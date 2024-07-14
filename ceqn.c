#include<stdio.h>

int matrix[2][2];
int det();
int trace();

int main(){

   // input
   int i=0,j=0;
    printf("Enter the values for matrix :- \n");
   
        printf("matrix[0,0]:" );
        scanf("%d",&matrix[0][0]);

        printf("matrix[0,1]:" );
        scanf("%d",&matrix[0][1]);

        printf("matrix[1,0]:" );
        scanf("%d",&matrix[1][0]);

        printf("matrix[1,1]:" );
        scanf("%d",&matrix[1][1]);
    


   

   printf("x^2 + %dx + %d",trace(),det());
    
    return 0;

}

int det(){
    return matrix[0][0]*matrix[1][1]-matrix[1][0]*matrix[0][1];
}
int trace(){
    return matrix[0][0]+matrix[1][1];
}