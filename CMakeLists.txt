cmake_minimum_required(VERSION 2.8...3.10)
project(cfdi-project)

set(SRC ${PROJECT_SOURCE_DIR}/src/main.cpp
        ${PROJECT_SOURCE_DIR}/src/ssl_functions.cpp
)

add_subdirectory(external/cfdi-class    ${PROJECT_SOURCE_DIR}/external/lib/cfdi-lib)
add_subdirectory(external/xalanc        ${PROJECT_SOURCE_DIR}/external/lib/xalanc-lib)

find_package(OpenSSL REQUIRED)
find_package(XercesC REQUIRED)
#find_package(LibXslt REQUIRED)
#find_library(CFDI NAMES CFDI PATHS ${PROJECT_SOURCE_DIR}/internal_libs/lib )

add_executable(${PROJECT_NAME} ${SRC})

#message(STATUS ${PROJECT_SOURCE_DIR}/cfdi/lib)

include_directories(
        ${XercesC_INCLUDE_DIRS}
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/external/cfdi-class/include
        ${PROJECT_SOURCE_DIR}/external/chilkat/include

        ${PROJECT_SOURCE_DIR}/external/lib/xalanc-lib/src
        ${PROJECT_SOURCE_DIR}/external/lib/xalanc-lib/src/xalanc/PlatformSupport
        ${PROJECT_SOURCE_DIR}/external/xalanc/src
        #${LIBXSLT_INCLUDE_DIR}
)



link_directories(
        ${XercesC_LIBRARIES}
        ${LIBXSLT_LIBRARIES}
)

target_link_directories(
        ${PROJECT_NAME}
            PUBLIC
                ${PROJECT_SOURCE_DIR}/external/lib/cfdi-lib
                ${PROJECT_SOURCE_DIR}/external/chilkat/lib
                ${PROJECT_SOURCE_DIR}/external/xalanc-lib/src/xalanc
)

target_link_libraries(
        ${PROJECT_NAME}
            CFDI 
            XercesC::XercesC
            OpenSSL::SSL
            chilkat-9.5.0
            pthread
            resolv
            dl
            xalan-c
            #Xslt
)
