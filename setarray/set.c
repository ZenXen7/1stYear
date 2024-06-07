#include <stdio.h>

#define MAX 10

typedef struct {
    int elements[MAX];
    int count;
} Set;

void initialize(Set *s) {
    s->count = 0;
}

void display(const Set *s) {
    printf("Elements:\n");
    if (s->count == 0) {
        printf("Set is empty.\n");
    } else {
        printf("[%d", s->elements[0]);
        for (int i = 1; i < s->count; i++) {
            printf(", %d", s->elements[i]);
        }
        printf("]\n");
    }
}


void add(Set *s, int elem) {
    if (s->count == MAX) {
        printf("Set is full. Max cardinality is %d. You cannot add another element anymore.\n", MAX);
        return;
    }

    for (int i = 0; i < s->count; i++) {
        if (s->elements[i] == elem) {
            printf("\n\nFail: Element %d is already in Set.\n", elem);
            return;
        }
    }

    s->elements[s->count] = elem;
    s->count++;
}

int contains(const Set *s, int elem) {
    for (int i = 0; i < s->count; i++) {
        if (s->elements[i] == elem) {
            return 1;
        }
    }
    return 0;
}

int cardinality(const Set *s) {
    return s->count;
}

int isEmpty(const Set *s) {
    return (s->count == 0);
}

void getUnion(Set *result, const Set *s1, const Set *s2) {
    initialize(result);

    for (int i = 0; i < s1->count; i++) {
        add(result, s1->elements[i]);
    }

    for (int i = 0; i < s2->count; i++) {
        add(result, s2->elements[i]);
    }
}

void intersection(Set *result, const Set *s1, const Set *s2) {
    initialize(result);

    for (int i = 0; i < s1->count; i++) {
        if (contains(s2, s1->elements[i])) {
            add(result, s1->elements[i]);
        }
    }
}

void difference(Set *result, const Set *s1, const Set *s2) {
    initialize(result);

    for (int i = 0; i < s1->count; i++) {
        if (!contains(s2, s1->elements[i])) {
            add(result, s1->elements[i]);
        }
    }
}

int subset(const Set *s1, const Set *s2) {
    for (int i = 0; i < s1->count; i++) {
        if (!contains(s2, s1->elements[i])) {
            return 0;
        }
    }
    return 1;
}

int disjoint(const Set *s1, const Set *s2) {
    for (int i = 0; i < s1->count; i++) {
        if (contains(s2, s1->elements[i])) {
            return 0;
        }
    }
    return 1;
}

int equal(const Set *s1, const Set *s2) {
    if (s1->count != s2->count) {
        return 0;
    }

    for (int i = 0; i < s1->count; i++) {
        if (!contains(s2, s1->elements[i])) {
            return 0;
        }
    }
    return 1;
}

void menu() {
    printf("------ SET PROGRAM ------\n");
    printf("[1] Initialize Set\n");
    printf("[2] Display Set\n");
    printf("[3] Add element\n");
    printf("[4] Check if element exists in Set\n");
    printf("[5] Display Set Cardinality\n");
    printf("[6] Check if Set is empty\n");
    printf("[7] Unite Set1 and Set2\n");
    printf("[8] Intersect Set1 and Set2\n");
    printf("[9] Subtract Set1 from Set2\n");
    printf("[10] Check if Set1 is a Subset of Set2\n");
    printf("[11] Check if two sets are Disjoint\n");
    printf("[12] Check if Set1 and Set2 are equal\n");
    printf("[13] Exit\n\n");
}