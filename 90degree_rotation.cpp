#include <vector>
#include <algorithm>
#include <iostream>

void rotate(std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();

    // Transpose the matrix (swap elements across the main diagonal)
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n; ++i) {
        std::reverse(matrix[i].begin(), matrix[i].end());
    }
}

// Example usage:
// #include <iostream>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate(matrix);

    // After rotation, 'matrix' will contain:
    // {
    //     {7, 4, 1},
    //     {8, 5, 2},
    //     {9, 6, 3}
    // }

    // Print the rotated matrix
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}
