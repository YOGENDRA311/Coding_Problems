#include <stdio.h>

int main()

{
int r,c,i,j ,first[5][5], second[5][5], sum[5][5];
printf("Enter the number of rows and columns of matrix\n");
scanf("%d %d", &r, &c);
printf("Enter the elements of first matrix\n");
for (i = 0; i < r; i++){
for (j = 0; j < c; j++){
scanf("%d", &first[i][j]);}}
printf("Enter the elements of second matrix\n");
for (i = 0; i < r; i++){
for (j = 0; j < c; j++){
scanf("%d", &second[i][j]);
}}
printf("Sum of entered matrices:-\n");
for (i = 0; i < r; i++){
for (j = 0; j < c; j++){
sum[i][j] = first[i][j] + second[i][j];
printf("%d\t", sum[i][j]);
}
printf("\n");
}
return 0;
}
