# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Project_1_Calculadora_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Project_1_Calculadora_autogen.dir/ParseCache.txt"
  "Project_1_Calculadora_autogen"
  )
endif()
