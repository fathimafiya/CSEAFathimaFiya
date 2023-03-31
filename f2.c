#include <stdio.h>
#include <math.h>

// structure to represent a point in 2D space
typedef struct {
   double x;
   double y;
} Point;

// function to calculate the distance between two points
double distance(Point p1, Point p2) {
   double dx = p1.x - p2.x;
   double dy = p1.y - p2.y;
   return sqrt(dx*dx + dy*dy);
}

// function to calculate the distance between two lines
double distanceBetweenLines(Point p1, Point p2, Point q1, Point q2) {
   double d1 = distance(p1, q1);
   double d2 = distance(p1, q2);
   double d3 = distance(p2, q1);
   double d4 = distance(p2, q2);
   double minDistance = d1;

   if(d2 < minDistance)
      minDistance = d2;
   if(d3 < minDistance)
      minDistance = d3;
   if(d4 < minDistance)
      minDistance = d4;

   return minDistance;
}
// main function to test the program
int main() {
   Point p1 = {1, 1};
   Point p2 = {2, 2};
   Point q1 = {3, 1};
   Point q2 = {4, 2};
   double dist = distanceBetweenLines(p1, p2, q1, q2);
   printf("Distance between the lines is: %f\n", dist);
   return 0;
}