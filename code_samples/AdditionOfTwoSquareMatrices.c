/*
	http://practice.geeksforgeeks.org/problems/addition-of-two-square-matrices/0
	
	Write a program to add two matrices.

	Input
	The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test contains an integer N denoting the size of the square matrix. Then the two square matrix of size N*N is taken as input in next two lines.

	Output:
	For each test case in a new line print separated values of the matrix denoting addition of the two matrices.
	 

	Constraints:
	1<=T<=100
	1<=N<=20
	1<=a[i][j]<=1000

	Example:
	Input:
	2
	4
	1 1 1 1 2 2 2 2 3 3 3 3 4 4 4 4
	1 1 1 1 2 2 2 2 3 3 3 3 4 4 4 4
	2
	1 2 3 4
	3 4 2 1

	Output:
	2 2 2 2 4 4 4 4 6 6 6 6 8 8 8 8 
	4 6 5 5
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	// number of test cases
	unsigned short t;
	scanf("%hu", &t);
	for (int i = 0; i < t; ++i) {
	    // matrix dimension
	    unsigned short n;
	    scanf("%hu", &n);
	    // dynamically allocate memory to store matrices
	    unsigned short **matrix1 = (unsigned short **)malloc(sizeof(unsigned short *) * n);
	    unsigned short **matrix2 = (unsigned short **)malloc(sizeof(unsigned short *) * n);
	    for (int row = 0; row < n; ++row) {
	        matrix1[row] = (unsigned short *)malloc(sizeof(unsigned short) * n);
	        matrix2[row] = (unsigned short *)malloc(sizeof(unsigned short) * n);
	    }
	    // read in values for matrices
	    for (int row = 0; row < n; ++row) {
	        for (int col = 0; col < n; ++col) {
	            scanf("%hu", &matrix1[row][col]);
	        }
	    }
	    for (int row = 0; row < n; ++row) {
	        for (int col = 0; col < n; ++col) {
	            scanf("%hu", &matrix2[row][col]);
	        }
	    }
	    // print out result of addition
	    for (int row = 0; row < n; ++row) {
            for (int col = 0; col < n; ++col) {
                printf("%hu ", matrix1[row][col] + matrix2[row][col]);
            }
	    }
	    putchar('\n');
	    // free memory	    
	    for (int row = 0; row < n; ++row) {
	        free(matrix1[row]);
	        free(matrix2[row]);
	    }
	    free(matrix1);
	    free(matrix2);
	}
	return EXIT_SUCCESS;
}