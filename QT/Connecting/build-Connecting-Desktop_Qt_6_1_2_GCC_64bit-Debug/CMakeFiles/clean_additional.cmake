# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Connecting_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Connecting_autogen.dir/ParseCache.txt"
  "Connecting_autogen"
  )
endif()
