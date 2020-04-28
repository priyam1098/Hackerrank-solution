#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int count;
    long int n;
    scanf("%ld", &n);
    while(n){
        int mod;
        mod=n%10;
        count=count+mod;
        n=n/10;
    }
    printf("%d",count);

    return 0;
}
