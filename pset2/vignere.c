#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main()
{

	
	int k;
    scanf("%d",&k);
	printf("plaintext : ");
    string s = GetString(); // get text
    printf("ciphertext: "); // print out cipher

// iterate through plain text letter by letter
    for (int i = 0, n = strlen(s) ; i < n; i++)
    {
        // checking if it is lowercase 97 = a to 112 = z and if it + 13 characters along.
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", (((s[i] - 'a') + k) % 26) + 'a'); // print out lowercase with key
        } // if it it between uppercase A and C
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            printf("%c", (((s[i] - 'A') + k) % 26) + 'A'); // print out uppercase with key
        }

        else

        {
            printf("%c", s[i]);
        }
    }

    printf("\n");
return 0;
}
