#include <iostream>
#include <vector>

void merge(std::vector<int>& vec, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = vec[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = vec[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        }
        else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int>& vec, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(vec, left, mid);
        mergeSort(vec, mid + 1, right);
        merge(vec, left, mid, right);
    }
}

int main() {
    int n;
    std::vector<int> vec;

    std::cout << "Introduceti numarul de elemente: ";
    std::cin >> n;

    if (n > 100) {
        std::cout << "Numarul maxim de elemente este 100." << std::endl;
        return 1;
    }

    std::cout << "Introduceti elementele: " << std::endl;
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        vec.push_back(element);
    }

    mergeSort(vec, 0, n - 1);

    std::cout << "Vectorul sortat: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
