#include "Header.h"
using namespace std;

int main() {

    int n = input_size();       //розмірність матриць
    int** a = arr_gener(n);     //матриця а
    int** b = arr_gener(n);     //матриця b
    int** c = arr_gener(n);     //матриця c

    arr_output(a, n);
    max_up(a, n);
    sum_up(a, n);
    aver_up(a, n);

    arr_output(b, n);
    max_up(b, n);
    sum_up(b, n);
    aver_up(b, n);


    arr_output(c, n);
    max_up(c, n);
    sum_up(c, n);
    aver_up(c, n);

    return 0;
}
