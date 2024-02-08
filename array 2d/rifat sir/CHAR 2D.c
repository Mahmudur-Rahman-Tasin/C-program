#include <stdio.h>
#include <string.h>

#define MAX_WORDS_N 20
#define MAX_WORDS_M 20
#define MAX_LENGTH_WORD 21 // 20 characters + null terminator

int main() {
    char wordsN[MAX_WORDS_N][MAX_LENGTH_WORD];
    char wordsM[MAX_WORDS_M][MAX_LENGTH_WORD];
    int n, m;

    // Input the number of words for list n
    printf("Enter the number of words for list n: ");
    scanf("%d", &n);

    // Input the words for list n
    printf("Enter %d words for list n:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", wordsN[i]);
    }

    // Input the number of words for list m
    printf("Enter the number of words for list m: ");
    scanf("%d", &m);

    // Input the words for list m
    printf("Enter %d words for list m:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%s", wordsM[i]);
    }

    // Check if each word in list m is in list n
    printf("Words in list m present in list n:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (strcmp(wordsM[i], wordsN[j]) == 0) {
                printf("%s\n", wordsM[i]);
                break;
            }
        }
    }

    return 0;
}
