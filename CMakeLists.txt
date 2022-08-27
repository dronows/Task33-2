# CMakeList.txt: проект CMake для Task33-2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("Task33-2")
set(JSON_BuildTests OFF CACHE INTERNAL "") 
add_subdirectory(nlohmann_json)
# Добавьте источник в исполняемый файл этого проекта.
add_executable (Task33-2 "Task33-2.cpp" "Task33-2.h")
target_link_libraries(Task33-2 PRIVATE nlohmann_json::nlohmann_json)
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
