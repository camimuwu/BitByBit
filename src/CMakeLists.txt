cmake_minimum_required(VERSION 3.19)
project(BitByBit LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

#Define el ejecutable y los archivos fuente del proyecto
qt_add_executable(BitByBit
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    Operacion.cpp
    Operacion.h
    Suma.cpp
    Suma.h
    Resta.cpp
    Resta.h
    Division.cpp
    Division.h
    Multiplicacion.cpp
    Multiplicacion.h
    Potencia.cpp
    Potencia.h
    Raices.cpp
    Raices.h
)

target_link_libraries(BitByBit
    PRIVATE
    Qt::Core
    Qt::Widgets
)

install(TARGETS BitByBit
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET BitByBit
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)

install(SCRIPT ${deploy_script})
