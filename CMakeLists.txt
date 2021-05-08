cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(BlackJack VERSION 1.0)
add_executable(BlackJack blackjack.cpp Game.cpp GenericPlayer.cpp Card.cpp Hand.cpp Deck.cpp Player.cpp House.cpp)