cmake_minimum_required(VERSION 2.8...3.10)
project(cfdi-project)

set(LibXml2_DIR ${PROJECT_SOURCE_DIR}/external/lib/libxml2-lib)

add_subdirectory(external/xerces-c      ${PROJECT_SOURCE_DIR}/external/lib/xerces-c-lib )
add_subdirectory(external/libxml2       ${PROJECT_SOURCE_DIR}/external/lib/libxml2-lib  )
add_subdirectory(external/libxslt       ${PROJECT_SOURCE_DIR}/external/lib/libxslt-lib  )
add_subdirectory(external/cfdi-class    ${PROJECT_SOURCE_DIR}/external/lib/cfdi-lib     )

set(SRC ${PROJECT_SOURCE_DIR}/src/main.cpp
        ${PROJECT_SOURCE_DIR}/src/ssl_functions.cpp
)

add_executable(${PROJECT_NAME} ${SRC})

include_directories(
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
)
