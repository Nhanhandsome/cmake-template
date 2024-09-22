project(app)

file(GLOB SOURCE src/*.cpp)

add_executable(app ${SOURCE})

target_include_directories(app PUBLIC inc)
target_link_libraries(app libs)