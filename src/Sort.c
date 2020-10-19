
#include "Sort.h"

void sort(int *v, int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = i+1; j < size; j++) {
            if (v[i] > v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}
