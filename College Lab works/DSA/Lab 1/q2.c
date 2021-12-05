#include <stdio.h>
#include<string.h>
int main()
{
    
 
    char str[100], ans[100], word[100];
    int i, j = 0, k = 0,n = 0;
    int flag = 0;

    printf("Enter Any String or sentence: ");
    gets(str);

    printf("\n\n Enter the word to remove: ");
    gets(word);

    for(i = 0 ; str[i] != '\0' ; i++)
    {
        k = i;
     
        while(str[i] == word[j])
        {
            i++,j++;
            if(j == strlen(word))
            {
                flag = 1;
                break;
            }
        }
    j = 0;

    if(flag == 0)
        i = k;      
    else
        flag = 0;

    ans[n++] = str[i];
    }

    ans[n] = '\0';
    
    printf("\n\n After Removing Word From String: %s",ans);
}
