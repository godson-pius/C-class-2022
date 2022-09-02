#include <stdio.h>
#include <string.h>

int main()
{
	char first_str[20] = "John";
	char second_str[20] = "Alex";

	char static_str[20] = "Developer";

	printf("%s\n", strchr(static_str, 'q'));

	printf("Copy function: %s\n", strcpy(first_str, second_str));
	printf("Length function: %lu\n", strlen(first_str));

}