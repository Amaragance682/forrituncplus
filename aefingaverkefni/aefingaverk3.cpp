#include <iostream>
using namespace std;
int main(void) {
int matrix[10][10] = {0};
// Insert your code here

    int* p = (int*)matrix;

    p++;
    p++;
    p++;
    p++;
    p++;
    p++;
    p++;
    p++;
    p++;
    p++;
    p++;
    p++;


for(int i = 0; i < 10; i++) {
for(int j = 0; j < 10; j++) {
cout.width(4);
cout << matrix[i][j];
}
cout << endl;
}
return 0;
}
