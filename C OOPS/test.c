// #include<stdio.h>
// #include<stdbool.h>
// typedef struct stack{
//     int arr[50];
//     int top;
//     int cap;
// }stack;
// void init_stack(stack *s){
//     s ->cap == 50;
//     s ->top = -1;
// }
// void push(stack *s, int data){
//     if(s->top==s->cap-1){
//     printf("Overflow\n");
//     return;
//     }
//     s->top=s->top+1;
//     s->arr[s->top]=data;
// }
// void pop(stack *s){
//     if(s->top==-1){
//     printf("Underflow\n");
//     return;
//     }
//     s->top=s->top-1;
// }
// int top(stack *s){
//     if(s->top==-1) return -1;
//     return s->arr[s->top];
// }
// int size(stack *s){
//     return s->top+1;
// }
// bool empty(stack *s){
//     return s->top==-1;
// }
// int main(){
//     stack s;
//     init_stack(&s);
//     for(int i=0;i<5;i++){
//         push(&s,i+1);
//     }
//     while(!empty(&s)){
//         printf("%d",top(&s));
//         pop(&s);
//     }
//     printf("\n");
//     return 0;
// }
// #include <stdio.h>
// struct temp {
//   int a;
//   int b;
//   int c;
// };
// int main() {
//   struct temp p[] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
// }

// #include<stdio.h>
// enum week{Mon=10, Tue, Wed, Thur, Fri=10, Sat=16, Sun};
// enum day{Mond, Tues, Wedn, Thurs, Frid=18, Satu=11, Sund};
// int main()
// {
//   printf("The value of enum week: %d\t%d\t%d\t%d\t%d\t%d\t%d\n",Mon,Tue,Wed,Thur,Fri,Sat,Sun);
//   printf("The value of enum day: %d\t%d\t%d\t%d\t%d\t%d\t%d",Mond,Tues,Wedn,Thurs,Frid,Satu,Sund);
//   return 0;
// }


// #include<stdio.h>
// enum list{OOPs, Java = 10, C = 2, Python, recursion, greedy};
// int main(){
// 	enum list l1 = Python;
// 	printf("%d\n", l1);
// 	printf("%d\n", sizeof(l1));
// 	printf("%d\n", OOPs);
// 	return 0;
// }

// #include<stdio.h>
// union password{
// 	int i;
// 	float f;
// 	char ch;
// };
// void print_union(union password p){
// 	printf("%d\t%f\t%c\n", p.i, p.f, p.ch);
// }
// int main(){
// 	union password p;
// 	p.i = 122;
// 	print_union(p);
// 	p.f = 3.14;
// 	print_union(p);
// 	p.ch = 'a';
// 	print_union(p);
// 	return 0;
// }



// #include<stdio.h>

// typedef struct Cal{
// 	unsigned int date : 35;
// 	unsigned int : 0;
// 	unsigned int month : 4;
// 	int year;
// }Cal;

// int main(){
// 	Cal cal1 = {17, 8, 2023};
// 	printf("%d %d %d\n", cal1.date, cal1.month, cal1.year );
// 	printf("%d\n", sizeof(cal1));
// 	return 0;
// }

// #include <stdio.h>


// int main()
// {
// 	//__DATE__
// 	printf("%s\n", __DATE__ );
// 	printf("%s\n", __TIME__ );
// 	printf("%s\n", __FILE__ );
// 	printf("%s\n", __LINE__ );
// 	printf("%d\n", __STDC__ );
// 	return 0;
// }'


// #include <stdio.h>

// #pragma startup_func()

// void startup_func(){
// 	printf("Hello\n");
// }

// int main(){
// 	return 0;
// }

// #include <stdio.h>

// #define ll long long int
// #define PI 3.14159
// #define print(x) printf("%f\n", x)

