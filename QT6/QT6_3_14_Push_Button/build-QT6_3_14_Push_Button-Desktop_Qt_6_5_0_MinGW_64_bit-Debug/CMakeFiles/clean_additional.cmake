# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QT6_3_14_Push_Button_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QT6_3_14_Push_Button_autogen.dir\\ParseCache.txt"
  "QT6_3_14_Push_Button_autogen"
  )
endif()
