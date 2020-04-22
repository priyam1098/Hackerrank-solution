#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,b,k,j;
    float c,d,m,n;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    if(a&&b!=0){
    k=a+b;
    j=a-b;
    }
    if(c&&d!=0){
    m=c+d;
    n=c-d;
    }
    printf("%d %d\n%.1f %.1f",k,j,m,n);
    
return 0;
}

	
    
