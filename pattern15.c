/*pattern16
a 
b a 
c b a 
d c b a 
e d c b a 
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
            printf("%c ", 97 + row - col);
        }
        printf("\n");
    }

    return 0;
}

