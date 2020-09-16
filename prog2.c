#include <stdio.h> 
int main()
{
	int T,a,b,ans;
	scanf("%d",&T);
	while(T>0)
	{
	    
	    scanf("%d%d",&a,&b);
	    ans=a+b;
	    printf("%d\n",ans);
	    T--;
	}
	return 0;
}