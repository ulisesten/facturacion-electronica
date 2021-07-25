cmake_minimum_required(VERSION 2.8...3.10)

project(cfdi-project)

set(SRC ${PROJECT_SOURCE_DIR}/src/main.cpp
        ${PROJECT_SOURCE_DIR}/src/cfdv33.cxx
        ${PROJECT_SOURCE_DIR}/src/catCFDI.cxx
        ${PROJECT_SOURCE_DIR}/src/tdCFDI.cxx
)

find_package(XercesC REQUIRED)

add_executable(${PROJECT_NAME} ${SRC})

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${XercesC_INCLUDE_DIRS})
link_directories(${XercesC_LIBRARIES})
target_link_libraries(${PROJECT_NAME} XercesC::XercesC)