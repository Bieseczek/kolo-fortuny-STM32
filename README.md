# kolo-fortuny-STM32 - Gałąź `main`

## Witaj w Gałęzi `main` Projektu kolo-fortuny-STM32!

**Cel tej gałęzi:**
*   Reprezentuje stabilny, przetestowany i niezawodny kod.
*   Jest źródłem dla wszystkich wdrożeń produkcyjnych.
*   Zawiera tylko w pełni ukończone i zaakceptowane funkcje/poprawki.

---

### Klonowanie Repozytorium

Aby pobrać kod:

```bash
git clone https://github.com/Bieseczek/kolo-fortuny-STM32.git
cd kolo-fortuny-STM32
git checkout main
Uruchamianie Projektu
```
Wersje i Wydania

Każde wdrożenie na produkcję (lub znacząca wersja) jest oznaczane tagiem Git na gałęzi main.
Możesz przeglądać listę tagów, aby zobaczyć historię wydań:

```
git tag
```

Aby sprawdzić kod dla konkretnej wersji (np. v1.2.3):

```
git checkout v1.2.3
```

Jak Wprowadzać Zmiany (Dla Deweloperów)

Nigdy nie commituj bezpośrednio do gałęzi main.
Wszelkie zmiany w tej gałęzi pochodzą z gałęzi develop (lub w wyjątkowych sytuacjach z gałęzi hotfix) po zakończeniu cyklu rozwoju, recenzji kodu (Code Review) i pomyślnym przejściu testów.

Proces wprowadzania zmian:

*  Rozwój: Nowe funkcje i poprawki są tworzone na oddzielnych gałęziach funkcjonalnych (np. feature/moja-funkcja, bugfix/poprawka-bledu) wywodzących się z gałęzi develop.
  
*  Integracja: Po zakończeniu pracy nad funkcją, jest ona integrowana z gałęzią develop poprzez Pull Request / Merge Request.
  
*  Testowanie: Gałąź develop jest miejscem, gdzie integrowane są wszystkie funkcje i przeprowadzane są gruntowne testy (w tym testy QA, integracyjne itp.).
  
*  Wydanie: Gdy gałąź develop jest stabilna i gotowa do wydania, jest ona łączona z gałęzią main poprzez Pull Request / Merge Request. To połączenie (merge) jest punktem wydania na produkcję.

Krótko: 

* Sklonuj repozytorium.

* Przejdź na gałąź develop: git checkout develop

* Utwórz nową gałąź z develop dla swojej pracy: git checkout -b feature/twoja-funkcja

* Wykonaj swoją pracę, commituj zmiany.

* Otwórz Pull Request / Merge Request z feature/twoja-funkcja do develop.

* W razie pytań lub problemów, skontaktuj się z [osoba/zespół kontaktowy lub kanał komunikacji].
content_copy
expand_less
