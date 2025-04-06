#include <iostream>
#include <math.h>

int main()
{
    printf("1 exercise");
    printf("\n");
    int game = 450, game_discount = 85, game_new = 0;
    game_new = (450 * 85) / 100;
    printf("Your age is %d", game_new);
    printf("\n\n");

    printf("2 exercise");
    printf("\n");
    int age = 0, birthday = 0;
    printf("Enter year of your birthday:");
    scanf_s("%d", &birthday);
    age = 2025 - birthday;
    printf("Your age is %d", age);
    printf("\n\n");

    printf("3 exercise");
    printf("\n");
    int x_1 = 0, x_2 = 0, y_2 = 0, y_1 = 0;
    float result = 0;
    printf("Enter x_1:");
    scanf_s("%d", &x_1);
    printf("\n");
    printf("Enter x_2:");
    scanf_s("%d", &x_2);
    printf("\n");
    printf("Enter y_1:");
    scanf_s("%d", &y_1);
    printf("\n");
    printf("Enter y_2:");
    scanf_s("%d", &y_2);
    result = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
    printf("result: %.2f", result);
    printf("\n\n");

    printf("4 exercise");
    printf("\n");
    int discount = 0;
    float product = 0, new_price = 0;
    printf("Enter price of product:");
    scanf_s("%f", &product);
    printf("\n");
    printf("Enter discount of product:");
    scanf_s("%d", &discount);
    new_price = product - (product * discount) / 100;
    printf("New price is %.2f", new_price);
    printf("\n\n");

    printf("5 exercise");
    printf("\n");
    int number = 0, digit_1 = 0, digit_2 = 0, digit_3 = 0, sume = 0;
    printf("Enter a three-digit number:");
    scanf_s("%d", &number);
    printf("\n");
    digit_1 = number / 100;
    digit_2 = (number % 100) / 10;
    digit_3 = (number % 100) % 10;
    sume = digit_1 + digit_2 + digit_3;
    printf("sume: %d", sume);
    printf("\n\n");

    printf("Creative task\n");
    int choose = 0;
    float temp = 0, guess_num = 37, play_num = 0;
    printf("Lets play the game 'Guess number'. Rule: you have to guess the number\n");
    printf("Write the number you think it is:");
    scanf_s("%f", &play_num);
    printf("Choose operation which will give you hint:\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. /\n");
    printf("Enter num from 1 to 3:");
    scanf_s("%d", &choose);
    while (play_num != guess_num) {
        switch (choose) {
        case 1:
            temp = guess_num + play_num;
            printf("If your num + guess_num, you get %.1f\n", temp);
            printf("Enter your num again:");
            scanf_s("%f", &play_num);
            if (play_num == guess_num) {
                printf("Congratulation, you guessed");
            }
            else {
                printf("Enter num of operation again:");
                scanf_s("%d", &choose);
            }
            break;
        case 2:
            temp = guess_num - play_num;
            printf("If your guess_num - your num, you get %.1f\n", temp);
            printf("Enter your num again:");
            scanf_s("%f", &play_num);
            if (play_num == guess_num) {
                printf("Congratulation, you guessed");
            }
            else {
                printf("Enter num of operation again:");
                scanf_s("%d", &choose);
            }
            break;
        case 3:
            temp = guess_num / play_num;
            printf("If your guess_num / your num, you get %.1f\n", temp);
            printf("Enter your num again:");
            scanf_s("%f", &play_num);
            if (play_num == guess_num) {
                printf("Congratulation, you guessed");
            }
            else {
                printf("Enter num of operation again:");
                scanf_s("%d", &choose);
            }
            break;
        }
    }

    return 0;
}