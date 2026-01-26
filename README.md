# zadanie

🎮 Gra w Zgadywanie Liczb (zadanko.cpp)
Prosta gra konsolowa napisana w języku C++, w której zadaniem gracza jest odgadnięcie wylosowanej liczby przy jak najmniejszej liczbie prób. Program posiada system poziomów trudności oraz dynamicznie odblokowywany ranking Top 5.

🚀 Funkcje
Trzy poziomy trudności:

Łatwy (1−10)

Średni (1−50)

Trudny (1−100)

Inteligentne Menu: Opcja wyświetlania rankingu jest całkowicie ukryta do czasu zakończenia pierwszej rozgrywki.

Ranking Top 5: Program automatycznie sortuje i przechowuje najlepsze wyniki na podstawie liczby prób.

Obsługa błędów: Program radzi sobie z błędnymi danymi wejściowymi (np. gdy użytkownik wpisze literę zamiast cyfry).

🛠️ Kompilacja i uruchomienie
Otwórz terminal lub wiersz poleceń.

Skompiluj plik za pomocą kompilatora g++:

Bash

g++ zadanko.cpp -o zgadywanka
Uruchom program:

Windows:

Bash

zgadywanka.exe
Linux/macOS:

Bash

./zgadywanka
🕹️ Logika programu
Program wykorzystuje pętlę do-while do obsługi menu oraz algorytm sortowania bąbelkowego do zarządzania tabelą wyników. Poniżej schemat działania menu:

Start: Widzisz tylko opcje "Graj" i "Wyjście".

Rozgrywka: Wybierasz poziom i zgadujesz liczbę.

Odblokowanie: Po wygranej flaga czyMoznaWyswietlicTop zmienia się na true.

Ranking: Od tego momentu w menu głównym widzisz dodatkową opcję 2. Top 5.
