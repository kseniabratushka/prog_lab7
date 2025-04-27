#include <stdio.h>
#include <math.h>

#define N 5
struct Point 
{
    double x;
    double y;
};

int main() 
{
    system("chcp 65001");
    struct Point points[N];
    double distances[N-1];
    int i;

    for (i = 0; i < N; i += 1) 
    {
        printf("Введіть координати точки %d (x y): ", i+1);
        scanf("%lf %lf", &points[i].x, &points[i].y);
    }

    for (i = 0; i < N-1; i += 1) 
    {
        double dx = points[i+1].x - points[i].x;
        double dy = points[i+1].y - points[i].y;
        
        #include "distance_formula.txt"
        
        distances[i] = d;
    }

    for (i = 0; i < N-1; i += 1) 
    {
        printf("Відстань між точкою %d і %d: %.2lf\n", i+1, i+2, distances[i]);
    }
    return 0;
}
