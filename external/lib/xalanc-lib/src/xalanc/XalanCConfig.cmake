
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was XalanCConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

include(${CMAKE_CURRENT_LIST_DIR}/XalanCConfigInternal.cmake)

add_library(XalanC::XalanC INTERFACE IMPORTED)
set_target_properties(XalanC::XalanC PROPERTIES INTERFACE_LINK_LIBRARIES xalan_xalan-c)

# For compatibility with FindXalanC.
set(XalanC_VERSION "1.12.0")
get_target_property(XalanC_INCLUDE_DIRS xalan_xalan-c INTERFACE_INCLUDE_DIRECTORIES)
set(XalanC_LIBRARIES XalanC::XalanC)
