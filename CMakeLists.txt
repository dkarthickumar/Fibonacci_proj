cmake_minimum_required(VERSION 2.8.9)
project (fibonacci)

include_directories(inc)
link_directories(lib)

set(PROJECT_LIBS libgmp.a) 
set(SOURCES src/fibonacci_main.c 
            src/fibonacci_recurcive.c
	    src/fibonacci_itter.c )

add_executable(fibonacci ${SOURCES})
target_link_libraries(fibonacci ${PROJECT_LIBS})

install(TARGETS fibonacci DESTINATION bin)