// int main()
// {
// 	ll a = 1000;
// 	printf("%lld\n",a );
// 	print(PI);
// 	return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// #define stack_size 100
// typedef struct stack{
// 	char arr[stack_size];
// 	int top;
// 	int cap;
// }stack;
// void init_stack(stack *s){
// 	s -> top = -1;
// 	s -> cap = stack_size;
// }
// void push(stack *s, char data){
// 	if(s -> top >= s -> cap - 1){
// 		printf("Stack Overflow\n");
// 		return;
// 	}
// 	s -> top = s -> top + 1;
// 	s -> arr[s -> top] = data;
// }
// void pop(stack *s){
// 	if(s -> top <= -1){
// 		printf("Stack Underflow\n");
// 		return;
// 	}
// 	s -> top = s -> top - 1;
// }
// char top(stack *s){
// 	if(s -> top <= -1) return -1;
// 	return s -> arr[s -> top];
// }
// bool empty(stack *s){
// 	return s -> top == -1;
// }
// int size(stack *s){
// 	return s -> top + 1;
// }
// bool is_alpnum(char ch){
// 	if(ch >= '0' && ch <= '9') return true;
// 	if(ch >= 'a' && ch <= 'z') return true;
// 	if(ch >= 'A' && ch <= 'Z') return true;
// 	return false;
// }
// int priority(char ch){
// 	switch(ch){
// 	case '+':
// 	case '-':
// 		return 1;
// 	case '*':
// 	case '/':
// 		return 2;
// 	case '^':
// 		return 3;
// 	}
// 	return -1;
// }
// void in_to_pre(char arr[]){
// 	stack s;
// 	init_stack(&s);
// 	stack exp;
// 	init_stack(&exp);
// 	for(int i = strlen(arr) - 1; i >= 0; i--){
// 		if(is_alpnum(arr[i])){
// 			push(&exp, arr[i]);
// 		}
// 		else if(arr[i] == ' ' || arr[i] == '\t'){
// 			continue;
// 		}
// 		else if(arr[i] == ')'){
// 			push(&s, arr[i]);
// 		}
// 		else if(arr[i] == '('){
// 			while(top(&s) != ')'){
// 				push(&exp, top(&s));
// 				pop(&s);
// 			}
// 			pop(&s);
// 		}
// 		switch(arr[i]){
// 		case'+':
// 		case'-':
// 		case'*':
// 		case'/':
// 		case'^':
// 			while(!empty(&s) && priority(top(&s)) > priority(arr[i])){
// 				push(&exp, top(&s));
// 				pop(&s);
// 			}
// 			push(&s, arr[i]);
// 		}
// 	}
// 	while(!empty(&s)){
// 		push(&exp, top(&s));
// 		pop(&s);
// 	}
// 	while(!empty(&exp)){
// 		printf("%c", top(&exp));
// 		pop(&exp);
// 	}
// 	printf("\n");
// }
// int main(){
// 	char arr[] = "(a+b/c*(d+e)-f)"; 
// 	in_to_pre(arr);
// 	return 0;
// }

// #include <stdio.h>

// typedef union Dis
// {
//     int dis1;
//     long long int dis2;

// } Dis;

// int main()
// {

//     Dis d1;

//     d1.dis1 = 100000;
//     d1.dis2 = 21474836487;

//     printf("%d\n", d1.dis1);
//     printf("%lld\n", d1.dis2); // Either give dis1 value or garbage value


//     // It will print size of largest number in the union
//     printf("%d\n", sizeof(union Dis));
//     return 0;
// }

// #include<stdio.h>
// #include<stdbool.h>
// #include<string.h>
// #include<math.h>
// #define MAX 100 
// typedef struct stack{
//     char arr[MAX];
//     int top;
//     int cap;
// }stack;
// void init_stack(stack *s){
//      s -> cap = MAX;
//      s -> top = -1;
// }
// void push(stack *s,char data){
//     if(s -> top >= s -> cap - 1){
//         printf("Overflow\n");
//         return;
//     }
//     s -> top = s-> top + 1;
//     s -> arr[s -> top] = data;
// }
// void pop(stack *s){
//     if(s -> top <= -1){
//         printf("Underflow");
//         return;
//     }
//     s -> top = s-> top -1;
// }
// int top(stack *s){
//     if(s -> top <= -1) return -1;
//     return s-> arr[s -> top];
// }
// int size(stack *s){
//     return s-> top+1;
// }
// bool empty(stack *s){
//     return s-> top == -1;
// }
// bool is_alphnum(char ch){
//     if(ch>='0'&&ch<='9') return true;
//     if(ch>='a'&&ch<='z') return true;
//     if(ch>='A'&&ch<='Z') return true;
//     return false;
//     }
// int post_eval(char arr[]){
//     stack s;
//     init_stack(&s);
//     int n1,n2;
//     for(int i =0;arr[i];i++){
//         if(arr[i]>='0'&&arr[i]<='9'){
//             push(&s,arr[i]-'0');
//             continue;
//         }
//     int n2= top(&s);pop(&s);
//     int n1= top(&s);pop(&s);
//     switch(arr[i]){
//         case '+':
//         push(&s,n1+n2);
//         break;
//         case '-':
//         push(&s,n1-n2);
//         break;
//         case '*':
//         push(&s,n1*n2);
//         break;
//          case '/':
//         push(&s,n1/n2);
//         break;
//          case '^':
//         push(&s,pow(n1,n2));
//         break;
//     }
//     }
//     return(top(&s));
// }

// int main(){
//     char arr[MAX];
//     printf("Enter expression");
//     scanf("%s",arr);
//     printf("%d",post_eval(arr));
//     return 0;
// }

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, n);

    printf("Sorted array using Bubble Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

