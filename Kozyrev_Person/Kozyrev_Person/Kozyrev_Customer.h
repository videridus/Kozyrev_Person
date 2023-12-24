#pragma once
class Kozyrev_Customer
{
#include <assert.h> 
#include <string.h> 
#include <algorithm> 
#include <iostream> 
    using namespace std;

    /**

    @file Kozyrev_person.cpp
    @brief Файл исходных файлов персоны
    @copyright Boгy
    @author Козырев Ф.И.
    @date 01-12-2023
    @version 1.0.0

    \par Использует файл:
    @ref Kozyrev_Customer

    \par Coдержит кnacc:
    @ref Kozyrev_Customer
    **/

#define LEN(array) static_cast<int> (sizeof(array) / sizeof(array[0])) 
    class Kozyrev_Customer
    {
    private:
        char _fam[30]; //Фамилия
        char _name[20]; //Имя
        char _ot[40]; //Отчество
        char _adr[30]; //Адресс
        int _tel; //Телефон
        int _nom; //Номер карты
        int _cht; //Счёт в банке
    public:
        void set(const char fam[], const char name[], const char ot[], const char adr[], int tel, int nom, int cht)
        {
            int fam_len = strlen(fam);0')
            assert(fam_len + 1 <= LEN(_fam));
            memcpy(_fam, fam, fam_len + 1);
            int name_len = strlen(name);
            assert(name_len + 1 <= LEN(_name));
            memcpy(_name, name, name_len + 1);

            int ot_len = strlen(ot);
            assert(ot_len + 1 <= LEN(_ot));
            memcpy(_ot, ot, ot_len + 1);

            int adr_len = strlen(adr);
            assert(adr_len + 1 <= LEN(_adr));
            memcpy(_adr, adr, adr_len + 1);

            _tel = tel;
            _nom = nom;
            _cht = cht;
        }
        void display() const
        {
            cout << "Familia: " << _fam << endl;
            cout << "Name: " << _name << endl;
            cout << "Otchestvo: " << _ot << endl;
            cout << "Adress: " << _adr << endl;
            cout << "Telefon: " << _tel << endl;
            cout << "Card: " << _nom << endl;
            cout << "Chet: " << _cht << endl;
        }
        int getCard() const { return _nom; }

        const char* getFam() const { return _fam; }
    };
    // сортирует в алфавитном порядке 

    void alf(Kozyrev_Customer spis[], int n)
    {
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (strcmp(spis[i].getFam(), spis[j].getFam()) > 0) { swap(spis[i], spis[j]); }
            }
        } for (int i = 0; i < n; i++)
        {
            cout << spis[i].getFam() << endl;
        }

        char method();
        {
            int num;
            cin >> num;
            while (num > 9999 || num < 1111);
            cout << "spis[i]" << endl;
        }
    }

    int main()
    {
        Kozyrev_Customer spis[9];
        spis[0].set("Romanov", "Ilya", "Petrovich", "1111", 0, 0, 0);
        spis[1].set("Lenin", "Vova", "Ivanovich", "9999", 0, 0, 0);
        spis[2].set("Stalin", "Sasha", "Vladimirovich", "8888", 0, 0, 0);
        spis[3].set("Khrushchev", "Kirill", "Petrov", "7777", 0, 0, 0);
        spis[4].set("Brezhnev", "Anton", "Antonov", "6666", 0, 0, 0);
        spis[5].set("Andropov", "Kesha", "Romanovich", "5555", 0, 0, 0);
        spis[6].set("Gorbachev", "Roma", "Andreevich", "4444", 0, 0, 0);
        spis[7].set("Yeltsin", "Andrey", "Konstantinovich", "3333", 0, 0, 0);
        spis[8].set("Putin", "Isaak", "Ilich", "2222", 0, 0, 0);
        alf(spis, LEN(spis)); return 0;
    }

