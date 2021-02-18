#define _CRT_SECURE_NO_WARNINGS
#include "my_lib.h"

int main() {

	printf("Enter distance\n");
	double distance = get_double_number_on_positive();
	printf("Enter time\n");
	double time = get_double_number_on_positive();
	printf("Enter average speed\n");
	double average_speed = get_double_number_on_positive();

	double from_A_to_B = distance / time;
	printf("Speed from A to B: %lf \n", from_A_to_B);

	double from_B_to_A = distance / (2.0 * distance / average_speed - time);
	printf("Speed from B to A: %lf ", from_B_to_A);
}