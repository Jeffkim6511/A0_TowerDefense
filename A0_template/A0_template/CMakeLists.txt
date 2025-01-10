cmake_minimum_required(VERSION 3.6)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set the project name
project(tinyECS)

# add the executable
add_executable(ecs_test src/ecs_test.cpp 
						src/tinyECS/components.hpp
						src/tinyECS/entity.hpp
						src/tinyECS/tiny_ecs.hpp
						src/tinyECS/tiny_ecs.cpp
						src/tinyECS/trace.h)

# fix visual studio startup project and structure
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ecs_demo)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
