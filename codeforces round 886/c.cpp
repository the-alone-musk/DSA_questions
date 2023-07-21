// C. Word on the Paper
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// On an 8×8
//  grid of dots, a word consisting of lowercase Latin letters is written vertically in one column, from top to bottom. What is it?

// Input
// The input consists of multiple test cases. The first line of the input contains a single integer t
//  (1≤t≤1000
// ) — the number of test cases.

// Each test case consists of 8
//  lines, each containing 8
//  characters. Each character in the grid is either .
//  (representing a dot) or a lowercase Latin letter (a
// –z
// ).

// The word lies entirely in a single column and is continuous from the beginning to the ending (without gaps). See the sample input for better understanding.

// Output
// For each test case, output a single line containing the word made up of lowercase Latin letters (
// ) that is written vertically in one column from top to bottom.

// Examplea
// –z
// inputCopy
// 5
// ........
// ........
// ........
// ........
// ...i....
// ........
// ........
// ........
// ........
// .l......
// .o......
// .s......
// .t......
// ........
// ........
// ........
// ........
// ........
// ........
// ........
// ......t.
// ......h.
// ......e.
// ........
// ........
// ........
// ........
// ........
// .......g
// .......a
// .......m
// .......e
// a.......
// a.......
// a.......
// a.......
// a.......
// a.......
// a.......
// a.......
// outputCopy
// i
// lost
// the
// game
// aaaaaaaa




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        // Initialize an 8x8 grid with characters.
        vector<vector<char>> grid(8, vector<char>(8));

        // Input the characters into the grid.
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> grid[i][j];
            }
        }

        string word;
        bool foundWord = false;

        // Find the word vertically in the grid.
        for (int j = 0; j < 8; j++) {
            for (int i = 0; i < 8; i++) {
                if (grid[i][j] != '.') {
                    // Extract the word from the grid vertically.
                    for (int k = i; k < 8; k++) {
                        if (grid[k][j] != '.') {
                            word += grid[k][j];
                        } else {
                            break; 
                        }
                    }
                    foundWord = true;
                    break; 
                }
            }
            if (foundWord) {
                break;
            }
        }
        cout << word << endl;
    }

    return 0;
}
