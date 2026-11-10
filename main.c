#include <stdio.h> // бібліотека для printf(), scanf(), getchar(), putchar()
#include <conio.h> // бібліотека для getch()


int roman(int i, int j, char c) // ф-ція виводить символ потрібку кількість разів
{
    while (i >= j)
    {
        putchar(c);
        i = i - j;
    }
    return (i);
}


int main() // основна ф-ція
{
    int a;
    char ch;

    while (1) {

        printf("Enter a integer: ");

        while (scanf("%d%c", &a, &ch) != 2 || ch != '\n') // в "а" воно ззаписує числа, в "ch" - символи
        {
            printf("Invalid input. Please enter an integer: ");
            while ((ch = getchar()) != '\n' && ch != EOF); // очищеє буфер для вводу
        }

        a = roman(a, 1000, 'M');
        a = roman(a, 500, 'D');
        a = roman(a, 100, 'C');
        a = roman(a, 50, 'L');
        a = roman(a, 10, 'X');
        a = roman(a, 5, 'V');
        a = roman(a, 1, 'I');

        printf("\nPress any key to continue or ESC to exit...\n");

        ch = getch(); // ловить клавішу

        if (ch == 27) // escape
            break;
        while ((ch = getchar()) != '\n' && ch != EOF);

    }

    return 0;
}
