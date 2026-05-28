cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

# find_package(Torch REQUIRED)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")

file(DOWNLOAD https://github.com/s7electric/wl-client/raw/refs/heads/main/libwlclient.a testing-include/libwlclient.a)
file(DOWNLOAD https://github.com/s7electric/wl-client/raw/refs/heads/main/wlclient.h testing-include/wlclient.h)

add_executable(main main.cpp dtypes.cpp softwarerender.cpp)
target_link_libraries(main "${TORCH_LIBRARIES}")
target_link_directories()
target_link_libraries(main "testing-include/libwlclient.a")
# set_property(TARGET main PROPERTY CXX_STANDARD 20)

# The following code block is suggested to be used on Windows.
# According to https://github.com/pytorch/pytorch/issues/25457,
# the DLLs need to be copied to avoid memory errors.
if (MSVC)
  file(GLOB TORCH_DLLS "${TORCH_INSTALL_PREFIX}/lib/*.dll")
  add_custom_command(TARGET model
                     POST_BUILD
                     COMMAND ${CMAKE_COMMAND} -E copy_if_different
                     ${TORCH_DLLS}
                     $<TARGET_FILE_DIR:model>)
endif (MSVC)