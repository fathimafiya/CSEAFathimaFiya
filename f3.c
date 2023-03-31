#include <stdio.h>

#define MAX_SIZE 100 // maximum size of the stack

int stack[MAX_SIZE]; // array to store the elements of the stack
int top = -1; // variable to keep track of the top element of the stack

// function to check if the stack is empty
int isEmpty() {
   if(top == -1)
      return 1;
   else
      return 0;
}

// function to check if the stack is full
int isFull() {
   if(top == MAX_SIZE-1)
      return 1;
   else
      return 0;
}

// function to push an element onto the stack
void push(int element) {
   if(isFull())
      printf("Error: Stack is full\n");
   else {
      top++;
      stack[top] = element;
      printf("%d pushed onto stack\n", element);
   }
}

// function to pop an element from the stack
void pop() {
   if(isEmpty())
      printf("Error: Stack is empty\n");
   else {
      printf("%d popped from stack\n", stack[top]);
      top--;
   }
}

// function to display the elements of the stack
void display() {
   if(isEmpty())
      printf("Stack is empty\n");
   else {
      printf("Elements of stack are:\n");
      for(int i=top; i>=0; i--)
         printf("%d\n", stack[i]);
   }
}

// main function to test the stack implementation
int main() {
   push(10);
   push(20);
   push(30);
   push(40);
   display();
   pop();
   display();
   push(50);
   display();
   return 0;
}