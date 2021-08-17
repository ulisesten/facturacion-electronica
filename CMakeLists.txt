cmake_minimum_required(VERSION 2.8...3.10)
project(cfdi-project)

set(
    CMAKE_PREFIX_PATH
        C:/xerces-c
        C:/xalan-c
)

set(OpenSSL_Include "C:/OpenSSL/include")
set(OpenSSL_Include "C:/OpenSSL/lib")
set(XSD_Include     "C:/XSD/include")


find_package(XercesC REQUIRED)
find_package(XalanC  REQUIRED)

add_subdirectory(external/cfdi-class    ${PROJECT_SOURCE_DIR}/external/lib/cfdi-lib     )

set(SRC ${PROJECT_SOURCE_DIR}/src/main.cpp
        ${PROJECT_SOURCE_DIR}/src/ssl_functions.cpp
)

add_executable(${PROJECT_NAME} ${SRC})

include_directories(
        ${XercesC_INCLUDE_DIRS}
        ${XalanC_INCLUDE_DIRS}
        ${PROJECT_SOURCE_DIR}/external/xalanc/src}
        ${PROJECT_SOURCE_DIR}/external/xalanc/build/src/xalanc/PlatformSupport
        ${XSD_Include}
        ${OpenSSL_Include}
        ${PROJECT_SOURCE_DIR}/external/cfdi-class/include
        ${PROJECT_SOURCE_DIR}/include
)

target_link_directories(
        ${PROJECT_NAME}
            PUBLIC
                ${XercesC_LIBRARIES}
                ${XalanC_LIBRARIES}
                ${OpenSSL_Lib}
                ${PROJECT_SOURCE_DIR}/external/lib/cfdi-lib
)

target_link_libraries(
        ${PROJECT_NAME}
            XercesC::XercesC
            XalanC::XalanC
            CFDI 
            libssl
            libcrypto
)
