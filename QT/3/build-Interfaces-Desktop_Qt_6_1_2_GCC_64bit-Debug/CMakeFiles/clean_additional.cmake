# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Interfaces_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Interfaces_autogen.dir/ParseCache.txt"
  "Interfaces_autogen"
  )
endif()
