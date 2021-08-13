cmake_minimum_required(VERSION 2.8...3.10)
project(cfdi-project)

#add_subdirectory(external/xerces-c      ${PROJECT_SOURCE_DIR}/external/lib/xerces-c-lib )
add_subdirectory(external/cfdi-class    ${PROJECT_SOURCE_DIR}/external/lib/cfdi-lib     )

find_package(XercesC REQUIRED)
find_package(OpenSSL REQUIRED)
find_package(XalanC  REQUIRED)
#find_package(LibXslt REQUIRED)
#find_package(LibXml2 REQUIRED)

set(SRC ${PROJECT_SOURCE_DIR}/src/main.cpp
        ${PROJECT_SOURCE_DIR}/src/ssl_functions.cpp
)

add_executable(${PROJECT_NAME} ${SRC})

include_directories(
        #${LIBXSLT_INCLUDE_DIR}
        #${LIBXML2_INCLUDE_DIR}
        #${PROJECT_SOURCE_DIR}/external/xerces-c/src
        ${XalanC_INCLUDE_DIRS}
        ${XercesC_INCLUDE_DIRS}
        ${PROJECT_SOURCE_DIR}/external/cfdi-class/include
        ${PROJECT_SOURCE_DIR}/include
)

target_link_directories(
        ${PROJECT_NAME}
            PUBLIC
                #${LIBXSLT_LIBRARIES}
                #${LIBXML2_LIBRARIES}
                ${XalanC_LIBRARIES}
                ${XercesC_LIBRARIES}
                #${PROJECT_SOURCE_DIR}/external/lib/xerces-c-lib/src
                ${PROJECT_SOURCE_DIR}/external/lib/cfdi-lib
)

target_link_libraries(
        ${PROJECT_NAME}
            OpenSSL::SSL
            CFDI 
            #xerces-c-3.2
            #xslt
            #xml2
            XalanC::XalanC
            XercesC::XercesC
)
