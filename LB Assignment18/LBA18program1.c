#include <stdio.h>


void printPattern(int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (j == columns - i - 1) {
                printf("# ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }
}

int main() {
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

 
    printPattern(rows, columns);

    return 0;
}
