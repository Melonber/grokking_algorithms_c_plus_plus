#include <iostream>
#include <vector>

int find_smallest(const std::vector<int>& arr) {
    int smallest = arr[0];
    for (int value : arr) {
        if (value < smallest) {
            smallest = value;
        }
    }
    return smallest;
}

std::vector<int> selectionSort(const std::vector<int>& arr) {
    std::vector<int> new_arr;
    std::vector<int> mutable_arr = arr;  // Создаем копию входного вектора

    for (size_t i = 0; i < arr.size(); ++i) {
        int smallest = find_smallest(mutable_arr);

        // Удаляем наименьший элемент из вектора mutable_arr
        auto it = std::find(mutable_arr.begin(), mutable_arr.end(), smallest);
        if (it != mutable_arr.end()) {
            mutable_arr.erase(it);
        }

        // Добавляем наименьший элемент в конец нового вектора
        new_arr.push_back(smallest);
    }

    return new_arr;
}

int main() {
    std::vector<int> arr;
    arr.push_back(23);
    arr.push_back(12);
    arr.push_back(41);
    arr.push_back(2);
    arr.push_back(14);


    std::vector<int> sorted_arr = selectionSort(arr);

    std::cout << "Sorted array: ";
    for (int value : sorted_arr) {
        std::cout << value << " ";
    }

    
    return 0;
}
