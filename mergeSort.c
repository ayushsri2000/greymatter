#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}
int main(){
	clock_t start_t, end_t, total_t;
	start_t = clock();
	// int n = sizeof ar / sizeof ar[0];

	int n = rand() % 5000 + 1000;
	int ar[n];
	int i;
	for(i = 0; i<n; i++)
		ar[i] = rand() % 1000;

	mergeSort(ar,0,n-1);

	for(i=0;i<n;i++)
		printf("%d ",ar[i]);

	end_t = clock();
	total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
   printf("\nTotal time taken by CPU: %f\n", total_t  );
}
