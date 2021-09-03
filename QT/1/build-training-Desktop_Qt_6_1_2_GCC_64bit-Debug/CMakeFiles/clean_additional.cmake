# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/training_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/training_autogen.dir/ParseCache.txt"
  "training_autogen"
  )
endif()
