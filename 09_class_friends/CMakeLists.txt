cmake_minimum_required (VERSION 3.8)
project(roll_friend_library)

add_library(roll_friend_library "roll_friend.cpp" "roll_friend.h")
add_executable(09_roll_friend_exe "main.cpp" "roll_friend.cpp")
target_link_libraries(09_roll_friend_exe die_library)





