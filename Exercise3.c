/*
3. Input a string and find the smallest and largest word.
Ex:
 __________________________________________________________
| Input: "this is a string with smallest and largest word" |
| Output: "a" "smallest"                                   |
|__________________________________________________________|
*/
/*
3. Input a string and find the smallest and largest word.
Ex:
 __________________________________________________________
| Input: "this is a string with smallest and largest word" |
| Output: "a" "smallest"                                   |
|__________________________________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int max(char x[])
{	
    char b[30];	
    char c[30];		
    int j = 0, maxlength = 0;
    int i = 0;

    for(i = 0; i <= strlen(x); i++){
        if(x[i] != 32 && x[i] != '\0'){
	    b[j++] = x[i];
	}else{
            b[j] = '\0';
            if(strlen(b) > maxlength){
                strcpy(c, b);		// b -> c
                maxlength = strlen(b);	// update maxLength
            }
            j = 0;
        }
    }
    puts(c);
}
int min(char x[])
{	
    char b[30];	
    char c[30];		
    int j = 0, min= strlen(x);
    int i = 0;

    for(i = 0; i <= strlen(x); i++){
        if(x[i] != 32 && x[i] != '\0'){
	    b[j++] = x[i];
	}else{
            b[j] = '\0';
            if(strlen(b) < min){
                strcpy(c, b);		
                min = strlen(b);	
            }
            j = 0;
        }
    }
    puts(c);
}
int main()
{
	char x[]="This is a string";
	max(x);
	min(x);
	return 0;
}
