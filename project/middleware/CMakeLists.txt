add_library(middleware STATIC
    auth_midware/auth_midware.c
    auth_midware/auth_midware.h
    storage/storage.c
    storage/storage.h
    utils/utils.c
    utils/utils.h)

target_include_directories(middleware PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(middleware PUBLIC driver)
target_link_libraries(middleware PUBLIC interfaces)