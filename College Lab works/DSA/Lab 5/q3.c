#include <stdio.h>
#include <ctype.h>
char stack[];
int top = -1;int n;

void push(char item){
    if(top>=n-1)printf("\nStack Overflow");
    else{
        top++;
        stack[top]=item;
    }
}

char pop(){
    if(top<0){
        printf("\nStack underflow");
        return -1;
    }

    else{
        return stack[top--];
    }
}

int priority(char x){
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}
int main(){
    printf("Enter the size of the stack:");
    scanf("%d",&n);
    stack[n];
    int expression[n];
    printf("\nEnter the infix expression:");
    scanf("%s",expression);
    char *x, out;
    x = expression;
    printf("\nThe resulting postfix expression is:");
     while(*x != '\0')
    {
        if(isalnum(*x))//isalnum checks whether the character is a alphanumeric character and return 1 else returns 0
            printf("%c ",*x);//printing the character if its not operator
        else if(*x == '(')
            push(*x);
        else if(*x == ')')
        {
            while((out = pop()) != '(')
                printf("%c ", out);
        }
        else
        {
            while(priority(stack[top]) >= priority(*x))//popping elements from stack untill the incoming operator is of low precedence than the stack top.
                printf("%c ",pop());
            push(*x);
        }
        x++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }


}