#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
#include "Header.h"
using namespace std;

int input_size() {      //��� ���������

    srand(time(NULL));
    int size;           //��������� �������
    cin >> size;
    return size;
}

int** arr_gener(int size) {                     //���������

    int** arr = new int* [size];
    for (int i = 0; i < size; i++) {
        arr[i] = new int[size];
        for (int j = 0; j < size; j++) {
            arr[i][j] = rand() % 199 - 100;
        }
    }
    return arr;
}

void arr_output(int** arr, int size) {          //����

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

    int max_el = arr[0][1];                     //����� ��� ���������� ������������� ��������, �������� �������� � ������� �������� ������� ����� (��� ������� �������)
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

    int summ = 0;                               //����� ��� ���������� ���� �������� ��� �������� ��������� �������
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            summ += arr[i][j];
        }

    }
    cout << "sum: " << summ << endl;
    return summ;
}

float aver_up(int** arr, int size) {

    float summ = 0;                             //���� �������� ��� �������� ��������� �������
    float count = 0;                            //������� �������� ��� �������� ��������� �������
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            summ += arr[i][j];
            count++;
        }

    }
    cout << "average: " << fixed << setprecision(2) << summ / count << endl;
    return summ / count;
}