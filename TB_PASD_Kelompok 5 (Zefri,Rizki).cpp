#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

stack<string> adminUsers;
stack<string> stackUsers;
queue<string> queueUsers;

void displayStack(stack<string> s) {
    if (s.empty()) {
        cout << "Tidak ada barang didalam tumpukan.\n";
        return;
    }

    cout << "Daftar Barang pada Stack:\n";
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}

void stackBusiness() {
    stack<string> Barang;

    int choice;
    string NamaBarang;

    do {
        cout << "\nStack Business\n";
        cout << "1. Masukan Barang\n";
        cout << "2. Keluarkan Barang\n";
        cout << "3. Tampilkan Barang\n";
        cout << "0. Logout\n";
        cout << "Pilih: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukan Barang: ";
                cin >> NamaBarang;
                Barang.push(NamaBarang);
                cout << "Barang Telah dimasukan.\n";
                break;
            case 2:
                if (!Barang.empty()) {
                    Barang.pop();
                    cout << "Barang telah dikeluarkan.\n";
                } else {
                    cout << "Tidak ada barang didalam tumpukan.\n";
                }
                break;
            case 3:
                displayStack(Barang);
                break;
            case 0:
                cout << "Telah log out dari Planel Stack\n";
                break;
            default:
                cout << "Pilihan tidak valid!!!.\n";
                break;
        }
    } while (choice != 0);
}

struct Barang {
    string nama;
    int jumlah;
    double harga;
};

void queueBusiness() {
    queue<Barang> ticketQueue;

    int choice;
    Barang barang;

    do {
        cout << "\nQueue Business\n";
        cout << "1. Penambahan Tiket Antrian Pengambilan Barang\n";
        cout << "2. Pengurangan Tiket Antrian Pengambilan Barang\n";
        cout << "0. Logout\n";
        cout << "Pilih: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan Nama Barang: ";
                cin >> barang.nama;
                cout << "Masukkan Jumlah Barang: ";
                cin >> barang.jumlah;
                cout << "Masukkan Harga Tiket Pengambilan: ";
                cin >> barang.harga;
                ticketQueue.push(barang);
                cout << "Tiket pengambilan sudah ditambahkan.\n";
                break;
            case 2:
                if (!ticketQueue.empty()) {
                    barang = ticketQueue.front();
                    ticketQueue.pop();
                    double totalHarga = barang.jumlah * barang.harga;
                    cout << "Barang " << barang.nama << " dengan jumlah " << barang.jumlah << " sudah diambil.\n";
                    cout << "Total Harga: Rp" << totalHarga << endl;
                } else {
                    cout << "Tidak ada nomor tiket di dalam antrian.\n";
                }
                break;
            case 0:
                cout << "Telah logout dari Panel Queue\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
                break;
        }
    } while (choice != 0);
}

void addUser(string userType) {
    string username, password;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (userType == "admin") {
        adminUsers.push(username);
        cout << "Pengguna admin telah ditambahkan.\n";
    } else if (userType == "stack") {
        stackUsers.push(username);
        cout << "Pengguna stack telah ditambahkan.\n";
    } else if (userType == "queue") {
        queueUsers.push(username);
        cout << "Pengguna queue telah ditambahkan.\n";
    }
}

void removeUser(string userType) {
    if (userType == "admin") {
        if (!adminUsers.empty()) {
            adminUsers.pop();
            cout << "Pengguna admin telah dihapus.\n";
        } else {
            cout << "Tidak ada pengguna admin.\n";
        }
    } else if (userType == "stack") {
        if (!stackUsers.empty()) {
            stackUsers.pop();
            cout << "Pengguna stack telah dihapus.\n";
        } else {
            cout << "Tidak ada pengguna stack.\n";
        }
    } else if (userType == "queue") {
        if (!queueUsers.empty()) {
            queueUsers.pop();
            cout << "Pengguna queue telah dihapus.\n";
        } else {
            cout << "Tidak ada pengguna queue.\n";
        }
    }
}

void updateUser(string userType) {
    string username, newPassword;

    cout << "Username: ";
    cin >> username;
    cout << "New Password: ";
    cin >> newPassword;

    if (userType == "admin") {
        if (!adminUsers.empty()) {
            adminUsers.pop();
            adminUsers.push(username);
            cout << "Pengguna admin telah diperbarui.\n";
        } else {
            cout << "Tidak ada pengguna admin.\n";
        }
    } else if (userType == "stack") {
        if (!stackUsers.empty()) {
            stackUsers.pop();
            stackUsers.push(username);
            cout << "Pengguna stack telah diperbarui.\n";
        } else {
            cout << "Tidak ada pengguna stack.\n";
        }
    } else if (userType == "queue") {
        if (!queueUsers.empty()) {
            queueUsers.pop();
            queueUsers.push(username);
            cout << "Pengguna queue telah diperbarui.\n";
        } else {
            cout << "Tidak ada pengguna queue.\n";
        }
    }
}

