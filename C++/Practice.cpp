#include <iostream>
#include <vector>

using namespace std;

int countMangoesOnKnapsack(const vector<vector<char>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 'O' && i+1 < rows && grid[i+1][j] == '=') {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int R, C;
    cin >> R >> C;

    vector<vector<char>> grid(R, vector<char>(C));
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }

    int mangoesOnKnapsack = countMangoesOnKnapsack(grid);
    cout << mangoesOnKnapsack << endl;

    return 0;
}
