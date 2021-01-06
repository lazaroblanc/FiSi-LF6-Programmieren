#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

typedef struct point
{
	double x;
	double y;
} point;

typedef struct triangle
{
	point a;
	point b;
	point c;
} triangle;

double calucateDistance2D(point a, point b)
{
	// Calculate distance between two coordinates in a 2D environment
	return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}

point promptForCoordinateInput2D(char pointName[])
{
	// Function to prompt user to input a 2D coordinate

	double x;
	printf("Point %s > X value : ", pointName);
	scanf("%lf", &x);

	double y;
	printf("Point %s > Y value : ", pointName);
	scanf("%lf", &y);
	printf("\n");

	point coordinate;
	coordinate.x = x;
	coordinate.y = y;

	return coordinate;
}

double calculateTriangleCircumference(triangle tri)
{
	// Calculate all 3 sides of the triangle
	double dist_ab = calucateDistance2D(tri.a, tri.b);
	double dist_bc = calucateDistance2D(tri.b, tri.c);
	double dist_ca = calucateDistance2D(tri.c, tri.a);

	double circumference = dist_ab + dist_bc + dist_ca;
	return circumference;
}

double calculateTriangleArea(triangle tri)
{
	double area;
	area = tri.a.x * (tri.b.y - tri.c.y) + tri.b.x * (tri.c.y - tri.a.y) + tri.c.x * (tri.a.y - tri.b.y);
	area = fabs(area / 2);
	return area;
}

int main(int argc, char *argv[])
{
	
	int usePredefinedTriangle;
	printf("(1) Enter coordinates or (2) use demo values? : ");
	scanf("%d", &usePredefinedTriangle);
	printf("\n");
	
	struct point point_A = {0, 0};
	struct point point_B = {0, 30};
	struct point point_C = {30, 15};
	
	triangle tri;
	tri.a = usePredefinedTriangle == 1 ? promptForCoordinateInput2D("A") : point_A;
	tri.b = usePredefinedTriangle == 1 ? promptForCoordinateInput2D("B") : point_B;
	tri.c = usePredefinedTriangle == 1 ? promptForCoordinateInput2D("C") : point_C;

	int option;
	printf("\t(1) Calculate circumference\n");
	printf("\t(2) Calculate area\n");
	printf("\n\tSelect an Option : ");
	scanf("%d", &option);
	printf("\n");
	
	switch (option) {
		case 1: {
			double circumference = calculateTriangleCircumference(tri);
			printf("Circumference : %.2lf\n", circumference);
			break;
		}
		case 2: {
			double area = calculateTriangleArea(tri);
			printf("Area : %.2lf\n", area);
			break;
		}
	}
	
	return 0;
}
