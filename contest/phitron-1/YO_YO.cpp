#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Function to generate the pattern
void generatePattern(int N) {
    int grid[N][N];
    int num = 2;
    int row = 0, col = 0;
    int direction = 0; // 0: right, 1: down, 2: left, 3: up

    while (num <= N * N) {
        // Fill right
        if (direction == 0) {
            while (col < N && grid[row][col] == 0) {
                if (isPrime(num)) {
                    grid[row][col] = num;
                    num++;
                }
                col++;
            }
            col--;
            row++;
            direction = 1;
        }
        // Fill down
        else if (direction == 1) {
            while (row < N && grid[row][col] == 0) {
                if (isPrime(num)) {
                    grid[row][col] = num;
                    num++;
                }
                row++;
            }
            row--;
            col--;
            direction = 2;
        }
        // Fill left
        else if (direction == 2) {
            while (col >= 0 && grid[row][col] == 0) {
                if (isPrime(num)) {
                    grid[row][col] = num;
                    num++;
                }
                col--;
            }
            col++;
            row--;
            direction = 3;
        }
        // Fill up
        else if (direction == 3) {
            while (row >= 0 && grid[row][col] == 0) {
                if (isPrime(num)) {
                    grid[row][col] = num;
                    num++;
                }
                row--;
            }
            row++;
            col++;
            direction = 0;
        }
    }

    // Output the pattern
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
  
    cin >> N;

    generatePattern(N);

    return 0;
}
