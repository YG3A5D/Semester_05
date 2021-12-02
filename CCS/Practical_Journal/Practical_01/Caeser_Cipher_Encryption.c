/*
Cryptography_&_Cyber_Security_Practical_Lab_01
Topic: Ceaser_Cipher
Author: 2019BTCS088 
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
        char message[100], ch;
        static int i, key;
        
        printf("Enter a message to encrypt: ");
        gets(message);
        
        printf("Enter key: ");
        scanf("%d", &key);
        
        for(i = 0; message[i] != '\0'; ++i){ 
            ch = message[i];
            if(ch >= 'a' && ch <= 'z'){
                ch = ch + key;
                    if(ch > 'z')
                    {
                       ch = ch - 'z' + 'a' - 1;
                    }
                message[i] = ch;
            }
            else if(ch >= 'A' && ch <= 'Z')  {
                ch = ch + key;
                    if(ch > 'Z')
                    {
                        ch = ch - 'Z' + 'A' - 1;
                    }
                message[i] = ch;
            }
        }
        printf("Encrypted message: %s", message);
        return 0;
}
