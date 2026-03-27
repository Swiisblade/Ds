#include <iostream>
using namespace std;

int main() {
    const int M = 4; // Number of nodes (adjust as needed)
    
    // Adjacency matrix (example graph)
    int A[M][M] = {
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
        {1, 0, 0, 0}
    };

    // Path matrix P initialization
    int P[M][M];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            P[i][j] = (A[i][j] != 0) ? 1 : 0;
        }
    }

    // Warshall’s algorithm to compute path matrix
    for (int k = 0; k < M; k++) {
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < M; j++) {
                P[i][j] = P[i][j] || (P[i][k] && P[k][j]);
            }
        }
    }

    // Output the final path matrix
    cout << "Path matrix (transitive closure):\n";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cout << P[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

