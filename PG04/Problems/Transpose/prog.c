#include <stdio.h>

void read_array( int row, int col, int a[row][col])
{
    int i,j;
    printf("Enter values for %d rows with each row having %d numbers> ", row, col);
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &a[i][j]);
        }
    }
}
void fill_arr(int row, int col,int b[row][col], int a[row][col])
{
    int i,j;
    for(i=0; i<row;i++){
        for(j=0; j<col; j++){
            b[i][j] = a[j][i];
        }
    }
}
void print_arr(int row, int col, int a[row][col])
{
    int i,j;
    printf("Transpose: \n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void read_array( int row, int col, int a[row][col]);
void fill_arr(int row, int col,int b[row][col], int a[row][col]);
void print_arr(int row, int col, int a[row][col]);

int main(void){
    int r1,c1;
    printf("Enter number of rows =");
    scanf("%d", &r1);
    printf("Enter number of columns =");
    scanf("%d", &c1);
    int arr[r1][c1];
    read_array(r1,c1,arr);
    int arr2[c1][r1];
    fill_arr(c1,r1,arr2,arr);
    print_arr(c1,r1,arr2);
}