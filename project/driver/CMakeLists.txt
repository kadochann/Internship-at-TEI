# driver/CMakeLists.txt
add_library(driver STATIC
    gpio/gpio.c
    uart/uart.c
    timer/timer.c
)

# Driver kendi klasörünü dışarıya açıyor
target_include_directories(driver PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Driver, interfaces’i kullanıyor
target_link_libraries(driver PUBLIC interfaces)
target_link_libraries(driver PUBLIC middleware)

