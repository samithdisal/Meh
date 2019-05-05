
add_executable(meh main.cpp context.cpp context.h scene.cpp scene.h game_object.cpp game_object.h)

target_link_libraries(meh sfml-system sfml-window sfml-graphics sfml-audio sfml-network)