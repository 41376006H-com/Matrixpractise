#include<stdio.h>
#include"Matrixpractise.h"
void MatrixAdd(float* matrixA,float* matrixB)
{
    int i,j;
    float matrixC[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            matrixC[i][j]=matrixA[i*3+j]+matrixB[i*3+j];
        }
    }
    printf("The sum of the two matrices is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%f\t",matrixC[i][j]);
        }
        printf("\n");
    }
}