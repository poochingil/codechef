#include <stdio.h> 
int main()
{
	int T;
    long int a,rem,ans=0;
	scanf("%d",&T);
	while(T>0)
	{
	    
	    scanf("%d",&a);
	    while(a>0)
        {
            rem=a%10;
            ans=ans+rem;
            a=a/10;
        }
	    printf("%d\n",ans);
        ans=0;
	    T--;
	}
	return 0;
}