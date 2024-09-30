#include <iostream>
using namespace std;

int main()
{
    int pilihMinuman, pilihMakanan, pilihBuah, jlhMinuman, jlhMakanan, jlhBuah, totalPesan, totalMinuman, totalMakanan, totalBuah, diskon, hargaBersih, totalAngkaPesanan;
    cout << "================================== \n";
    cout << "======== Warung Serba Ada ======== \n";
    cout << "================================== \n";
    cout << "++++++++   Farada Aulia   ++++++++ \n";
    cout << "++++++++   240170214      ++++++++ \n";
    cout << "== Minuman ============== Harga == \n";
    cout << "1. Air Putih       =      Rp. 1000 \n";
    cout << "2. Teh             =      Rp. 10000 \n";
    cout << "3. Jus             =      Rp. 20000 \n";
    cout << "== Makanan ============== Harga == \n";
    cout << "1. Martabak        =      Rp. 5000 \n";
    cout << "2. Mie Goreng      =      Rp. 12000 \n";
    cout << "3. Nasi Goreng    3 =      Rp. 21000 \n";
    cout << "== Buah    ============== Harga == \n";
    cout << "1. Pisang          =      Rp. 7000 \n";
    cout << "2. Mangga          =      Rp. 15000 \n";
    cout << "3. Naga            =      Rp. 20000 \n";
    cout << "================================== \n";

    cout << "Masukkan pilihan minuman anda (1-3)" << endl;
    cin >> pilihMinuman;

    switch (pilihMinuman)
    {
    case 1:
        cout << "Jumlah yang anda beli" << endl;
        cin >> jlhMinuman;
        totalMinuman = 1000 * jlhMinuman;
        cout << totalMinuman << endl;
        break;
    case 2:
        cout << "Jumlah yang anda beli" << endl;
        cin >> jlhMinuman;
        totalMinuman = 10000 * jlhMinuman;
        cout << totalMinuman << endl;
        break;
    case 3:
        cout << "Jumlah yang anda beli" << endl;
        cin >> jlhMinuman;
        totalMinuman = 20000 * jlhMinuman;
        cout << totalMinuman << endl;
        break;
    default:
        cout << "Habis" << endl;
        break;
    }

    cout << "Masukkan Pilihan Makanan Anda (1-3)" << endl;
    cin >> pilihMakanan;
    switch (pilihMakanan)
    {
    case 1:
        cout << "Jumlah yang ingin anda beli" << endl;
        cin >> jlhMakanan;
        totalMakanan = 5000 * jlhMakanan;
        cout << totalMakanan << endl;
        break;
    case 2:
        cout << "Jumlah yang ingin anda beli" << endl;
        cin >> jlhMakanan;
        totalMakanan = 12000 * jlhMakanan;
        cout << totalMakanan << endl;
        break;
    case 3:
        cout << "Jumlah yang ingin anda beli" << endl;
        cin >> jlhMakanan;
        totalMakanan = 21000 * jlhMakanan;
        cout << totalMakanan << endl;
        break;
    default:
        cout << "Habis" << endl;
        break;
    }

    cout << "Masukkan Pilihan Buah Anda (1-3)" << endl;
    cin >> pilihBuah;
    switch (pilihBuah)
    {
    case 1:
        cout << "Jumlah yang ingin anda beli" << endl;
        cin >> jlhBuah;
        totalBuah = 7000 * jlhBuah;
        cout << totalBuah << endl;
        break;
    case 2:
        cout << "Jumlah yang ingin anda beli" << endl;
        cin >> jlhBuah;
        totalBuah = 15000 * jlhBuah;
        cout << totalBuah << endl;
        break;
    case 3:
        cout << "Jumlah yang ingin anda beli" << endl;
        cin >> jlhBuah;
        totalBuah = 20000 * jlhBuah;
        cout << totalBuah << endl;
        break;
    default:
        break;
    }

    totalPesan = totalMinuman + totalMakanan + totalBuah;
    totalAngkaPesanan = pilihMinuman + pilihMakanan + pilihBuah;
    hargaBersih = diskon;

    cout << "Total Pesanan Rp." << totalPesan << endl;

    if (totalAngkaPesanan % 2 == 0)
    {
        diskon = totalPesan * 0.12;
        cout << "diskon Rp. " << diskon << endl;
    }
    else
    {
        diskon = totalPesan * 0.13;
        cout << "diskon Rp. " << diskon << endl;
    }
    hargaBersih = totalPesan - diskon;
    cout << "Harga yang harus dibayarkan ialah Rp." << hargaBersih;
}