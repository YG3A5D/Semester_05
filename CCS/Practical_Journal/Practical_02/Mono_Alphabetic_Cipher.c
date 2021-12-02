/*
Cryptography_&_Cyber_Security_Practical_Lab_02
Topic: Mono_Alphabhetic_Cipher
Author: 2019BTCS088 
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
//#include <iostream>

int main()
{
    // Defining Key Array ;
    //char keys[26] = [4,5,1,3,2,8,9,12,11,10,5,7,8,12,14,5,8,4,3,9,];
    
        // Defining Key Array ;
        char keys_st[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        
        char keys_module[26]={'E','H','X','K','V','U','T','S','R','Q','P','O','N','M','L','W','J','I','Y','G','F','Z','D','C','B','A'};
        
        static int i,j;
    
        char p[20]={'\0'},c[20]={'\0'},r[20]={'\0'};
        
        printf("\n Please enter your Plain Text:-");
        // printf("\n");
        gets(p);
            
            //converting plain text into cipher text (encryption)
            printf("-------------------------------\n FOR ENCRYPTION");
            for(i=0;i<strlen(p);i++)
            {
                        for(j=0;j<26;j++)
                    {
                        if(keys_st[j]==p[i])
                        {
                            c[i]=keys_module[j];
                        }
                    }
            }
            printf("\n Cipher text is: %s",c);

            //converting cipher text into plain text (decryption)
            printf("\n FOR DECRYPTION");
            for(i=0;i<strlen(c);i++)
            {
                        for(j=0;j<26;j++)
                        {
                        if(keys_module[j]==c[i])
                        {
                                    r[i]=keys_st[j];
                        }
                        }
            }
            //clrscr();
            printf("\n \n Plain text is: %s",r);
            getch();
}
