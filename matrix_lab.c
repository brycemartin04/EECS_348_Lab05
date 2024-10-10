#include <stdio.h>
// gcc matrix_lab.c -o matrix
#define SIZE 5   //sets the size to 5

void multiplyMatricies(int m1[SIZE][SIZE],int m2[SIZE][SIZE], int multiply[SIZE][SIZE]){   //function to multiply the matricies
    if (SIZE == SIZE){
       for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {     //loops through every value in the matricies
            int sum = 0; // Initialize sum for the current cell
            for (int k = 0; k < SIZE; k++){     //loops through the rows/collums of the matricies
                sum += m1[i][k] * m2[k][j];    //multiplies them and adds to sum

            multiply[i][j] = sum;     //puts the sum in the multiplied matrix
            }
            }   
            }
    }else printf("Invalid Matrix!");  


}

void add_matricies(int m1[SIZE][SIZE],int m2[SIZE][SIZE], int added[SIZE][SIZE]){  //function to add the matricies
    for (int i=0; i<SIZE; i++){
        for (int j=0;j<SIZE; j++){    //loops through all the values in the matricies
            added[i][j] = m1[i][j]+m2[i][j];    //adds all the values at the same index and adds to result matrix
        } 
    }
}

void transposeMatrix(int m[SIZE][SIZE], int transpose[SIZE][SIZE]){     //function to transpose the matrix
    for (int i=0;i<SIZE;i++){
        for (int j=0;j<SIZE;j++){    //loops thorugh all the values in the matrix
            transpose[i][j] = m[j][i];       //flips the rows and colums for each value.
        }
    }

}

void print(int m[SIZE][SIZE]){    //function to print the matrix to the screen
    for (int i=0; i<SIZE;i++){    
        for (int j=0; j<SIZE; j++){   //loops through all the values in the matrix
            printf("%d ",m[i][j]);    //prints each value
        }
        printf("\n"); //adds new line after each row.
    }

}

int main() {
    int m1[SIZE][SIZE] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
};
    int m2[SIZE][SIZE] = {
        {25, 24, 23, 22, 21},
        {20, 19, 18, 17, 16},
        {15, 14, 13, 12, 11},
        {10, 9, 8, 7, 6},
        {5, 4, 3, 2, 1}
};
int added[SIZE][SIZE];
int multiply[SIZE][SIZE];    //initializees the result matrix
int transpose[SIZE][SIZE];

printf("\n");
printf("Add Matrices:");
printf("\n");
printf("\n");
add_matricies(m1,m2,added);    //calls the add matrix function
print(added);
printf("\n");
printf("Multipy Matrices:");
printf("\n");
printf("\n");
multiplyMatricies(m1,m2,multiply);  //calls the multiply matrix function
print(multiply);
printf("\n");
printf("Transpose Matrix:");
printf("\n");
printf("\n");
transposeMatrix(m1,transpose);   //calls teh transpose matrix function
print(transpose);
printf("\n");
return 0;
}