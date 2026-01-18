//* USER CODE BEGIN Header */
/**
  **************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  **************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  **************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stdio.h"
#include "string.h"
#include "stm3210c_eval.h"
#include "stm3210c_eval_lcd.h"
#include "stm3210c_eval_io.h"
#include "stm3210c_eval_ts.h"
#include "stm3210c_eval_accelerometer.h"
#include "stm3210c_eval_eeprom.h"
#include "stm3210c_eval_sd.h"
#include "stm3210c_eval_audio.h"
#include <stdlib.h>
#include <math.h>
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
typedef struct
{
  void   (*DemoFunc)(void);
  uint8_t DemoName[50];
  uint32_t DemoIndex;
} BSP_DemoTypedef;
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
extern const unsigned char stlogo[];
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */
#define COUNT_OF_EXAMPLE(x)    (sizeof(x)/sizeof(BSP_DemoTypedef))
/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);
static void fillSectorScanline(int idx, uint16_t fillColor);

/* USER CODE BEGIN EFP */
void LCD_demo (void);
void Log_demo(void);
void Joystick_demo (void);
void SD_demo (void);
void EEPROM_demo (void);
void ACCELERO_MEMS_Test(void);
void Touchscreen_demo(void);
void Touchscreen_Calibration (void);
uint16_t Calibration_GetX(uint16_t x);
uint16_t Calibration_GetY(uint16_t y);
uint8_t IsCalibrationDone(void);
void AudioPlay_demo(void);
uint8_t CheckForUserInput(void);
void Toggle_Leds(void);
void Error_Handler(void);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define TRACE_CK_Pin GPIO_PIN_2
#define TRACE_CK_GPIO_Port GPIOE
#define TRACE_D0_Pin GPIO_PIN_3
#define TRACE_D0_GPIO_Port GPIOE
#define TRACE_D1_Pin GPIO_PIN_4
#define TRACE_D1_GPIO_Port GPIOE
#define TRACE_D2_Pin GPIO_PIN_5
#define TRACE_D2_GPIO_Port GPIOE
#define TRACE_D3_Pin GPIO_PIN_6
#define TRACE_D3_GPIO_Port GPIOE
#define PC14_OSC32_IN_Pin GPIO_PIN_14
#define PC14_OSC32_IN_GPIO_Port GPIOC
#define PC15_OSC32_OUT_Pin GPIO_PIN_15
#define PC15_OSC32_OUT_GPIO_Port GPIOC
#define MII_MDC_Pin GPIO_PIN_1
#define MII_MDC_GPIO_Port GPIOC
#define MII_TXD2_Pin GPIO_PIN_2
#define MII_TXD2_GPIO_Port GPIOC
#define MII_TX_CLK_Pin GPIO_PIN_3
#define MII_TX_CLK_GPIO_Port GPIOC
#define MII_CRS_Pin GPIO_PIN_0
#define MII_CRS_GPIO_Port GPIOA
#define MII_RX_CLK_Pin GPIO_PIN_1
#define MII_RX_CLK_GPIO_Port GPIOA
#define MII_MDIO_Pin GPIO_PIN_2
#define MII_MDIO_GPIO_Port GPIOA
#define MII_COL_Pin GPIO_PIN_3
#define MII_COL_GPIO_Port GPIOA
#define MicroSDCard_CS_Pin GPIO_PIN_4
#define MicroSDCard_CS_GPIO_Port GPIOA
#define IDD_Measurement_Pin GPIO_PIN_6
#define IDD_Measurement_GPIO_Port GPIOA
#define Potentiometer_Pin GPIO_PIN_4
#define Potentiometer_GPIO_Port GPIOC
#define VBAT_Voltage_OUT_Pin GPIO_PIN_5
#define VBAT_Voltage_OUT_GPIO_Port GPIOC
#define LCD_CS_Pin GPIO_PIN_2
#define LCD_CS_GPIO_Port GPIOB
#define MII_TX_EN_Pin GPIO_PIN_11
#define MII_TX_EN_GPIO_Port GPIOB
#define MII_TXD0_I2S_CMD_Pin GPIO_PIN_12
#define MII_TXD0_I2S_CMD_GPIO_Port GPIOB
#define MII_TXD1_I2S_CK_Pin GPIO_PIN_13
#define MII_TXD1_I2S_CK_GPIO_Port GPIOB
#define IO_Expander_INT_Pin GPIO_PIN_14
#define IO_Expander_INT_GPIO_Port GPIOB
#define I2S_DIN_Pin GPIO_PIN_15
#define I2S_DIN_GPIO_Port GPIOB
#define MII_RX_DV_Pin GPIO_PIN_8
#define MII_RX_DV_GPIO_Port GPIOD
#define MII_RXD0_Pin GPIO_PIN_9
#define MII_RXD0_GPIO_Port GPIOD
#define MII_RXD1_Pin GPIO_PIN_10
#define MII_RXD1_GPIO_Port GPIOD
#define MII_RXD2_Pin GPIO_PIN_11
#define MII_RXD2_GPIO_Port GPIOD
#define MII_RXD3_Pin GPIO_PIN_12
#define MII_RXD3_GPIO_Port GPIOD
#define LED2_Pin GPIO_PIN_13
#define LED2_GPIO_Port GPIOD
#define I2S_MCK_Pin GPIO_PIN_6
#define I2S_MCK_GPIO_Port GPIOC
#define USB_PowerSwitchOn_Pin GPIO_PIN_9
#define USB_PowerSwitchOn_GPIO_Port GPIOC
#define MCO_Pin GPIO_PIN_8
#define MCO_GPIO_Port GPIOA
#define USB_VBUS_Pin GPIO_PIN_9
#define USB_VBUS_GPIO_Port GPIOA
#define USB_ID_Pin GPIO_PIN_10
#define USB_ID_GPIO_Port GPIOA
#define USB_DM_Pin GPIO_PIN_11
#define USB_DM_GPIO_Port GPIOA
#define USB_DP_Pin GPIO_PIN_12
#define USB_DP_GPIO_Port GPIOA
#define TMS_SWDIO_Pin GPIO_PIN_13
#define TMS_SWDIO_GPIO_Port GPIOA
#define TCK_SWCLK_Pin GPIO_PIN_14
#define TCK_SWCLK_GPIO_Port GPIOA
#define TDI_Pin GPIO_PIN_15
#define TDI_GPIO_Port GPIOA
#define SPI3_SCK_Pin GPIO_PIN_10
#define SPI3_SCK_GPIO_Port GPIOC
#define SPI3_MISO_Pin GPIO_PIN_11
#define SPI3_MISO_GPIO_Port GPIOC
#define SPI3_MOSI_Pin GPIO_PIN_12
#define SPI3_MOSI_GPIO_Port GPIOC
#define CAN1_RX_Pin GPIO_PIN_0
#define CAN1_RX_GPIO_Port GPIOD
#define CAN1_TX_Pin GPIO_PIN_1
#define CAN1_TX_GPIO_Port GPIOD
#define LED3_Pin GPIO_PIN_3
#define LED3_GPIO_Port GPIOD
#define LED4_Pin GPIO_PIN_4
#define LED4_GPIO_Port GPIOD
#define USART2_TX_Pin GPIO_PIN_5
#define USART2_TX_GPIO_Port GPIOD
#define USART2_RX_Pin GPIO_PIN_6
#define USART2_RX_GPIO_Port GPIOD
#define LED1_Pin GPIO_PIN_7
#define LED1_GPIO_Port GPIOD
#define TDO_Pin GPIO_PIN_3
#define TDO_GPIO_Port GPIOB
#define I2C1_SCK_Pin GPIO_PIN_6
#define I2C1_SCK_GPIO_Port GPIOB
#define I2C1_SDA_Pin GPIO_PIN_7
#define I2C1_SDA_GPIO_Port GPIOB
#define MII_TXD3_Pin GPIO_PIN_8
#define MII_TXD3_GPIO_Port GPIOB
#define User_Button_Pin GPIO_PIN_9
#define User_Button_GPIO_Port GPIOB
#define MicroSDCard_Detection_Pin GPIO_PIN_0
#define MicroSDCard_Detection_GPIO_Port GPIOE
#define USB_OverCurrent_Pin GPIO_PIN_1
#define USB_OverCurrent_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */
#define PAUSE_STATUS     ((uint32_t)0x00)
#define RESUME_STATUS    ((uint32_t)0x01)
#define IDLE_STATUS      ((uint32_t)0x02)
#define SECTOR_COUNT 8
/* USER CODE END Private defines */

