#include <stdio.h> 
int main()
{
	int T;
    
	scanf("%d",&T);
	while(T>0)
	{
	     int a,b,ans=0;
	    scanf("%d %d",&a,&b);
	    ans=a%b;
        printf("%d\n",ans);
    
    ans=0;
    T--;
    }
    return 0;
}
