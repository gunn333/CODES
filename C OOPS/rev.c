
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 1000
int top = 0, count = 0;
char temp[max];
char output[max];

void push(char t)
{
    if (top == (max-1)){
        printf("Stack Overflow\n");
    }
    else{
        temp[++top] = t;
    }
}
void pop()
{
    if (top == 0){
        printf("Stack Empty!\n");
    }
    else{
        output[count++] = temp[top--];
    }
}

int main()
{
    char str[1000];
    //Taking String Input
    printf("Enter the String you want to be reversed:\n");
    gets(str);
    int length=strlen(str);
    //Pushing all string char in a stack
    for (int i = 0; i < length; i++){
        push(str[i]);
    }
    //Popping out char and putting it in output array
    for (int i = 0; i < length; i++){
        pop();
    }
    //Printing final output array
    for (int i = 0; i < length; i++){
        printf("%c", output[i]);
    }
    printf("\n");
    return 0;
}