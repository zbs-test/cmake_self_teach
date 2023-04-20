cmake_minimum_required(VERSION 3.20)

project(cmake_self_teach
    VERSION 0.0.1
    DESCRIPTION "cmake project"   
    # languages
)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(BuildInfo)


add_subdirectory(src)
add_subdirectory(external)
add_subdirectory(docs)
add_subdirectory(test)
add_subdirectory(packaging)