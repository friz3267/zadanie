#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <limits> 

using namespace std;

struct Gracz {
    string imie;
    int poziom;
    int proby;
};

Gracz top5[5] = {
  {"---", 0, 9999},
  {"---", 0, 9999},
  {"---", 0, 9999},
  {"---", 0, 9999},
  {"---", 0, 9999}
};

bool czyMoznaWyswietlicTop = false;

int main() {
    srand(time(0));
    int wyborMenu;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Graj\n";

        if (czyMoznaWyswietlicTop) {
            cout << "2. Top 5\n";
        }

        cout << "3. Wyjscie\n";
        cout << "Wybierz: ";

        if (!(cin >> wyborMenu)) {
            cout << "Blad! To nie jest liczba.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (wyborMenu == 2 && !czyMoznaWyswietlicTop) {
            cout << "Niepoprawny wybor! Sprobuj ponownie.\n";
            continue;
        }

        if (wyborMenu == 1) {
            int poziom, zakres = 0, proby = 0, tajnaliczba, strzal;
            cout << "\nWybierz trudnosc (1-Latwy, 2-Sredni, 3-Trudny): ";
            while (!(cin >> poziom)) {
                cout << "Podaj liczbe 1, 2 lub 3: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            if (poziom == 1) zakres = 10;
            else if (poziom == 2) zakres = 50;
            else if (poziom == 3) zakres = 100;
            else { zakres = 10; poziom = 1; }

            tajnaliczba = rand() % zakres + 1;
            cout << "\nZgadnij liczbe od 1 do " << zakres << "\n";

            do {
                cout << "Podaj liczbe: ";
                if (!(cin >> strzal)) {
                    cout << "To nie jest liczba! Tracisz probe.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    proby++;
                    continue;
                }
                proby++;

                if (strzal > tajnaliczba) cout << "Za duzo!\n";
                else if (strzal < tajnaliczba) cout << "Za malo!\n";
                else {
                    cout << "Brawo! Zgadles w " << proby << " probach.\n";

                    czyMoznaWyswietlicTop = true;

                    if (proby < top5[4].proby) {
                        string nick;
                        cout << "Jestes w Top 5! Podaj imie: ";
                        cin >> nick;
                        top5[4].imie = nick;
                        top5[4].poziom = poziom;
                        top5[4].proby = proby;

                        for (int i = 0; i < 5; i++) {
                            for (int j = 0; j < 4; j++) {
                                if (top5[j].proby > top5[j + 1].proby) {
                                    Gracz tymczasowy = top5[j];
                                    top5[j] = top5[j + 1];
                                    top5[j + 1] = tymczasowy;
                                }
                            }
                        }
                    }
                }
            } while (strzal != tajnaliczba);
        }
        else if (wyborMenu == 2) {
            cout << "\n=== TOP 5 ===\n";
            cout << "Imie\tLvl\tProby\n";
            for (int i = 0; i < 5; i++) {
                if (top5[i].proby != 9999) {
                    cout << i + 1 << ". " << top5[i].imie << "\t" << top5[i].poziom << "\t" << top5[i].proby << "\n";
                }
            }
        }
    } while (wyborMenu != 3);

    return 0;
}