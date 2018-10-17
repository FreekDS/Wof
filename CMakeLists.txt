cmake_minimum_required(VERSION 3.12)
project(testing)

set(CMAKE_CXX_STANDARD 11)
message("\t\t--------------------> C++ VERSION: " ${CMAKE_CXX_STANDARD})
set(CMAKE_CXX_FLAGS -Wall)
message("\t\t--------------------> COMPILER FLAGS SET: " ${CMAKE_CXX_FLAGS})
set(CMAKE_EXE_LINKER_FLAGS -pthread)
message("\t\t--------------------> LINKER FLAGS SET: " ${CMAKE_EXE_LINKER_FLAGS})

# Setting SFML variables
set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR SFML-2.5.0/lib/cmake/SFML)

include_directories(include)

link_directories(SFML-2.5.0/extlib)

set(SOURCE_FILES
        src/main.cpp

        src/States/GameState.cpp
        src/States/MainMenu.cpp
        src/States/MainGame.cpp
        src/States/Settings.cpp

        src/UI/Score.cpp
        src/UI/Countdown.cpp
        src/UI/DogSelector.cpp

        src/Entities/Player.cpp
        src/Entities/Entity.cpp
        src/Entities/Ball.cpp

        src/CollisionManager.cpp)

# Create executable
add_executable(testing ${SOURCE_FILES})

# Search for SFML
find_package(SFML COMPONENTS system graphics window network audio)
if(NOT SFML_FOUND)
    message("ERROR: DINT FIND SFML")
else()
    message("\t\t--------------------> SFML FOUND")
    include_directories(SFML-2.5.0/include)
    target_link_libraries(testing sfml-system sfml-graphics sfml-audio ogg)
    message("\t\t--------------------> Successfully linked SFML")
endif()