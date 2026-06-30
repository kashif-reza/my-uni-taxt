
#include <stdio.h>
#define MAX 100

// Stack structure
typedef struct {
    int arr[MAX];
    int top;
} Stack;

// Initialize stack
void init(Stack *s) {
    s->top = -1;
}

// Check if stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Check if stack is full
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// push(int): Add element to top
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow!\n");
        return;
    }
    s->arr[++s->top] = value;
}

// pop(): Remove and return top element
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow!\n");
        return -1; // special value
    }
    return s->arr[s->top--];
}

// Display stack
void display(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }

    printf("Current Stack: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    Stack s;
    init(&s);

    // Sample Input
    push(&s, 5);
    push(&s, 10);

    int popped = pop(&s);
    printf("Top element popped: %d\n", popped);

    display(&s);

    return 0;
}
