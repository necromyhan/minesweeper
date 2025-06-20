set(SOURCE_FILES ${CMAKE_SOURCE_DIR}/src/main.c)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

set_target_properties(${PROJECT_NAME}
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY            "${CMAKE_SOURCE_DIR}/output"
    RUNTIME_OUTPUT_DIRECTORY_DEBUG      "${CMAKE_SOURCE_DIR}/output"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE    "${CMAKE_SOURCE_DIR}/output")

find_package(raylib REQUIRED)
find_library(MATH_LIBRARY m)
target_link_libraries(${PROJECT_NAME} ${raylib_LIBRARIES} ${MATH_LIBRARY})
