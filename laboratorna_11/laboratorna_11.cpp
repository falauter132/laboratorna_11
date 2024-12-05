#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    int* A = new int[n];

    cout << "Введіть елементи масиву:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Елементи масиву у зворотному порядку:" << endl;
    for (int i = n - 1; i >= 0; i--) {
        cout << A[i] << " ";
    }

    return 0;
}

//33//////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    double* A = new double[n];

    cout << "Введіть елементи масиву:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] < A[j + 1]) {
                double temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    cout << "Масив після сортування за спаданням:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

//44////////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
 
    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    int* A = new int[n];

    cout << "Введіть елементи масиву:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Елементи з парними індексами:" << endl;
    for (int i = 0; i < n; i += 2) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Елементи, які є непарними числами:" << endl;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 != 0) {
            cout << A[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

//55///////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    double* A = new double[n];

    for (int i = 0; i < n; i++) {
        A[i] = (rand() % 21) - 10;
    }

    int pos = 0;
    int neg = 0;

    for (int i = 0; i < n; i++) {
        if (A[i] > 0) {
            pos++;
        }
        else if (A[i] < 0) {
            neg++;
        }
    }

    if (pos > neg) {
        cout << "Більше додатних чисел." << endl;
    }
    else if (neg > pos) {
        cout << "Більше від'ємних чисел." << endl;
    }
    else {
        cout << "Кількість додатних і від'ємних чисел однакова." << endl;
    }

    return 0;
}

//77///////////////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 5;
    double A[n][n];

    cout << "Введіть елементи матриці A:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Головна діагональ: ";
    for (int i = 0; i < n; i++) {
        cout << A[i][i] << " ";
    }
    cout << endl;

    cout << "Бічна діагональ: ";
    for (int i = 0; i < n; i++) {
        cout << A[i][n - 1 - i] << " ";
    }
    cout << endl;

    cout << "Елементи вище головної діагоналі, збільшені в 2 рази:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << 2 * A[i][j] << " ";
        }
    }
    cout << endl;

    return 0;
}