void showUsers() {
    cout << "Daftar Pengguna Admin:\n";
    if (!adminUsers.empty()) {
        stack<string> temp = adminUsers;
        while (!temp.empty()) {
            cout << temp.top() << endl;
            temp.pop();
        }
    } else {
        cout << "Tidak ada pengguna admin.\n";
    }

    cout << "\nDaftar Pengguna Stack:\n";
    if (!stackUsers.empty()) {
        stack<string> temp = stackUsers;
        while (!temp.empty()) {
            cout << temp.top() << endl;
            temp.pop();
        }
    } else {
        cout << "Tidak ada pengguna stack.\n";
    }

    cout << "\nDaftar Pengguna Queue:\n";
    if (!queueUsers.empty()) {
        queue<string> temp = queueUsers;
        while (!temp.empty()) {
            cout << temp.front() << endl;
            temp.pop();
        }
    } else {
        cout << "Tidak ada pengguna queue.\n";
    }
}

void adminPanel() {
    int pilihan;
    do {
        cout << "Selamat Datang di Admin Panel\n";
        cout << "Pilih Program di Bawah ini\n";
        cout << "1. Tambah Pengguna\n";
        cout << "2. Hapus Pengguna\n";
        cout << "3. Perbarui Pengguna\n";
        cout << "4. Tampilkan Pengguna\n";
        cout << "5. Stack Bussines\n";
        cout << "6. Queue Bussines\n";
        cout << "0. Logout\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int userChoice;
                cout << "Pilih Jenis Pengguna:\n";
                cout << "1. Admin\n";
                cout << "2. Pengguna Stack\n";
                cout << "3. Pengguna Queue\n";
                cout << "Pilihan: ";
                cin >> userChoice;

                switch (userChoice) {
                    case 1:
                        addUser("admin");
                        break;
                    case 2:
                        addUser("stack");
                        break;
                    case 3:
                        addUser("queue");
                        break;
                    default:
                        cout << "Pilihan tidak valid.\n";
                        break;
                }
            }
                break;
            case 2: {
                int userChoice;
                cout << "Pilih Jenis Pengguna:\n";
                cout << "1. Admin\n";
                cout << "2. Pengguna Stack\n";
                cout << "3. Pengguna Queue\n";
                cout << "Pilihan: ";
                cin >> userChoice;

                switch (userChoice) {
                    case 1:
                        removeUser("admin");
                        break;
                    case 2:
                        removeUser("stack");
                        break;
                    case 3:
                        removeUser("queue");
                        break;
                    default:
                        cout << "Pilihan tidak valid.\n";
                        break;
                }
            }
                break;
            case 3: {
                int userChoice;
                cout << "Pilih Jenis Pengguna:\n";
                cout << "1. Admin\n";
                cout << "2. Pengguna Stack\n";
                cout << "3. Pengguna Queue\n";
                cout << "Pilihan: ";
                cin >> userChoice;

                switch (userChoice) {
                    case 1:
                        updateUser("admin");
                        break;
                    case 2:
                        updateUser("stack");
                        break;
                    case 3:
                        updateUser("queue");
                        break;
                    default:
                        cout << "Pilihan tidak valid.\n";
                        break;
                }
            }
                break;
            case 4:
                showUsers();
                break;
            case 5:
                stackBusiness();
                break;
            case 6:
                queueBusiness();
                break;
            case 0:
                cout << "Logout dari Admin Panel\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }
    } while (pilihan != 0);
     cout << "===============================================================\n";
}

void login() {
    string username, password;
    while (true) {
        cout << "Selamat Datang di Program Penampungan Barang \n";
        cout << "Silahkan untuk Melakukan Login \n";
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;
        cout << "===============================================================\n";
        if (username == "admin" && password == "admin123") {
            cout << "Selamat datang, Mimin!\n";
            adminPanel();
            break;
        } else if (username == "stack" && password == "stack123") {
            cout << "\nSelamat datang, pengguna stack!\n";
            stackBusiness();
            cout << "Anda tidak dapat memasuki Stack Bisnis.\n";
            break;
        } else if (username == "queue" && password == "queue123") {
            cout << "\nSelamat datang, pengguna queue!\n";
            queueBusiness();
            cout << "Anda tidak dapat memasuki Queue Bisnis.\n";
            break;
        } else if (username == "zefri" && password == "zefri123") {

            cout << "\nSelamat datang, pengguna queue!\n";

            queueBusiness();
            cout << "Anda tidak dapat memasuki Queue Bisnis.\n";
            break;
        }else {
            cout << "Username dan password tidak cocok. Silahkan coba lagi!!!\n";
            cout << "===============================================================\n";
        }
    }
}

int main() {
    int pilihlogin;
    do {
        cout << "===============================================================\n";
        cout << "Selamat Datang di Program Penampungan Barang \n";
        cout << "Pilih Program di Bawah ini \n";
        cout << "1. Login User \n";
        cout << "0. Keluar dari Program \n";
        cout << "Pilihan: ";
        cin >> pilihlogin;
        cout << "===============================================================\n";

        switch (pilihlogin) {
            case 1:
                login();
                break;
            case 0:
                cout << "Terima kasih telah menggunakan Program Penampungan Barang.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }
    } while (pilihlogin != 0);

    return 0;
}

