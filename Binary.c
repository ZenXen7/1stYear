#include <stdio.h>
#include"set.c"

int main() {
    Set set1, set2, result;
    int choice, element;

    initialize(&set1);
    initialize(&set2);
    initialize(&result);

     do {
        menu();
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Choose Set:\n");
                printf("[1] Set1\n");
                printf("[2] Set2\n");
                printf("Choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        initialize(&set1);
                        printf("Set1 initialized.\n");
                        break;

                    case 2:
                        initialize(&set2);
                        printf("Set2 initialized.\n");
                        break;

                    default:
                        printf("Invalid choice.\n");
                        break;
                }
                break;

        switch (choice) {
            case 2:
                printf("Choose Set:\n");
                printf("[1] Set1\n");
                printf("[2] Set2\n");
                printf("[3] Result\n");
                printf("Choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        printf("Elements:\n");
                        display(&set1);
                        break;

                    case 2:
                        printf("Elements:\n");
                        display(&set2);
                        break;

                    case 3:
                        printf("Elements:\n");
                        display(&result);
                        break;

                    default:
                        printf("Invalid choice.\n");
                        break;
                }
                break;

            case 3:
                printf("Enter element: ");
                scanf("%d", &element);
                printf("Choose Set:\n");
                printf("[1] Set1\n");
                printf("[2] Set2\n");
                printf("Choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        add(&set1, element);
                        break;

                    case 2:
                        add(&set2, element);
                        break;

                    default:
                        printf("Invalid choice.\n");
                        break;
                }
                break;

            
            case 4:
                printf("Enter element: ");
                scanf("%d", &element);
                printf("Choose Set:\n");
                printf("[1] Set1\n");
                printf("[2] Set2\n");
                printf("Choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        if (contains(&set1, element)) {
                            printf("Element %d exists in Set1.\n", element);
                        } else {
                            printf("Element %d does not exist in Set1.\n", element);
                        }
                        break;

                    case 2:
                        if (contains(&set2, element)) {
                            printf("Element %d exists in Set2.\n", element);
                        } else {
                            printf("Element %d does not exist in Set2.\n", element);
                        }
                        break;

                    default:
                        printf("Invalid choice.\n");
                        break;
                }
                break;

            case 5:
                printf("Choose Set:\n");
                printf("[1] Set1\n");
                printf("[2] Set2\n");
                printf("Choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        printf("Cardinality of Set1: %d\n", cardinality(&set1));
                        break;

                    case 2:
                        printf("Cardinality of Set2: %d\n", cardinality(&set2));
                        break;

                    default:
                        printf("Invalid choice.\n");
                        break;
                }
                break;

            case 6:
                printf("Choose Set:\n");
                printf("[1] Set1\n");
                printf("[2] Set2\n");
                printf("Choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                     if (isEmpty(&set1)) {
                            printf("Set1 is empty.\n");
                        } else {
                            printf("Set1 is not empty.\n");
                        }
                        break;

                    case 2:
                        if (isEmpty(&set2)) {
                            printf("Set2 is empty.\n");
                        } else {
                            printf("Set2 is not empty.\n");
                        }
                        break;

                    default:
                        printf("Invalid choice.\n");
                        break;
                }
                break;

            case 7:
                getUnion(&result, &set1, &set2);
                printf("Union of Set1 and Set2:\n");
                display(&result);
                break;

            case 8:
                intersection(&result, &set1, &set2);
                printf("Intersection of Set1 and Set2:\n");
                display(&result);
                break;

            case 9:
                difference(&result, &set1, &set2);
                printf("Difference of Set1 and Set2 (Set1 - Set2):\n");
                display(&result);
                break;

            case 10:
                if (subset(&set1, &set2)) {
                    printf("Set1 is a subset of Set2.\n");
                } else {
                    printf("Set1 is not a subset of Set2.\n");
                }
                break;

            case 11:
                if (disjoint(&set1, &set2)) {
                    printf("Set1 and Set2 are disjoint.\n");
                } else {
                    printf("Set1 and Set2 are not disjoint.\n");
                }
                break;

            case 12:
                if (equal(&set1, &set2)) {
                    printf("Set1 and Set2 are equal.\n");
                } else {
                    printf("Set1 and Set2 are not equal.\n");
                }
                break;

            case 13:
                printf("Exiting the program...\n");
                break;

            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 13);

    return 0;
     
     }

}