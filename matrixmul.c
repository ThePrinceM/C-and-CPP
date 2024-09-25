#include <stdio.h>
int main()
{
    int p[2][4],q[4][3];
    printf("enter the matrix");
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
        printf("enter %d %d elements of the matrix ",i,j);
        scanf(" %d",&p[i][j]);
        }
        
    }
    printf("the matrix is:%d %d",p[2][3]);
    return 0;
}