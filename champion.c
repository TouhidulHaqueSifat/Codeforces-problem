
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    char a[]="champions";
    char b[]="CHAMPIONS";
    int x=0,y=0;
    for(int i=0; i<strlen(s); i++)
    {

        if(s[i]==a[x]||s[i]==b[x])//
        {

            x++;
            y++;
        }


    }
    if(y==9)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;


}
