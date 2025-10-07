#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "include/caesar.h"

int main() {
    int choice, key;
    char text[256];

    while (1) {
        printf("\n=== Simple Caesar Cipher ===\n");
        printf("1) Encrypt\n2) Decrypt\n3) Exit\n");
        printf("Choose: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Try again.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 3) {
            printf("Exiting...\n");
            break;
        }

        if (choice != 1 && choice != 2) {
            printf("Invalid choice. Try again.\n");
            continue;
        }

        printf("Enter key (1–25): ");
        scanf("%d", &key);
        while (getchar() != '\n'); // clear buffer

        printf("Enter text: ");
        fgets(text, sizeof(text), stdin);
        text[strcspn(text, "\n")] = 0; // remove newline

        if (choice == 1) {
            encrypt(text, key);
            printf("Encrypted text: %s\n", text);
        } else {
            decrypt(text, key);
            printf("Decrypted text: %s\n", text);
        }
    }

    return 0;
}
