#include <stdio.h>

// Structure to represent a point in 2D space
struct Point {
    int x;
    int y;
};

// Function to swap the fields of two structures using pointers
void swapFields(struct Point *p1, struct Point *p2) {
    int tempX = p1->x;
    int tempY = p1->y;

    p1->x = p2->x;
    p1->y = p2->y;

    p2->x = tempX;
    p2->y = tempY;
}

int main() {
    struct Point point1, point2;

    // Initialize point1
    point1.x = 2;
    point1.y = 4;

    // Initialize point2
    point2.x = 5;
    point2.y = 7;

    printf("Before swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    // Swap the fields of point1 and point2 using pointers
    swapFields(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}