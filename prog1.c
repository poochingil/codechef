#include<stdio.h>
int main()
{
    float bal,y;
    int x;
    
    scanf("%d %f",&x,&bal);
    
    
    if(x%5==0 && x<=(bal-0.5))
    {
        
           y=bal-x-0.5;
        
    }
    else
    {
        y=bal;
    }
    printf("%0.2f",y);
    return 0;

}
