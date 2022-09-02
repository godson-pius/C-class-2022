#include <stdio.h>

// function Declaration
void get_total(int parameter_arr[]);

int main()
{
    int arr[5];
    int another_arr[5];

    printf("Enter values of the array\n");

    for(int i = 0; i < 5; i++) {
        printf("Enter value for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    //View Sum / Call Function
    get_total(arr);

    for(int i = 0; i < 5; i++) {
        printf("(Another)Enter value for index %d: ", i);
        scanf("%d", &another_arr[i]);
    }

    //View Sum / Call Function
    get_total(another_arr);

}

void get_total(int parameter_arr[]) {
    int sum = 0;

    for (int ctr = 0; ctr < 5; ctr++) {
        sum = sum + parameter_arr[ctr];
    }

    printf("The sum of all elements = %d\n", sum);
}