set(IDF_TARGET esp32s3)

set(SDKCONFIG_DEFAULTS
    boards/sdkconfig.base
    ${SDKCONFIG_IDF_VERSION_SPECIFIC}
    boards/sdkconfig.usb
    boards/sdkconfig.ble
    boards/sdkconfig.spiram_sx
    boards/ESP32_GENERIC_S3/sdkconfig.board
    boards/sdkconfig.240mhz
    boards/sdkconfig.spiram_oct
    ${MICROPY_BOARD_DIR}/sdkconfig.board
)

set(MICROPY_SOURCE_BOARD
    ${MICROPY_SOURCE_BOARD}
    ${MICROPY_BOARD_DIR}/board_init.c
    ${MICROPY_BOARD_DIR}/cmodules/modtest.c
    ${MICROPY_BOARD_DIR}/cmodules/modio.c
)

set(MICROPY_FROZEN_MANIFEST ${MICROPY_BOARD_DIR}/manifest.py)

set(ulp_app_name ulp_io_numcalcium)
set(ulp_sources ${MICROPY_BOARD_DIR}/ulp_io/main.c)
set(ulp_exp_dep_srcs "${MICROPY_BOARD_DIR}/cmodules/modio.c ${MICROPY_BOARD_DIR}/board_init.c")
