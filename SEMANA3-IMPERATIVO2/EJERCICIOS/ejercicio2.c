/*Implemente un programa que, dadas 2 matrices A y B,
permita calcular la suma de ambas y almacenarlas en una
matriz C (que no lea datos).*/

#include <stdio.h>

int main(){
    int A[3][3] = {
                    {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}
    };
    
    int B[3][3] = {
                    {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}
    };
    
    int C[3][3];
    
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
        
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

    
}