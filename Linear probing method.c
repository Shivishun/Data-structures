#include <stdio.h>

#define SIZE 10 

int hash(int key) {
    return key % SIZE;
}

void insert(int hashTable[], int key) {
    int index = hash(key);

    while (hashTable[index] != -1) {
        index = (index + 1) % SIZE;
    }

    hashTable[index] = key;
}

void display(int hashTable[]) {
    printf("Hash Table:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d: %d\n", i, hashTable[i]);
    }
}

int main() {
    int hashTable[SIZE];
    
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
    }

    int keys[] = {12, 25, 35, 45, 26, 19, 22, 10, 32};
    int numKeys = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < numKeys; i++) {
        insert(hashTable, keys[i]);
    }

    display(hashTable);

    return 0;
}