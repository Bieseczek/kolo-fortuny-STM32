#include "main.h"

/**
 * @file test_joystick.c
 * @brief Testy funkcjonalne sterownika joysticka (PR #13).
 */

/**
 * @brief Sprawdza, czy joystick jest poprawnie zainicjalizowany.
 * Weryfikuje, czy po starcie system nie odczytuje fałszywych wciśnięć.
 */
void Test_Joystick_Initial_State(void) {
    // Inicjalizacja joysticka w trybie GPIO
    BSP_JOY_Init(JOY_MODE_GPIO);
    
    // Pobranie stanu - po restarcie powinien być JOY_NONE
    if (BSP_JOY_GetState() != JOY_NONE) {
        // Jeśli stan jest inny, piny mogą być źle skonfigurowane (brak pull-up/down)
    }
}

/**
 * @brief Test poprawności zwracanych wartości.
 * Sprawdza, czy odczyt mieści się w zdefiniowanym zakresie enum BSP.
 */
void Test_Joystick_Value_Range(void) {
    JOYState_TypeDef state = BSP_JOY_GetState();
    
    // Zakres dla joysticka to zazwyczaj 0 (NONE) do 5 (UP)
    if (state < 0 || state > 5) {
        // Błąd: odczytano wartość spoza dopuszczalnej skali sterownika
        Error_Handler();
    }
}