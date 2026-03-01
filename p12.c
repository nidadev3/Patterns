#include <stdio.h>

int main()
{
    int rows = 4, cols = 5;
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;
    int num = 1;
    int arr[4][5];

    while (top <= bottom && left <= right)
    {
        // Left to Right
        for (int i = left; i <= right; i++)
            arr[top][i] = num++;
        top++;

        // Top to Bottom
        for (int i = top; i <= bottom; i++)
            arr[i][right] = num++;
        right--;

        // Right to Left
        for (int i = right; i >= left; i--)
            arr[bottom][i] = num++;
        bottom--;

        // Bottom to Top
        for (int i = bottom; i >= top; i--)
            arr[i][left] = num++;
        left++;
    }

    // Print matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%3d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}