const uint16_t sectorColors[SECTOR_COUNT] = {
	0xEC1D, 0x03E0, LCD_COLOR_GREEN, LCD_COLOR_BLUE, LCD_COLOR_CYAN,
    LCD_COLOR_MAGENTA, LCD_COLOR_YELLOW, LCD_COLOR_WHITE
};
const uint16_t sectorHighlight[SECTOR_COUNT] = {
    LCD_COLOR_RED, LCD_COLOR_RED, LCD_COLOR_RED, LCD_COLOR_RED,
    LCD_COLOR_RED, LCD_COLOR_RED, LCD_COLOR_RED, LCD_COLOR_RED
};

int centerX, centerY, radius;
static int lastSpinIdx = 0;

/* Draws one sector of the wheel of fortune */
void drawSector(int idx, uint16_t color)
{
    const int steps = 12;
    float angleStart = idx * (360.0f / SECTOR_COUNT);
    float angleEnd   = (idx + 1) * (360.0f / SECTOR_COUNT);
    fillSectorScanline(idx, color);
    Point pts[steps + 2];
    pts[0].X = centerX;
    pts[0].Y = centerY;
    for (int i = 0; i <= steps; i++) {
        float angle = angleStart + (angleEnd - angleStart) * i / steps;
        float rad = angle * 3.14159f / 180.0f;
        pts[i + 1].X = centerX + (int)(radius * cosf(rad));
        pts[i + 1].Y = centerY + (int)(radius * sinf(rad));
    }
    BSP_LCD_SetTextColor(LCD_COLOR_BLACK);
    BSP_LCD_DrawPolygon(pts, steps + 2);
}

