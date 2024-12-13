cmake_minimum_required(VERSION 3.16)

project(DBConnectionApp)

# Указываем C++ стандарт
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Включаем автоматическую обработку Qt файлов
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Подключаем Qt6 пакеты
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Добавляем исполняемый файл
add_executable(DBConnectionApp
    main.cpp
    dbconnectiondialog.cpp
    dbconnectiondialog.h
    dbconnectiondialog.ui
)

# Линкуем с необходимыми библиотеками
target_link_libraries(DBConnectionApp PRIVATE Qt6::Widgets)
