#include <iostream>
#include <string>

using namespace std;

auto gamesPrice(int peek)
{
    int pilihan, harga;
    struct jadi
    {
        int harga;
        string nama;
        string gameNamee;
    };

    string namanya, gameName;
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
        gameName = "VALORANT";
        cout << "Chosee : ";
        cin >> pilihan;
        if (pilihan == 1)
        {
            harga = 14250;
            namanya = valorant[0];
        }
        else if (pilihan == 2)
        {
            harga = 47500;
            namanya = valorant[1];
        }
        else if (pilihan == 3)
        {
            harga = 76000;
            namanya = valorant[2];
        }
        else if (pilihan == 4)
        {
            harga = 142000;
            namanya = valorant[3];
        }
        else if (pilihan == 5)
        {
            harga = 237500;
            namanya = valorant[4];
        }

        break;
    case 2:
        cout << "MOBILE LEGENDS PRICE" << endl;
        cout << "===================" << endl;
        for (int i = 0; i < sizeof(ml) / sizeof(*ml); i++)
        {
            cout << i + 1 << ". " << ml[i] << endl;
        }
        gameName = "MOBILE LEGENDS";
        cout << "Chosee : ";
        cin >> pilihan;
        if (pilihan == 1)
        {
            harga = 11400;
            namanya = ml[0];
        }
        else if (pilihan == 2)
        {
            harga = 19000;
            namanya = ml[1];
        }
        else if (pilihan == 3)
        {
            harga = 43300;
            namanya = ml[2];
        }
        else if (pilihan == 4)
        {
            harga = 57000;
            namanya = ml[3];
        }
        else if (pilihan == 5)
        {
            harga = 95000;
            namanya = ml[4];
        }

        break;
    case 3:
        cout << "POINT BLANK PRICE" << endl;
        cout << "===================" << endl;
        for (int i = 0; i < sizeof(pb) / sizeof(*pb); i++)
        {
            cout << i + 1 << ". " << pb[i] << endl;
        }
        gameName = "POINT BLANK";
        cout << "Chosee : ";
        cin >> pilihan;
        if (pilihan == 1)
        {
            harga = 10000;
            namanya = pb[0];
        }
        else if (pilihan == 2)
        {
            harga = 20000;
            namanya = pb[1];
        }
        else if (pilihan == 3)
        {
            harga = 50000;
            namanya = pb[2];
        }
        else if (pilihan == 4)
        {
            harga = 100000;
            namanya = pb[3];
        }
        else if (pilihan == 5)
        {
            harga = 200000;
            namanya = pb[4];
        }

        break;
    case 4:
        cout << "PUBG MOBILE PRICE" << endl;
        cout << "===================" << endl;
        for (int i = 0; i < sizeof(pubgm) / sizeof(*pubgm); i++)
        {
            cout << i + 1 << ". " << pubgm[i] << endl;
        }
        gameName = "PUBG MOBILE";
        cout << "Chosee : ";
        cin >> pilihan;
        if (pilihan == 1)
        {
            harga = 10000;
            namanya = pubgm[0];
        }
        else if (pilihan == 2)
        {
            harga = 20000;
            namanya = pubgm[1];
        }
        else if (pilihan == 3)
        {
            harga = 50000;
            namanya = pubgm[2];
        }
        else if (pilihan == 4)
        {
            harga = 100000;
            namanya = pubgm[3];
        }
        else if (pilihan == 5)
        {
            harga = 150000;
            namanya = pubgm[4];
        }

        break;
    case 5:
        cout << "FREE FIRE PRICE" << endl;
        cout << "===================" << endl;
        for (int i = 0; i < sizeof(ff) / sizeof(*ff); i++)
        {
            cout << i + 1 << ". " << ff[i] << endl;
        }
        gameName = "FREE FIRE";

        cout << "Chosee : ";
        cin >> pilihan;
        if (pilihan == 1)
        {
            harga = 10000;
            namanya = ff[0];
        }
        else if (pilihan == 2)
        {
            harga = 20000;
            namanya = ff[1];
        }
        else if (pilihan == 3)
        {
            harga = 50000;
            namanya = ff[2];
        }
        else if (pilihan == 4)
        {
            harga = 100000;
            namanya = ff[3];
        }
        else if (pilihan == 5)
        {
            harga = 200000;
            namanya = ff[4];
        }

        break;

    default:
        break;
    }

    return jadi{harga, namanya, gameName};
}