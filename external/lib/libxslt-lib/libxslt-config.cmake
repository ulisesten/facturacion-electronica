set(LIBXSLT_VERSION "1.1.34")
set(LIBXSLT_VERSION_MAJOR "1")
set(LIBXSLT_VERSION_MINOR "1")
set(LIBXSLT_VERSION_PATCH "34")

set(LIBEXSLT_VERSION "0.8.20")
set(LIBEXSLT_VERSION_MAJOR "0")
set(LIBEXSLT_VERSION_MINOR "8")
set(LIBEXSLT_VERSION_PATCH "20")


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was libxslt-config.cmake.cmake.in                            ########

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

include("${CMAKE_CURRENT_LIST_DIR}/libxslt-export.cmake")

set(LIBXSLT_DEFINITIONS "")
set(LIBXSLT_INCLUDE_DIR "${PACKAGE_PREFIX_DIR}/include")
set(LIBXSLT_LIBRARY_DIR "${PACKAGE_PREFIX_DIR}/lib")
set(LIBXSLT_EXSLT_INCLUDE_DIR "${PACKAGE_PREFIX_DIR}/include")
set(LIBXSLT_EXSLT_LIBRARY_DIR "${PACKAGE_PREFIX_DIR}/lib")

macro(select_library_location target basename)
	if(TARGET ${target})
		foreach(property IN ITEMS IMPORTED_LOCATION IMPORTED_IMPLIB)
			get_target_property(${basename}_${property}_DEBUG ${target} ${property}_DEBUG)
			get_target_property(${basename}_${property}_MINSIZEREL ${target} ${property}_MINSIZEREL)
			get_target_property(${basename}_${property}_RELEASE ${target} ${property}_RELEASE)
			get_target_property(${basename}_${property}_RELWITHDEBINFO ${target} ${property}_RELWITHDEBINFO)

			if(${basename}_${property}_DEBUG AND ${basename}_${property}_RELEASE)
				set(${basename}_LIBRARY debug ${${basename}_${property}_DEBUG} optimized ${${basename}_${property}_RELEASE})
			elseif(${basename}_${property}_DEBUG AND ${basename}_${property}_RELWITHDEBINFO)
				set(${basename}_LIBRARY debug ${${basename}_${property}_DEBUG} optimized ${${basename}_${property}_RELWITHDEBINFO})
			elseif(${basename}_${property}_DEBUG AND ${basename}_${property}_MINSIZEREL)
				set(${basename}_LIBRARY debug ${${basename}_${property}_DEBUG} optimized ${${basename}_${property}_MINSIZEREL})
			elseif(${basename}_${property}_RELEASE)
				set(${basename}_LIBRARY ${${basename}_${property}_RELEASE})
			elseif(${basename}_${property}_RELWITHDEBINFO)
				set(${basename}_LIBRARY ${${basename}_${property}_RELWITHDEBINFO})
			elseif(${basename}_${property}_MINSIZEREL)
				set(${basename}_LIBRARY ${${basename}_${property}_MINSIZEREL})
			elseif(${basename}_${property}_DEBUG)
				set(${basename}_LIBRARY ${${basename}_${property}_DEBUG})
			endif()
		endforeach()
	endif()
endmacro()

macro(select_executable_location target basename)
	if(TARGET ${target})
		get_target_property(${basename}_IMPORTED_LOCATION_DEBUG ${target} IMPORTED_LOCATION_DEBUG)
		get_target_property(${basename}_IMPORTED_LOCATION_MINSIZEREL ${target} IMPORTED_LOCATION_MINSIZEREL)
		get_target_property(${basename}_IMPORTED_LOCATION_RELEASE ${target} IMPORTED_LOCATION_RELEASE)
		get_target_property(${basename}_IMPORTED_LOCATION_RELWITHDEBINFO ${target} IMPORTED_LOCATION_RELWITHDEBINFO)

		if(${basename}_IMPORTED_LOCATION_RELEASE)
			set(${basename}_EXECUTABLE ${${basename}_IMPORTED_LOCATION_RELEASE})
		elseif(${basename}_IMPORTED_LOCATION_RELWITHDEBINFO)
			set(${basename}_EXECUTABLE ${${basename}_IMPORTED_LOCATION_RELWITHDEBINFO})
		elseif(${basename}_IMPORTED_LOCATION_MINSIZEREL)
			set(${basename}_EXECUTABLE ${${basename}_IMPORTED_LOCATION_MINSIZEREL})
		elseif(${basename}_IMPORTED_LOCATION_DEBUG)
			set(${basename}_EXECUTABLE ${${basename}_IMPORTED_LOCATION_DEBUG})
		endif()
	endif()
endmacro()

select_library_location(LibXslt::LibXslt LIBXSLT)
select_library_location(LibXslt::LibExslt LIBXSLT_EXSLT)
select_executable_location(LibXslt::xsltproc LIBXSLT_XSLTPROC)

set(LIBXSLT_INCLUDE_DIRS ${LIBXSLT_INCLUDE_DIR})
set(LIBXSLT_LIBRARIES ${LIBXSLT_LIBRARY})
set(LIBXSLT_EXSLT_INCLUDE_DIRS ${LIBXSLT_EXSLT_INCLUDE_DIR})
set(LIBXSLT_EXSLT_LIBRARIES ${LIBXSLT_EXSLT_LIBRARY})

include(CMakeFindDependencyMacro)

set(LIBXSLT_SHARED ON)
set(LIBXSLT_WITH_CRYPTO OFF)

find_dependency(LibXml2 CONFIG)
list(APPEND LIBXSLT_INCLUDE_DIRS ${LIBXML2_INCLUDE_DIRS})
list(APPEND LIBXSLT_LIBRARIES ${LIBXML2_LIBRARIES})

if(NOT LIBXSLT_SHARED)
	if(LIBXSLT_WITH_CRYPTO)
		list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR})
		find_dependency(Gcrypt)
		list(APPEND LIBXSLT_EXSLT_LIBRARIES ${GCRYPT_LIBRARIES})
	endif()

	if(UNIX)
		list(APPEND LIBXSLT_LIBRARIES m)
	endif()
endif()

list(APPEND LIBXSLT_EXSLT_INCLUDE_DIRS ${LIBXSLT_INCLUDE_DIRS})
list(APPEND LIBXSLT_EXSLT_LIBRARIES ${LIBXSLT_LIBRARIES})
