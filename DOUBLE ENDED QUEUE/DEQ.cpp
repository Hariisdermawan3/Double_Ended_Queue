#include "main.cpp"
void AWAL(void)
{
    L = 0;
    R = -1;
}

bool INSERT_KIRI(void)
{
    if (L > 0)
    {
        cout << "Masukkan nilai x: ";
        int x;
        cin >> x;
        Q[--L] = x;
    }
    else
    {
        cout << "Antrian penuh kiri" << endl;
    }
}

bool INSERT_KANAN(void)
{
    if (R < N - 1)
    {
        cout << "Masukkan nilai x: ";
        int x;
        cin >> x;
        Q[++R] = x;
    }
    else
    {
        cout << "Antrian penuh kanan" << endl;
    }
}

bool DELETE_KIRI(void)
{
    if (L < R + 1)
    {
        int x = Q[L++];
        cout << "Nilai yang dihapus dari kiri: " << x << endl;
    }
    else
    {
        cout << "Antrian kosong" << endl;
    }
}

bool DELETE_KANAN(void)
{
    if (L < R + 1)
    {
        int x = Q[R--];
        cout << "Nilai yang dihapus dari kanan: " << x << endl;
    }
    else
    {
        cout << "Antrian kosong" << endl;
    }
}

bool CETAK_ANTRIAN(void)
{
    if (L < R + 1)
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