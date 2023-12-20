# From https://github.com/grpc/grpc/blob/master/src/cpp/README.md#fetchcontent
#
# Still depends on a few other things to build:
#
#   https://github.com/grpc/grpc/blob/master/BUILDING.md#pre-requisites

cmake_minimum_required(VERSION 3.15)
project(basic_example)

include(FetchContent)
set(FETCHCONTENT_QUIET OFF)

# GRPC
FetchContent_Declare(
  gRPC
  GIT_REPOSITORY https://github.com/grpc/grpc
  GIT_TAG        v1.28.0
  GIT_SHALLOW    true
)
FetchContent_MakeAvailable(gRPC)

add_executable(basic_example server.cc)
target_link_libraries(basic_example grpc++)