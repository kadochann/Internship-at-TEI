# App executable
add_executable(application 
    main/main.c
    commands/commands.c
    scheduler/scheduler.c
    state_machine/state_machine.c

)

# App midware (ve o da driver) kullanıyor
target_link_libraries(application PRIVATE middleware driver)
include_directories(${PROJECT_SOURCE_DIR}/application)

