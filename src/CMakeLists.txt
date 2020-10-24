set(BINARY ${CMAKE_PROJECT_NAME})

if (WIN32)
    set(SFML_PATH "C:/app/SFML-2.5.1" ${CMAKE_MODULE_PATH})
    set(SFML_DIR ${SFML_PATH}/lib/cmake/SFML)
endif(WIN32)

find_package(SFML 2 COMPONENTS window graphics audio REQUIRED)

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.hpp *.cpp)

set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES})
add_library(${BINARY}_lib STATIC ${SOURCES})

target_link_libraries(${BINARY}_run sfml-system sfml-window sfml-graphics sfml-audio)

