# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/zoo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/zoo_autogen.dir/ParseCache.txt"
  "zoo_autogen"
  )
endif()
