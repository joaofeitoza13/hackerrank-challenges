//HackerRank - C - Practice 13
//URL: https://www.hackerrank.com/challenges/printing-tokens-/problem
//Joao Feitoza Bisneto

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i;
    char *s;
    s = malloc(1024 * sizeof(char));

    scanf("%[^\n]", s);
    
    s = realloc(s, strlen(s) + 1);
        
    //Write your logic to print the tokens of the sentence here.
    for(i=0; i<strlen(s); i++){
        if(s[i] == ' ' ){
            s[i] = '\n';
        }
		printf("%c", s[i]);
    }
	
    return 0;
}
