#include <stdio.h>
void inputMatrix(int matrix[10][10], int row, int col);

int main(){
	int rows, cols, matrix[10][10],i,j;
	printf("Input numbers of rows: ");
	scanf("%d", &rows);
	printf("Input numbers of colums: ");
	scanf("%d", &cols);
	
	inputMatrix(matrix, rows, cols);
	
	int max = matrix[0][0];
	int min = matrix[0][0];
	
	for( i = 0; i < rows; i++){
		for( j = 0; j < cols; j++){
			if(matrix[i][j] > max)
				max = matrix[i][j];
			if(matrix[i][j] < min)
				min = matrix[i][j];
		
		}
	}
	
	printf("Max: %d\n", max);
	printf("Min: %d", min);
	return 0;

}

void inputMatrix(int matrix[10][10], int row, int col){
	int i,j;
	for( i = 0; i < row; i++){
		for( j = 0; j < col; j++){
			printf("Input element in rows %d and colums %d: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
}
