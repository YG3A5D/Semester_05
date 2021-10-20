/*
Cryptography_&_Cyber_Security_Practical_Lab_03
Topic: Homophonic_Substitution_Cipher
Author: 2019BTCS088 
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    
    //char a[3][26] = {{0,1,2,3,4,5,6,7,8,9,10,11,}};
    char c[3][26] = {{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}};
    
    char a[26]= {"\0"};
    int n[26]={0},i,j,k;
    
        
    // For clearing 
    
    // Taking Plain text from user 
    printf("Please enter your text");
    scanf("&s",a);
        
    printf("\n\n Encrypted Text");
        for(i = 0 ; a[i] !='\0' ; a++){
        
            n[i] = c[rand()%3][a[i]-97]; 
            printf("%d" , n[i]);
    }
    
    printf("\n\n Decrypted Text");
    for(i = 0 ; n[i] !='\0' ; i++){
        
        for(j = 0 ; j < 3 ; j++){
            
            for(k = 0 ; k < 26 ; k++){
                if(n[i] == c[j][k])  goto aa;
            
            } aa: printf("%c" ,k + 'a');
            
        }
           
    }
}
