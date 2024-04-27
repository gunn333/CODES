#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct stack
{
	char arr[50];
	int top;
	int cap;
} stack;

void init_stack(stack *s)
{
	s->cap = 50;
	s->top = -1;
}

void push(stack *s, char data)
{
	if (s->top == s->cap - 1)
	{
		printf("Stack Overflow\n");
		return;
	}
	s->top = s->top + 1;
	s->arr[s->top] = data;
}

void pop(stack *s)
{
	if (s->top == -1)
	{
		printf("Stack Underflow\n");
		return;
	}
	s->top = s->top - 1;
}

char top(stack *s)
{
	if (s->top == -1)
		return '\0';
	return s->arr[s->top];
}

int size(stack *s)
{
	return s->top + 1;
}

bool empty(stack *s)
{
	return s->top == -1;
}

void arr_reverse(char *arr)
{
	stack s;
	init_stack(&s);
	for (int i = 0; i < strlen(arr); i++)
	{
		push(&s, arr[i]);
	}
	for (int i = 0; i < strlen(arr); i++)
	{
		arr[i] = top(&s);
		pop(&s);
	}
}
int main()
{
	char *arr; // declare str as a pointer to char
	printf("Enter a string: ");
	arr = strdup(fgets(arr, 50, stdin)); // read str from user input using fgets and strdup
	arr_reverse(arr);					 // call str_reverse function
	puts(arr);							 // print str using puts
	free(arr);							 // free the memory allocated for str
	return 0;
}
