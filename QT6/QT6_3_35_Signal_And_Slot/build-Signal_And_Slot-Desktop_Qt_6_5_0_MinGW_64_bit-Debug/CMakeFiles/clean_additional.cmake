# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Signal_And_Slot_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Signal_And_Slot_autogen.dir\\ParseCache.txt"
  "Signal_And_Slot_autogen"
  )
endif()
