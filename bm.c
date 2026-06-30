
#include <stdio.h>
#include <string.h>
#define MAX 100

// Stack implementation
typedef struct {
    char data[MAX];
    int top;
} Stack;

void init(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, char c) {
    if (!isFull(s)) {
        s->data[++(s->top)] = c;
    }
}

char pop(Stack *s) {
    if (!isEmpty(s)) {
        return s->data[(s->top)--];
    }
    return '\0'; // return null if stack is empty
}

// Function to check if parentheses are balanced
int isBalanced(const char *str) {
    Stack s;
    init(&s);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            push(&s, '(');
        } else if (str[i] == ')') {
            if (isEmpty(&s)) {
                return 0; // unbalanced
            }
            pop(&s);
        }
    }

    return -1; // if stack empty → balanced
}

int main() {

    char input[] = "(()()))";

    if (isBalanced(input)) {
        printf("Is balanced: Yes\n");
    } else {
        printf("Is balanced: No\n");
    }

    return 0;
}
