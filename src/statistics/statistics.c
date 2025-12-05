#include "statistics.h"

float mean(int arr[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum / n;
}

int max(int arr[], int n) {
    int m = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > m) m = arr[i];
    return m;
}

int min(int arr[], int n) {
    int m = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] < m) m = arr[i];
    return m;
}
