cmake_minimum_required(VERSION 3.5)
list(APPEND EXTRA_COMPONENT_DIRS
	lib
	components
	main
)
include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(esp32)
