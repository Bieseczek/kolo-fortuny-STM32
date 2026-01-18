#include "main.h"

/* * Testy weryfikacyjne dla PR #15 (Model koła).
 * Sprawdzam spójność danych przed mergem do develop.
 */

void Test_Wheel_Model_Integrity(void) {
    // Rozmiar tablic z kolorami musi odpowiadać liczbie sektorów.
    // Inaczej przy rysowaniu program wyjdzie poza zakres pamięci.
    
    int colors_len = sizeof(sectorColors) / sizeof(sectorColors[0]);
    int highlights_len = sizeof(sectorHighlight) / sizeof(sectorHighlight[0]);

    if (colors_len < SECTOR_COUNT || highlights_len < SECTOR_COUNT) {
        // Krytyczny błąd konfiguracji modelu. 
        // Zatrzymujemy proces
        __disable_irq();
        while(1);
    }
}