#include <stdio.h>

int main()
{
    int i, j, rows;

    /* Input number of rows from user */
    //printf("Enter rows: ");
    char s[200];
    scanf("%d", &rows);
    scanf("%s",s);

    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<=rows - i; j++)
        {
            printf(" ");
        }

        /* Print stars after spaces */
        for(j=1; j<=rows; j++)
        {
            printf("%s",s);
        }

        /* Move to the next line */
        printf("\n");
    }

    return 0;
}
