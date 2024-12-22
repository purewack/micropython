#include <py/mpconfig.h>
#include "ulp_io_numcalcium.h"
#include "ulp_riscv.h"

extern const uint8_t ulp_main_bin_start[] asm("_binary_ulp_io_numcalcium_bin_start");
extern const uint8_t ulp_main_bin_end[]   asm("_binary_ulp_io_numcalcium_bin_end");

void NUMCALCIUM_board_init(){
    esp_err_t err = ulp_riscv_load_binary(ulp_main_bin_start, (ulp_main_bin_end - ulp_main_bin_start));
    ESP_ERROR_CHECK(err);

    ulp_set_wakeup_period(0, 1000);

    err = ulp_riscv_run();
    ESP_ERROR_CHECK(err);
}
