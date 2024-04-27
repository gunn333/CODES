#include<stdio.h>
#include<stdbool.h>
#define MAX 100
typedef struct stack{
	char arr[MAX];
	int top;
	int cap;
}stack;
void init_stack(stack *s){
	s -> top = -1;
	s -> cap = MAX;
}
void push(stack *s, char data){
	if(s -> top >= s -> cap - 1){
		printf("Stack Overflow\n");
		return;
	}
	s -> top = s -> top + 1;
	s -> arr[s -> top] = data;
}
void pop(stack *s){
	if(s -> top <= -1){
		printf("Stack Underflow\n");
		return;
	}
	s -> top = s -> top - 1;
}
char top(stack *s){
	if(s -> top <= -1) return 0;
	return s -> arr[s -> top];
}
bool empty(stack *s){
	return s -> top == -1;
}
int size(stack *s){
	return s -> top + 1;
}
bool balanced(char arr[]){
	stack s;
	init_stack(&s);
	for(int i = 0; arr[i]; i++){
		switch(arr[i]){
		case '{':
		case '(':
		case '[':
			push(&s, arr[i]);
			break;
		case '}':
			if(top(&s) == '{') pop(&s);
			else return false;
			break;
		case ']':
			if(top(&s) == '[') pop(&s);
			else return false;
			break;
		case ')':
			if(top(&s) == '(') pop(&s);
			else return false;
			break;
		}
	}
	return empty(&s);
}
int main(){
	char arr[MAX];
	printf("Enter the expression: ");
	scanf("%s", arr);
	if(balanced(arr)) printf("yes\n");
	else printf("no\n");
	return 0;
}