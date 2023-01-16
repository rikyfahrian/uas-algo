#include <iostream>
#include <string>

using namespace std;

void gamesMenu();
string sesuaiGame(int peek);
int gamesPrice(int peek);

int main()
{
    string idGame, inputIdGame;
    int pick, listGame;

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

    listGame = gamesPrice(pick);
    cout << listGame << endl;

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

int gamesPrice(int peek)
{
    int pilihan;
    string valorant[5] = {"125VP Rp. 14.250", "420VP Rp. 47.500", "700VP RP. 76.000", "1375VP RP. 142.000", "2400VP RP. 237.500"};
    string ml[5] = {"40Diamond Rp. 11.400", "67Diamond Rp. 19.000", "154Diamond Rp. 43.300", "200Diamond Rp. 57.000", "333Diamond Rp. 95.000"};
    string pb[5] = {"1200Cash Rp. 10.000", "2400Cash Rp. 20.000", "6000Cash Rp. 50.000", "12000Cash Rp. 100.000", "24000Cash Rp. 200.000"};
    string pubgm[5] = {"50UC RP. 10.000", "100UC RP. 20.000", "250UC RP. 50.000", "500UC RP. 100.000", "750UC RP. 150.000"};
    string ff[5] = {"70Diamond Rp. 10.000", "140Diamond Rp. 20.000", "355Diamond Rp. 50.000", "720Diamond Rp. 100.000", "1450Diamond Rp. 200.000"};

    switch (peek)
    {
    case 1:
        cout << "VALORANT PRICE" << endl;
        cout << "===================" << endl;
        for (int i = 0; i < sizeof(valorant) / sizeof(*valorant); i++)
        {
            cout << i + 1 << ". " << valorant[i] << endl;
        }
        cout << "Chosee : ";
        cin >> pilihan;
        break;
    case 2:
        cout << "MOBILE LEGENDS PRICE" << endl;
        cout << "===================" << endl;
        for (int i = 0; i < sizeof(ml) / sizeof(*ml); i++)
        {
            cout << i + 1 << ". " << ml[i] << endl;
        }
        cout << "Chosee : ";
        cin >> pilihan;
        break;
    case 3:
        cout << "POINT BLANK PRICE" << endl;
        cout << "===================" << endl;
        for (int i = 0; i < sizeof(pb) / sizeof(*pb); i++)
        {
            cout << i + 1 << ". " << pb[i] << endl;
        }
        cout << "Chosee : ";
        cin >> pilihan;

        break;
    case 4:
        cout << "PUBG MOBILE PRICE" << endl;
        cout << "===================" << endl;
        for (int i = 0; i < sizeof(pubgm) / sizeof(*pubgm); i++)
        {
            cout << i + 1 << ". " << pubgm[i] << endl;
        }
        cout << "Chosee : ";
        cin >> pilihan;
        break;
    case 5:
        cout << "FREE FIRE PRICE" << endl;
        cout << "===================" << endl;
        for (int i = 0; i < sizeof(ff) / sizeof(*ff); i++)
        {
            cout << i + 1 << ". " << ff[i] << endl;
        }
        cout << "Chosee : ";
        cin >> pilihan;

        break;

    default:
        break;
    }

    return pilihan;
}
