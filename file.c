/*
Name: James Gona Mkutano
Reg No: CT100/G/30611/26
Description: This is a C program to find the volume of a cylinder
*/

#include <stdio.h>

int main() {
	int radius;
	int height;
    float pi=3.142;
	float volume;
    float surface_area;

    
    printf("Enter the radius of the cylinder: \t");
    scanf("%d", &radius);
    
    printf("Enter the height of the cylinder: \t");
    scanf("%d", &height);
    
    volume = pi * radius * radius * height;
    surface_area = 2 * pi * radius * radius + 2 * pi * radius * height;
    
    printf("The volume of the cylinder is: %f\n", volume);
    printf("The surface_area is: %f\n", surface_area);
    
    return 0;
}
