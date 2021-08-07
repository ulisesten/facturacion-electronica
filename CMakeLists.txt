cmake_minimum_required(VERSION 2.8...3.10)
project(cfdi-project)

set(CMAKE_PREFIX_PATH ${PROJECT_SOURCE_DIR}/external/lib/libxml2-lib)
#set(Qt5_DIR "put dir here")

add_subdirectory(external/libxml2       ${PROJECT_SOURCE_DIR}/external/lib/libxml2-lib  )
add_subdirectory(external/libxslt       ${PROJECT_SOURCE_DIR}/external/lib/libxslt-lib  )
add_subdirectory(external/xerces-c      ${PROJECT_SOURCE_DIR}/external/lib/xerces-c-lib )
add_subdirectory(external/cfdi-class    ${PROJECT_SOURCE_DIR}/external/lib/cfdi-lib     )

find_package(OpenSSL REQUIRED)
#find_package(QT NAMES Qt6 COMPONENTS Core REQUIRED)
#find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

set(SRC ${PROJECT_SOURCE_DIR}/src/main.cpp
        ${PROJECT_SOURCE_DIR}/src/ssl_functions.cpp
)

add_executable(${PROJECT_NAME} ${SRC})

include_directories(
        ${PROJECT_SOURCE_DIR}/external/libxml2/include
        ${PROJECT_SOURCE_DIR}/external/lib/libxml2-lib
        ${PROJECT_SOURCE_DIR}/external/lib/libxslt-lib
        ${PROJECT_SOURCE_DIR}/external/xerces-c/src
        ${PROJECT_SOURCE_DIR}/external/cfdi-class/include
        ${PROJECT_SOURCE_DIR}/include
)

target_link_directories(
        ${PROJECT_NAME}
            PUBLIC
                ${PROJECT_SOURCE_DIR}/external/lib/libxml2-lib
                ${PROJECT_SOURCE_DIR}/external/lib/libxslt-lib
                ${PROJECT_SOURCE_DIR}/external/lib/xerces-c-lib/src
                ${PROJECT_SOURCE_DIR}/external/lib/cfdi-lib
)

target_link_libraries(
        ${PROJECT_NAME}
            OpenSSL::SSL
            CFDI 
            xerces-c-3.2
            xslt
            xml2
            pthread
            #Qt${QT_VERSION_MAJOR}::Core
)
