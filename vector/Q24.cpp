Q [18-09-2024 01:49] Basu Slathia: Rina is managing the inventory for a library, where each row of a 20 matrix represents the number of different genres of books available on each shelf. To get a better overview, she
wants to replace each number in a row with the sum of all
numbers in that row.
12318744
Write a program to help Rina transform the matrix accordingly.
Input format:
The that In of put conate of an integert. representin thin m
number of test cases.
• For each test case:
The first line contains two integers R and C, representing the
number gf rows and columps
The get R lines each contain C space-separated integers,
12318744
representina the count of books of a specific aenre on a shelf.
[18-09-2024 01:50] Basu Slathia: Input l:
2
3
4
8 2 49
4 5 6 1
7 8 9
3
2.5
12357
3 4
3 9 6
Output 1:
23 23 23 23
16 16 16 16
27 27 27 27
18 18 18 18
18
за 30 30
30
38
Fill your cod
3
Winch #incl
int
ma
st
Fa
10
Answered
Bookmarked
Skippea c/ 5
Not Viewved
0/5
Saved in serve
5/5
View More
Input 2:
1
3 3
48
65
83
45
21
76
71 32 98
Output 2:
196 196 196
142 142 142
201 201 201




solve :
#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int R, C;
        cin >> R >> C;

        int matrix[R][C];
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                cin >> matrix[i][j];
            }
        }

        for (int i = 0; i < R; i++) {
            int rowSum = 0;
            for (int j = 0; j < C; j++) {
                rowSum += matrix[i][j];
            }

            for (int j = 0; j < C; j++) {
                cout << rowSum << " ";
            }
            cout << endl;
        }
    }

    return 0;
}