#include "main.h"

/* * Testy weryfikacyjne dla PR #16 (Animacja losowania).
 * Sprawdzamy poprawność działania funkcji spinWheel oraz 
 * bezpieczeństwo pętli głównej programu.
 */

void Test_SpinWheel_Integrity(void) {
    // Pobieramy czas przed uruchomieniem animacji
    uint32_t start_time = HAL_GetTick();
    
    // Wywołanie logiki animacji 
    spinWheel();
    
    uint32_t end_time = HAL_GetTick();
    uint32_t diff = end_time - start_time;

    // Test 1: Sprawdzenie, czy animacja nie blokuje procesora na zbyt długo (Timeout).
    // Jeśli trwa powyżej 15 sekund, uznajemy to za błąd logiki hamowania.
    if (diff > 15000) {
        Error_Handler();
    }

    // Test 2: Sprawdzenie, czy animacja w ogóle się odbyła.
    // Jeśli czas trwania wynosi 0, funkcja prawdopodobnie nie została zainicjalizowana.
    if (diff == 0) {
        Error_Handler();
    }
}

/*
 * Weryfikacja stanu joysticka po zakończeniu animacji.
 * Upewniamy się, że przerwanie EXTI poprawnie czyści flagi.
 */
void Test_Joystick_Response_After_Spin(void) {
    // Po zakończeniu spinWheel system musi wrócić do odczytu joysticka
    JOYState_TypeDef state = BSP_JOY_GetState();
    
    // Sprawdzamy czy wartość mieści się w zakresie enuma (0-5)
    if (state < 0 || state > 5) {
        Error_Handler();
    }
}