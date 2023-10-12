#include <iostream>
#include "DQE.H"
using namespace std;

#define N 10
int Q[N];
int L, R, X;

void AWAL()
{
    L = 0;
    R = -1;
}

int menu()
{
    int menu;
    cout << "    DOUBLE ENDED QUEUE   "<<endl;
    cout << " 1. INSERT KIRI          "<<endl;
    cout << " 2. INSERT KANAN         "<<endl;
    cout << " 3. DELETE KIRI          "<<endl;
    cout << " 4. DELETE KANAN         "<<endl;
    cout << " 5. CETAK ANTRIAN        "<<endl;
    cout << " 6. QUIT                 "<<endl;
    cout << " Pilihan: ";
    cin >> menu;
    return menu;
}

bool INSERT_KIRI(void)
{
    if (R < N - 1)
    {
        cout << "Masukkan Nilai: ";
        cin >> X;
        Q[++R] = X;
        cout << "Nilai " << X << " telah dimasukkan ke kiri." << endl;
    }
    else
    {
        cout << "Antrian kiri penuh" << endl;
    }
}

bool INSERT_KANAN(void)
{
    if (R < N - 1)
    {
        cout << "Masukkan Nilai: ";
        cin >> X;
        Q[++R] = X;
        cout << "Nilai " << X << " telah dimasukkan ke kanan." << endl;
    }
    else
    {
        cout << "Antrian kanan penuh" << endl;
    }
}

bool DELETE_KIRI(void)
{
    if (L <= R)
    {
        X = Q[L++];
        cout << "Nilai " << X << " telah dihapus dari kiri." << endl;
    }
    else
    {
        cout << "Antrian kosong" << endl;
    }
}

bool DELETE_KANAN(void)
{
    if (L <= R)
    {
        X = Q[R--];
         cout << "Nilai " << X << " telah dihapus dari kanan." << endl;
        return true;
    }
    else
    {
        return false;
    }
}

void Tampilkan(void)
{
    if (L <= R)
    {
        cout << "Isi antrian: ";
        for (int i = L; i <= R; i++)
        {
            cout << Q[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Antrian kosong" << endl;
    }
}

int main(void)
{
    AWAL();
    int Pilihan = 0;
    while (Pilihan != 6)
    {
        Pilihan = menu();
        switch (Pilihan)
        {
        case 1:
            INSERT_KIRI();
            break;
        case 2:
            INSERT_KANAN();
            break;
        case 3:
            DELETE_KIRI();
            break;
        case 4:
            if (DELETE_KANAN())
            {
                cout << "Nilai Yang Diambil: " << X << endl;
            }
            else
            {
                cout << "Gagal Mengambil Nilai" << endl;
            }
            break;
        case 5:
            cout << "Tampilkan" << endl;
            Tampilkan();
            break;
        case 6:
            cout << "Berhasil Keluar, Terimakasih :) " << endl;
            break;
        default:
            cout << "Pilihan Yang Anda Masukan Salah" << endl;
        }
    }

    return 0;
}
