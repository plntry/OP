#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
#include "Header.h"
using namespace std;

int input_size() {      //ввід розмірності

    srand(time(NULL));
    int size;           //розмірність матриці
    cin >> size;
    return size;
}

int** arr_gener(int size) {                     //генерація

    int** arr = new int* [size];
    for (int i = 0; i < size; i++) {
        arr[i] = new int[size];
        for (int j = 0; j < size; j++) {
            arr[i][j] = rand() % 199 - 100;
        }
    }
    return arr;
}

void arr_output(int** arr, int size) {          //вивід

    cout << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << setw(5) << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int max_up(int** arr, int size) {

    int max_el = arr[0][1];                     //змінна для збереження максимального елементу, починаємо перевірку з другого елементу першого рядка (без головної діагоналі)
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (max_el < arr[i][j]) {
                max_el = arr[i][j];
            }
        }
    }
    cout << "maximim: " << max_el << endl;
    return max_el;
}

int sum_up(int** arr, int size) {

    int summ = 0;                               //змінна для збереження суми елементів над головною діагоналлю матриці
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            summ += arr[i][j];
        }

    }
    cout << "sum: " << summ << endl;
    return summ;
}

float aver_up(int** arr, int size) {

    float summ = 0;                             //сума елементів над головною діагоналлю матриці
    float count = 0;                            //кількість елементів над головною діагоналлю матриці
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            summ += arr[i][j];
            count++;
        }

    }
    cout << "average: " << fixed << setprecision(2) << summ / count << endl;
    return summ / count;
}