/* Draws a full wheel of fortune */
void drawWheel(void) {
    for (int i = 0; i < SECTOR_COUNT; i++) {
        drawSector(i, sectorColors[i]);
    }
}

/* Spin animation */
void spinWheel(void) {
    int totalSteps = 8 + (rand() % 8);
    int prev = -1;
    int delay = 50;

    for (int step = 0; step < totalSteps; step++) {
    	int idx = (lastSpinIdx + step) % SECTOR_COUNT;

        if (prev >= 0) {
            drawSector(prev, sectorColors[prev]);
        }

        drawSector(idx, sectorHighlight[idx]);
        HAL_Delay(delay);
        if (delay < 500) delay += 20;
        prev = idx;
    }
    if (prev >= 0)
    	lastSpinIdx = prev;
}


/* System clock configuration */
void SystemClock_Config(void) {
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
    RCC_OscInitStruct.HSEState = RCC_HSE_ON;
    RCC_OscInitStruct.HSIState = RCC_HSI_ON;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
    RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
    HAL_RCC_OscConfig(&RCC_OscInitStruct);

    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
    HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2);
}

void Error_Handler(void) {
	/* USER CODE BEGIN Error_Handler_Debug */
	__disable_irq();
	while (1) {
	}
	/* USER CODE END Error_Handler_Debug */
}

