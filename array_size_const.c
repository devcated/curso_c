#include <stdio.h>
int main()
{
    const int MAX = 3;
    char game[MAX][MAX];

    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            if (i == j) game[i][j] = 'X';
            else game[i][j] = 'O';
                
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++)
            printf("%c ", game[j][i]);
        printf("\n");
    }    
    return 0;
}





