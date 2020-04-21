#include <stdio.h>
#include <string.h>
#include <math.h>
int main() 
{
    char ch;
    char word[128];
    char sen[128];
    
    scanf("%c", &ch);
    scanf("%s\n", &word);
    scanf("%[^\n]%*c", &sen); /*^\n stands for taking input until a newline isn't encountered. 
    Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.*/
    
    
    printf("%c\n", ch);
    printf("%s\n", word);
    printf("%s\n", sen);

    return 0;
}
