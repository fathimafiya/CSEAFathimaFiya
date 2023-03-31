#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node {
    float coefficient;
    int exponent;
    struct Node* next;
};

typedef struct Node* Polynomial;

void insert_term(float coefficient, int exponent, Polynomial* head) {
    Polynomial new_node = (Polynomial)malloc(sizeof(struct Node));
    new_node->coefficient = coefficient;
    new_node->exponent = exponent;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
    }
    else {
        Polynomial temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void display_polynomial(Polynomial head) {
    while (head != NULL) {
        printf("%.2fx^%d ", head->coefficient, head->exponent);
        head = head->next;
        if (head != NULL) {
            printf("+ ");
        }
    }
    printf("\n");
}

float evaluate_polynomial(Polynomial head, float x) {
    float result = 0.0;
    while (head != NULL) {
        result += head->coefficient * pow(x, head->exponent);
        head = head->next;
    }
    return result;
}

int main() {
    Polynomial quadratic = NULL;
    float a, b, c;

    printf("Enter the quadratic equation (in the form ax^2 + bx + c):\n");
    printf("a = ");
    scanf("%f", &a);
    insert_term(a, 2, &quadratic);
    printf("b = ");
    scanf("%f", &b);
    insert_term(b, 1, &quadratic);
    printf("c = ");
    scanf("%f", &c);
    insert_term(c, 0, &quadratic);

    printf("The quadratic equation you entered is:\n");
    display_polynomial(quadratic);

    float discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        printf("The quadratic equation has two distinct real roots.\n");
    }
    else if (discriminant == 0) {
        printf("The quadratic equation has one real root.\n");
    }
    else {
        printf("The quadratic equation has no real roots.\n");
    }

    return 0;
}