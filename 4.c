#include <stdio.h>

int main() {

    typedef struct {
        int x;
        int y;
    } Point;

    Point p = {3, 2};
    Point* ptr = &p;

    printf("Point: x = %d, y = %d\n", ptr->x, ptr->y);

    return 0;
}
