#include <iostream>
#include <string>
#include <fstream>   // Untuk bekerja dengan file
#include <cstdlib>   // Untuk rand() dan srand()
#include <ctime>     // Untuk time()

// Fungsi untuk generate karakter random
char randomCharacter(const std::string& charset) {
    return charset[rand() % charset.size()];
}

// Fungsi untuk generate username dengan kombinasi huruf dan angka
std::string generateUsername(int length) {
    const std::string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    std::string username;
    for (int i = 0; i < length; ++i) {
        username += randomCharacter(charset);
    }
    return username;
}

// Fungsi untuk generate password dengan kombinasi huruf, angka, simbol, uppercase dan lowercase
std::string generatePassword(int length) {
    const std::string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_+=<>?";
    std::string password;
    for (int i = 0; i < length; ++i) {
        password += randomCharacter(charset);
    }
    return password;
}

int main() {
    srand(time(0));  // Inisialisasi seed untuk rand()

    int numAccounts; // Generate jumlah akun
    std::cout << "\nMasukkan jumlah akun yang ingin digenerate (angka): ";
    std::cin >> numAccounts;

    int usernameLength;  // Panjang username
    std::cout << "\npanjang username (angka): ";
    std::cin >> usernameLength;

    int passwordLength; // Panjang password
    std::cout << "\npanjang password (angka): ";
    std::cin >> passwordLength;
    
    std::string emailDomain;  // Domain email yang ingin digunakan
    std::cout << "\ndomain (@xxx.x): ";
    std::cin >> emailDomain;

    // Membuka file untuk menulis output
    std::ofstream outputFile("acc.txt");
    std::ofstream emailOutputFile("acc_username_with_domain.txt");

    // Menambahkan label username:password di baris pertama pada kedua file
    outputFile << "username:password" << std::endl;
    emailOutputFile << "username:password" << std::endl;

    // Generate dan simpan username:password di kedua file
    for (int i = 0; i < numAccounts; ++i) {
        std::string username = generateUsername(usernameLength);
        std::string password = generatePassword(passwordLength);

        // Format tanpa email
        std::string account = username + ":" + password;

        // Format dengan email
        std::string accountWithEmail = username + emailDomain + ":" + password;

        // Simpan ke kedua file
        outputFile << account << std::endl;
        emailOutputFile << accountWithEmail << std::endl;
    }

    // Menutup file
    outputFile.close();
    emailOutputFile.close();

    // Menampilkan pesan selesai
    std::cout << "\nProses generate sudah selesai!" << std::endl;

    return 0;
}
