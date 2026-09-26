cmake_minimum_required(VERSION 3.15)
set(PICO_BOARD pico)
set(PICO_PLATFORM rp2040)
include(pico_sdk_import.cmake)
project(131_hello_usb)
pico_sdk_init()
add_executable(131_hello_usb
	${CMAKE_CURRENT_SOURCE_DIR}/main.c
)
target_link_libraries(131_hello_usb
    pico_stdlib
)
pico_set_linker_script(131_hello_usb
    ${CMAKE_CURRENT_SOURCE_DIR}/memmap_rp2040.ld
)
pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 0)
pico_add_extra_outputs(131_hello_usb)

