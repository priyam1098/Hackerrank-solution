#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf(“%[^\n]%*c”,name);
/*means that all the characters entered as the input, including the spaces,
until we hit the enter button are stored in the variable, name;provided we allocate sufficient memory for the variable.*/
    scanf("%[^\n]%*c", &s); 
    printf("Hello, World!\n%s",s);
  	
    return 0;
}
