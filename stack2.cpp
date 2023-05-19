#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 100;

class Stack {
private:
    string arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(string box) {
        if (isFull()) {
            cout << "Gudang penuh!" << endl;
            return;
        }
        arr[++top] = box;
        cout << "Menambahkan kardus \"" << box << "\" ke dalam gudang." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Gudang kosong!" << endl;
            return;
        }
        string box = arr[top--];
        cout << "Mengeluarkan kardus \"" << box << "\" dari gudang." << endl;
    }

    string peek() {
        if (isEmpty()) {
            cout << "Gudang kosong!" << endl;
            return "";
        }
        return arr[top];
    }
};

int main() {
    Stack gudang;

    int menu;
    string kardus;

    do {
        cout << "===== Program Gudang Kardus =====" << endl;
        cout << "1. Tambah Kardus" << endl;
        cout << "2. Keluarkan Kardus" << endl;
        cout << "3. Kardus Paling Atas" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> menu;

        switch (menu) {
            case 1:
                cout << "Masukkan nama kardus: ";
                cin.ignore();
                getline(cin, kardus);
                gudang.push(kardus);
                break;
            case 2:
                gudang.pop();
                break;
            case 3:
                cout << "Kardus paling atas di gudang: " << gudang.peek() << endl;
                break;
            case 0:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Menu tidak valid!" << endl;
                break;
        }

        cout << endl;
    } while (menu != 0);

    return 0;
}