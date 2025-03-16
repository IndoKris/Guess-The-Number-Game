
#include <stdio.h>

int main() {
    // Reset
    printf("\033[0mDefault Text\n");

    // Foreground colors
    printf("\033[31mThis is Red Text\n");
    printf("\033[32mThis is Green Text\n");
    printf("\033[33mThis is Yellow Text\n");
    printf("\033[34mThis is Blue Text\n");
    printf("\033[35mThis is Magenta Text\n");
    printf("\033[36mThis is Cyan Text\n");

    // Background colors
    printf("\033[41mThis has a Red Background\033[0m\n");
    printf("\033[42mThis has a Green Background\033[0m\n");

    // Combined styles
    printf("\033[1;31;47mBold Red Text on White Background\033[0m\n");
    printf("\033[4;34;46mUnderlined Blue Text on Cyan Background\033[0m\n");

    // Reset the terminal style to default
    printf("\033[0mBack to Default\n");

    return 0;
}
