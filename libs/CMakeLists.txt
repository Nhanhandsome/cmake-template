project(libs)

file(GLOB SOURCE src/*.cpp)


add_library(libs STATIC ${SOURCE})

target_include_directories(libs PUBLIC inc)