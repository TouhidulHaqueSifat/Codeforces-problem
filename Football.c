#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int x=0,y=0,z=0;
    for(int i=0; i<strlen(s); i++)
    {




        if(s[i]=='0')
        {
            x++;
            y=0;
        }
        else
        {

            y++;
            x=0;
        }


        if(x==7||y==7)
        {
            z=1;


        }


    }
    if(z==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
