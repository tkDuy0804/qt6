# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Get_Folder_Items_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Get_Folder_Items_autogen.dir\\ParseCache.txt"
  "Get_Folder_Items_autogen"
  )
endif()
