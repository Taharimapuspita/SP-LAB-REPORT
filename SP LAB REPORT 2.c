#include <stdio.h>

int main() {
double length, width, base, height, radius;
int choice;
double area;
double pi = 3.14;
printf("Choose a shape to calculate the area:\n");
printf("1. Circle\n");
printf("2. Rectangle\n");
printf("3. Triangle\n");
printf("Enter your choice (1-3): ");
scanf("%d", &choice);


switch (choice) {
case 1:
    printf("Enter the radius of circle: ");
    scanf("%lf", &radius);
    area = pi * radius * radius;
    printf("Area of circle is %.2lf\n", area);
    break;

case 2:
  printf("Enter the length and width of rectangle: ");
  scanf("%lf %lf", &length, &width);
  area = length * width;
  printf("Area of rectangle is %.2lf\n", area);
break;

case 3:
    printf("Enter the base and height of triangle: ");
    scanf("%lf %lf", &base, &height);
    area = 0.5 * base * height;
    printf("Area of triangle is %.2lf\n", area);
break;

    default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
