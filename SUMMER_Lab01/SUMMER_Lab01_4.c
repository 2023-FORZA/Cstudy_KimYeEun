//2776
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;

typedef struct HashSet {
    int size;
    Node** buckets;
} HashSet;

HashSet* createHashSet(int size) {
    HashSet* set = (HashSet*)malloc(sizeof(HashSet));
    set->size = size;
    set->buckets = (Node**)calloc(size, sizeof(Node*));
    return set;
}

void freeHashSet(HashSet* set) {
    if (set == NULL)
        return;

    for (int i = 0; i < set->size; i++) {
        Node* current = set->buckets[i];
        while (current != NULL) {
            Node* next = current->next;
            free(current);
            current = next;
        }
    }

    free(set->buckets);
    free(set);
}

void insert(HashSet* set, int value) {
    int index = abs(value) % set->size;
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = set->buckets[index];
    set->buckets[index] = newNode;
}

int find(HashSet* set, int value) {
    int index = abs(value) % set->size;
    Node* current = set->buckets[index];
    while (current != NULL) {
        if (current->value == value)
            return 1;
        current = current->next;
    }
    return 0;
}

void solve() {
    int n, m;
    scanf("%d", &n);

    HashSet* set = createHashSet(n * 2);

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        insert(set, num);
    }

    scanf("%d", &m);

    for (int j = 0; j < m; j++) {
        int num;
        scanf("%d", &num);
        printf("%d\n", find(set, num));
    }

    freeHashSet(set);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        solve();
    }

    return 0;
}

//시간초과 나온 코드
#include <stdio.h>
#include<stdlib.h>
int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n, m;

        scanf("%d", &n);
        int* arr1 = (int*)malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr1[i]);
        }

        scanf("%d", &m);
        int* arr2 = (int*)malloc(sizeof(int) * m);
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr2[j]);
        }

        for (int j = 0; j < m; j++) {
            int found = 0;

            for (int i = 0; i < n; i++) {
                if (arr2[j] == arr1[i]) {
                    found = 1;
                    break;
                }
            }

            printf("%d\n", found);
        }

        free(arr1);
        free(arr2);
    }

    return 0;

}