cmake_minimum_required(VERSION 3.21)

include(src/pico_sdk_import.cmake)

project(pico-keylogger)

pico_sdk_init()

add_executable(keylogger
    src/main.c
    src/GPIO_INIT.c
)

target_include_directories(keylogger PRIVATE src)  # Include src/ directory for header files

target_link_libraries(keylogger pico_stdlib)

pico_enable_stdio_usb(keylogger 1)
pico_enable_stdio_uart(keylogger 0)

pico_add_extra_outputs(keylogger)
