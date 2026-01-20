# zadanie

Gra w Zgadywanie Liczb (z rankingiem Top 5)
Prosta gra konsolowa napisana w języku C++, polegająca na odgadnięciu wylosowanej przez komputer liczby w jak najmniejszej liczbie prób. Program przechowuje listę 5 najlepszych wyników w trakcie działania aplikacji.

📋 Cechy projektu
3 poziomy trudności:

Łatwy (zakres 1-10)

Średni (zakres 1-50)

Trudny (zakres 1-100)

System podpowiedzi: Gra informuje, czy podana liczba jest "za duża" czy "za mała".

Ranking Top 5: Tabela najlepszych graczy, która sortuje wyniki od najmniejszej liczby prób.

Własna struktura danych: Wykorzystanie struct do przechowywania danych gracza.

🚀 Jak uruchomić
Upewnij się, że masz zainstalowany kompilator C++ (np. G++).

Skompiluj plik źródłowy (np. main.cpp):

Bash

g++ main.cpp -o gra
Uruchom program:

Windows: gra.exe

Linux/Mac: ./gra

🕹️ Instrukcja obsługi
W menu głównym wybierz 1, aby rozpocząć grę.

Wybierz poziom trudności (1, 2 lub 3).

Wpisuj liczby, sugerując się podpowiedziami gry, aż trafisz w wylosowaną wartość.

Jeśli Twój wynik (liczba prób) jest wystarczająco dobry, zostaniesz poproszony o wpisanie imienia i trafisz na listę Top 5.

Wybierz 2 w menu głównym, aby podejrzeć tabelę wyników.

🛠️ Opis techniczny (Dla programisty)
Kod wykorzystuje podstawowe oraz średniozaawansowane elementy języka C++:

1. Struktura Gracz
Program definiuje własny typ danych za pomocą słowa kluczowego struct. Pozwala to przechowywać powiązane dane w jednym obiekcie:

2. Tablica i Inicjalizacja
Ranking przechowywany jest w tablicy Gracz top5[5]. Na początku programu tablica wypełniana jest wartościami "startowymi" (liczba prób 9999), aby każdy nowy, rzeczywisty wynik gracza był od nich lepszy i mógł zostać wpisany na listę.

3. Algorytm Sortowania (Ranking)
Po dodaniu nowego gracza na koniec listy (zastępując najsłabszy wynik), program wykorzystuje sortowanie bąbelkowe, aby ułożyć wyniki w kolejności rosnącej (od najmniejszej liczby prób do największej). Dzięki temu na górze tabeli zawsze widnieją najlepsi gracze.

4. Losowość
Wykorzystano funkcję srand(time(0)) do inicjalizacji generatora liczb pseudolosowych, co zapewnia unikalność rozgrywki przy każdym uruchomieniu programu.
