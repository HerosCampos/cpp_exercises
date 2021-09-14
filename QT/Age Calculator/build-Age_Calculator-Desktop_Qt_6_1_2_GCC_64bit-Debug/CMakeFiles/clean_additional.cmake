# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Age_Calculator_autogen"
  "CMakeFiles/Age_Calculator_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Age_Calculator_autogen.dir/ParseCache.txt"
  )
endif()
