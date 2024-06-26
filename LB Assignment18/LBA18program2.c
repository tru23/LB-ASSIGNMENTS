#include <stdio.h>


void Pattern(int iRows, int iCol) {
    for (int i = 0; i < iRows; i++) {
        for (int j = 0; j < iCol; j++) {
            if (i + j >= iCol - 1) {
                printf("@ ");
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

 
   Pattern(rows, columns);

    return 0;
}
