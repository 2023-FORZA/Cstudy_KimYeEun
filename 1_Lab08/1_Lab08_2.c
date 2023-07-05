//10825
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct score {
	char name[20];
	int ko;
	int eng;
	int math;
};

void merge(struct score* arr, int low, int mid, int high) {
	int leftSize = mid - low + 1;
	int rightSize = high - mid;

	struct score* left = (struct score*)malloc(leftSize * sizeof(struct score));
	struct score* right = (struct score*)malloc(rightSize * sizeof(struct score));

	for (int i = 0; i < leftSize; i++)
		left[i] = arr[low + i];
	for (int j = 0; j < rightSize; j++)
		right[j] = arr[mid + 1 + j];

	int i = 0, j = 0, k = low;
	while (i < leftSize && j < rightSize) {
		if (left[i].ko > right[j].ko || (left[i].ko == right[j].ko && left[i].eng < right[j].eng) ||
			(left[i].ko == right[j].ko && left[i].eng == right[j].eng && left[i].math > right[j].math) ||
			(left[i].ko == right[j].ko && left[i].eng == right[j].eng && left[i].math == right[j].math && strcmp(left[i].name, right[j].name) < 0)) {
			arr[k] = left[i];
			i++;
		}
		else {
			arr[k] = right[j];
			j++;
		}
		k++;
	}

	while (i < leftSize) {
		arr[k] = left[i];
		i++;
		k++;
	}

	while (j < rightSize) {
		arr[k] = right[j];
		j++;
		k++;
	}

	free(left);
	free(right);
}

void mergeSort(struct score* arr, int low, int high) {
	if (low < high) {
		int mid = low + (high - low) / 2;

		mergeSort(arr, low, mid);
		mergeSort(arr, mid + 1, high);

		merge(arr, low, mid, high);
	}
}

int main() {
	int T;
	scanf("%d", &T);

	struct score* s = (struct score*)malloc(T * sizeof(struct score));

	for (int i = 0; i < T; i++) {
		scanf("%s %d %d %d", s[i].name, &s[i].ko, &s[i].eng, &s[i].math);
	}

	mergeSort(s, 0, T - 1);

	for (int i = 0; i < T; i++) {
		printf("%s\n", s[i].name);
	}

	free(s);
	return 0;
}
