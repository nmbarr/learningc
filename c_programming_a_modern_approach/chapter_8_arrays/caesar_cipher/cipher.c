#include <stdio.h>
#define LENGTH 80

int main(void) {
    char message[LENGTH];
    int i = 0, shift_amount;
    char ch;

    printf("Enter message to be encrypted: ");
    
    while ((ch = getchar()) != '\n' && i < LENGTH - 1) {
        message[i++] = ch;
    }
    message[i] = '\0'; 

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    for (int j = 0; j < i; j++) {
        if (message[j] >= 'A' && message[j] <= 'Z') {
            message[j] = ((message[j] - 'A' + shift_amount) % 26) + 'A';
        } else if (message[j] >= 'a' && message[j] <= 'z') {
            message[j] = ((message[j] - 'a' + shift_amount) % 26) + 'a';
        }
    }

    printf("Encrypted message: %s\n", message);
    return 0;
}
