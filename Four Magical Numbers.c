#include<stdio.h>
int max(int arr[],int n)
{
    int i;
    int max_value=arr[0];
    for(i=1; i<n; i++)
    {
        if(max_value<arr[i])
            max_value=arr[i];
    }
    return max_value;
}
int min(int arr[],int n)
{
    int min_value=arr[0];
    for(int i=1; i<n; i++)
    {
        if(min_value>arr[i])
        {
            min_value=arr[i];
        }
    }
    return min_value;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%u",&arr[i]);
        }

        /*for(int i=0; i<n; i++)
        {
            printf("%d ",arr[i]);
        }*/
        int max_pro=0,min_pro=0,max_sum=0,min_sum=0;
        int m=max(arr,n);
        //printf("\n%d",m);
        int a=min(arr,n);
        //printf("\n%d",a);
        for(int i=0; i<n; i++)
        {
            if(arr[i]<0)
            {
                max_pro=a*a;
            }
            else if(arr[i]>0)
            {
                max_pro=m*m;
            }
            if(arr[i]>0)
            {
                min_pro=a*a;
            }
            else if(arr[i]<0)
            {
                min_pro=m*m;
            }
            if(arr[i]>0)
            {
                max_sum=m*2;
            }
            else if(arr[i]<0)
            {
                max_sum=m*2;
            }
            if(arr[i]>0)
            {
                min_sum=a*2;
            }
            else if(arr[i]<0)
            {
                min_sum=a*2;
            }
        }
        printf("%d %d %d %d\n",max_pro,min_pro,max_sum,min_sum);
    }
    return 0;
}

