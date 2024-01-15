#include <stdio.h>

int count_vowels(const char *s) {
    int count = 0;

    while (*s != '\0') {
        char current_char = *s;


        if (current_char >= 'A' && current_char <= 'Z') {
            current_char += ('a' - 'A');
        }


        if (current_char == 'a' || current_char == 'e' || current_char == 'i' || current_char == 'o' || current_char == 'u') {
            count++;
        }

        s++;
    }

    return count;
}

int main() {
    const char *input_string = "Hello, world!";
    int result = count_vowels(input_string);

    printf("Number of vowels: %d\n", result);

    return 0;
}
