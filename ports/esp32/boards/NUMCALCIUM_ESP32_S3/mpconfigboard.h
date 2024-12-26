#include <stddef.h>
#ifndef MICROPY_HW_BOARD_NAME
// Can be set by mpconfigboard.cmake.
#define MICROPY_HW_BOARD_NAME               "NumCalcium (ESP32S3-Octal-SPIRAM)"
#endif
#define MICROPY_HW_MCU_NAME                 "ESP32S3"

#define MICROPY_BOARD_STARTUP               NUMCALCIUM_board_init
void NUMCALCIUM_board_init(void);

#define MICROPY_BOARD_TX_HOOK                NUMCALCIUM_tx_hook
void NUMCALCIUM_tx_hook(const char *str, size_t len);

// Enable UART REPL for modules that have an external USB-UART and don't use native USB.
#define MICROPY_HW_ENABLE_UART_REPL         (0)
#define MICROPY_PY_ULP                      (0)

#define MICROPY_HW_I2C0_SCL                 (9)
#define MICROPY_HW_I2C0_SDA                 (8)

#define MICROPY_HW_MODTEST                  (1)
#define MICROPY_HW_MODVT100                 (1)