static void fillSectorScanline(int idx, uint16_t fillColor)
{
    float angleStart = idx * (360.0f / SECTOR_COUNT);
    float angleEnd   = (idx + 1) * (360.0f / SECTOR_COUNT);
    float r1 = angleStart * 3.14159f / 180.0f;
    float r2 = angleEnd   * 3.14159f / 180.0f;
    int x1 = centerX + (int)(radius * cosf(r1));
    int y1 = centerY + (int)(radius * sinf(r1));
    int x2 = centerX + (int)(radius * cosf(r2));
    int y2 = centerY + (int)(radius * sinf(r2));
    int yMin = centerY, yMax = centerY;
    if (y1 < yMin) yMin = y1;
    if (y2 < yMin) yMin = y2;
    if (y1 > yMax) yMax = y1;
    if (y2 > yMax) yMax = y2;
    int H = BSP_LCD_GetYSize();
    if (yMin < 0) yMin = 0;
    if (yMax >= H) yMax = H - 1;
    BSP_LCD_SetTextColor(fillColor);
    const int arcSamples = 180;
    for (int y = yMin; y <= yMax; y++)
    {
        int xHits[4];
        int hits = 0;
        if (y1 != centerY) {
            if ((y >= centerY && y <= y1) || (y >= y1 && y <= centerY)) {
                float t = (float)(y - centerY) / (float)(y1 - centerY);
                int x = centerX + (int)((x1 - centerX) * t);
                xHits[hits++] = x;
            }
        }
        if (y2 != centerY) {
            if ((y >= centerY && y <= y2) || (y >= y2 && y <= centerY)) {
                float t = (float)(y - centerY) / (float)(y2 - centerY);
                int x = centerX + (int)((x2 - centerX) * t);
                xHits[hits++] = x;
            }
        }
        int arcFound = 0;
        int arcXMin =  32767;
        int arcXMax = -32768;
        for (int i = 0; i <= arcSamples; i++)
        {
            float a = angleStart + (angleEnd - angleStart) * (float)i / (float)arcSamples;
            float rad = a * 3.14159f / 180.0f;
            int xa = centerX + (int)(radius * cosf(rad));
            int ya = centerY + (int)(radius * sinf(rad));

            if (ya == y) {
                if (xa < arcXMin) arcXMin = xa;
                if (xa > arcXMax) arcXMax = xa;
                arcFound = 1;
            }
        }
        if (arcFound) {
            xHits[hits++] = arcXMin;
            xHits[hits++] = arcXMax;
        }
        if (hits < 2) continue;
        int xL = xHits[0], xR = xHits[0];
        for (int i = 1; i < hits; i++) {
            if (xHits[i] < xL) xL = xHits[i];
            if (xHits[i] > xR) xR = xHits[i];
        }
        int W = BSP_LCD_GetXSize();
        if (xL < 0) xL = 0;
        if (xR >= W) xR = W - 1;
        if (xR >= xL) {
            BSP_LCD_DrawHLine(xL, y, (uint16_t)(xR - xL + 1));
        }
    }
}

/* Main function */
int main(void) {
    HAL_Init();
    SystemClock_Config();

    BSP_LCD_Init();
    BSP_IO_Init();
    BSP_LCD_Clear(LCD_COLOR_BLACK);
    BSP_LCD_SetBackColor(LCD_COLOR_BLACK);

    centerX = BSP_LCD_GetXSize() / 2;
    centerY = BSP_LCD_GetYSize() / 2;
    radius = (centerX < centerY ? centerX : centerY) - 20;

    drawWheel();

    BSP_JOY_Init(JOY_MODE_GPIO);

    srand(HAL_GetTick());

    while (1) {
    	JOYState_TypeDef state = BSP_JOY_GetState();
    	if (state == JOY_SEL) {
    	    spinWheel();
    	    HAL_Delay(200);
    	}
    }
}

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
