cmake_minimum_required(VERSION 3.6)
project(simple-sfml-cmake-example)

find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

add_executable(simple-sfml-cmake-example src/main.cpp)

target_compile_features(simple-sfml-cmake-example
                        PRIVATE
                        cxx_std_17)

target_compile_options(simple-sfml-cmake-example
                       PRIVATE
                       $<$<CXX_COMPILER_ID:MSVC>:/W3 /permissive- /TP>
					   $<$<CXX_COMPILER_ID:GNU>:-Wall -Wextra>)

# Any additional include files would go here
#target_include_directories(simple-sfml-cmake-example
#                           PUBLIC
#                           )

target_compile_definitions(simple-sfml-cmake-example
                           PRIVATE
                           $<$<CONFIG:Debug>:DEBUG>)

target_link_libraries(simple-sfml-cmake-example
                      PRIVATE
                      sfml-graphics)
