#include <iostream>
#include <string>

using namespace std;

// function
void gamesMenu();
string sesuaiGame(int peek);
string methodPayment();

// beda file
#include "prices.h"

// main
int main()
{
    string idGame, inputIdGame, payment;
    int pick;

    cout << "GAMERS MARKET" << endl;
    cout << "===================================" << endl;
    cout << "TOP-UP YOUR GAMES HERE, FAST & TRUSTED SINCE 2018" << endl
         << endl;

    cout << "choose your game : " << endl;
    gamesMenu();
    cout << endl;
    cout << "choose (number) : ";
    cin >> pick;

    // id sesusai id game karena berbeda setiap game.
    idGame = sesuaiGame(pick);
    cout << idGame;
    cin >> inputIdGame;
    cout << endl;
    auto half = gamesPrice(pick);
    cout << endl;
    cout << "PILIH CARA BAYAR" << endl;
    cout << "======================" << endl;
    payment = methodPayment();

    cout << endl;
    cout << "FORMAT ORDER" << endl;
    cout << "=============================" << endl;
    cout << "Pembelian         = " << half.nama << endl;
    cout << "Nama Game         = " << half.gameNamee << endl;
    cout << "ID/USER GAME      = " << inputIdGame << endl;
    cout << "Metode Pembayaran = " << payment << endl;
    cout << "Total             = " << half.harga << endl
         << endl;
    cout << "Thankyou, Keep Good Game !" << endl;

    return 0;
}

void gamesMenu()
{

    string games[] = {"Valorant", "Mobile Legends", "Point Blank", "PUBG Mobile", "Free Fire"};

    for (int i = 0; i < sizeof(games) / sizeof(*games); i++)
    {
        cout << i + 1 << ". " << games[i] << endl;
    }
}

string sesuaiGame(int peek)
{

    if (peek == 1)
    {
        return "Masukan Riot ID Anda : ";
    }
    else if (peek == 2)
    {
        return "Masukan User ID Anda : ";
    }
    else if (peek == 3 || peek == 4)
    {
        return "Masukan ID : ";
    }
    else if (peek == 5)
    {
        return "Masukan ID Pemain : ";
    }
    else
    {
        return "masukan pilihan game dengan angka kak";
    }
}

string methodPayment()
{
    string pilih;
    string method[3] = {"Dana", "Gopay", "OVO"};

    for (int i = 0; i < sizeof(method) / sizeof(*method); i++)
    {
        cout << "-" << method[i] << endl;
    }

    cout << "Pilih metode pembayaran : ";
    cin >> pilih;

    if (pilih == "Dana" || pilih == "dana")
    {
        pilih = method[0];
    }
    else if (pilih == "Gopay" || pilih == "gopay")
    {
        pilih = method[1];
    }
    else if (pilih == "ovo" || pilih == "OVO")
    {
        pilih = method[2];
    }
    else
    {
        return "pembayaran tidak tersedia";
    }

    return pilih;
}
