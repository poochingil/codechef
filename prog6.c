#include<stdio.h>
int main()
{
    int n,k,a,ans=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%k==0)
        {
        ans++;
        }
    }
    printf("%d",ans);
    return 0;
}