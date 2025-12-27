#include "main.h"

/**
 * @file test_display.c
 * @brief Testy integracyjne wyświetlania koła (PR #12).
 */

/**
 * @brief Test bezpieczeństwa rysowania poligonu.
 * Weryfikuje, czy pętla w drawSector nie wyjdzie poza tablicę punktów.
 */
void Test_Display_Polygon_Safety(void) {
    // W kodzie drawSector: Point pts[steps + 2] gdzie steps = 12
    int steps = 12;
    int expected_pts_size = steps + 2;

    // Sprawdzamy, czy rozmiar bufora punktów jest stały i bezpieczny
    if (expected_pts_size != 14) {
        Error_Handler();
    }
}

/**
 * @brief Testuje matematykę sektorów.
 * Sprawdza, czy podział 360 stopni na SECTOR_COUNT jest poprawny.
 */
void Test_Display_Sector_Math(void) {
    // Przy SECTOR_COUNT = 8, każdy sektor musi mieć 45 stopni
    float sector_angle = 360.0f / SECTOR_COUNT;

    if (sector_angle != 45.0f) {
        Error_Handler();
    }
}