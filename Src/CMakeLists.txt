set(HEADER_FILES)
set(SOURCE_FILES ${CMAKE_SOURCE_DIR}/Src/main.c)

add_executable(${PROJECT_NAME} ${HEADER_FILES} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} PRIVATE raylib)
