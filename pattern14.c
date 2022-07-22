/*Pattern7: 
5 
4 5 
3 4 5 
2 3 4 5 
1 2 3 4 5
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int row = 0;row < num; row++)
    {
        for(int col = 0;col <= row;col++)
        {
            printf("%d ", num - row +col);
        }
        printf("\n");
    }

    return 0;
}
