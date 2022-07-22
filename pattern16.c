/*pattern26
a 
2 2  
c c c  
4 4 4 4 
e e e e e  
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int row = 0;row < num;row++)
    {
        for(int col = 0;col <= row;col++)
        {
            if((row % 2) == 0)
            {
                printf("%c ", row + 97);
            }
            else
            {
                printf("%d ", row + 1);
            }
        }
        printf("\n");
    }

    return 0;
}
