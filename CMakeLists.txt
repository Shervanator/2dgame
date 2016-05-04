cmake_minimum_required (VERSION 2.8.11)
project (2dGame)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${2dGame_SOURCE_DIR}/CMakeModules)

find_package(OpenGL REQUIRED)
find_package(GLFW3 REQUIRED)

include_directories(${GLFW_INCLUDE_DIR})

set(game_libs
  ${OPENGL_LIBRARY}
  ${GLFW_LIBRARY}
)

add_executable (game src/main.cpp src/window.cpp src/window_manager.cpp)
target_link_libraries (game ${game_libs})
