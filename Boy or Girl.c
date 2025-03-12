#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int count=0,flag=0;
    for(int i=0;i<strlen(s);i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(s[i]==s[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            count++;

        }
        flag=0;
    }
    //int a=strlen(s)-count;
    //printf("%d\n",a);
    //printf("%d\n",strlen(s));
    if(count%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    printf("%d",count);
    return 0;
}
