#include <stdio.h>

#define N 5

int s1[N], s2[N];
int top1 = -1, top2 = -1;
int count = 0;

void push1(int data) {
    if (top1 == N - 1) {
        printf("Queue is full\n");
    } else {
        top1++;
        s1[top1] = data;
    }
}

void push2(int data) {
    if (top2 == N - 1) {
        printf("Queue is full\n");
    } else {
        top2++;
        s2[top2] = data;
    }
}

int pop1() {
    if (top1 == -1) {
        printf("Stack 1 is empty\n");
        return -1;
    } else {
        return s1[top1--];
    }
}

int pop2() {
    if (top2 == -1) {
        printf("Stack 2 is empty\n");
        return -1;
    } else {
        return s2[top2--];
    }
}

void enqueue(int x) {
    push1(x);
    count++;
}

void dequeue() {
    if (top1 == -1 && top2 == -1) {
        printf("Queue is empty\n");
    } else {
        // Move all elements from stack1 to stack2
        for (int i = 0; i < count; i++) {
            int a = pop1();
            push2(a);
        }

        // Pop the front element
        int b = pop2();
        printf("Popped element is %d\n", b);
        count--;

        // Move elements back to stack1
        for (int i = 0; i < count; i++) {
            int a = pop2();
            push1(a);
        }
    }
}

void display() {
    if (top1 == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = 0; i <= top1; i++) {
            printf("%d ", s1[i]);
        }
        printf("\n");
    }
}

int main() {
    int n = 0;
    int x;

    while (1) {
        printf("1. Enqueue | 2. Dequeue | 3. Display | 4. Exit\n\n");
        printf("Select operation (select from 1-4): ");
        scanf("%d", &n);

        switch (n) {
            case 1:
                printf("Enter Value to be Enqueued: ");
                scanf("%d", &x);
                enqueue(x);
                printf("\n");
                break;

            case 2:
                dequeue();
                printf("\n");
                break;

            case 3:
                display();
                printf("\n");
                break;

            case 4:
                return 0;

            default:
                printf("INVALID INPUT\n");
                break;
        }
    }

    return 0;
}