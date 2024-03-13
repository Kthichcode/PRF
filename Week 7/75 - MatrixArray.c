#include <stdio.h>

int main(){
	int rows, cols, matrix[10][10];
	printf("Input numbers of rows: ");
	scanf("%d", &rows);
	printf("Input numbers of colums: ");
	scanf("%d", &cols);
	
	inputMatrix(matrix, rows, cols);
	outputMatrix(matrix, rows, cols);
	
	return 0;
}

void inputMatrix(int matrix[10][10], int row, int col){
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("Input element in rows %d and colums %d: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
}

void outputMatrix(int matrix[10][10], int row, int col){
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}
