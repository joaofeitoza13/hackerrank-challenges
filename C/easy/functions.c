//HackerRank - C - Practice 4
//URL: https://www.hackerrank.com/challenges/functions-in-c
//Joao Feitoza Bisneto

#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int ans = 0;

    if(a > ans){ ans = a; }
    if(b > ans){ ans = b; }
    if(c > ans){ ans = c; }
    if(d > ans){ ans = d; }

    return ans;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
