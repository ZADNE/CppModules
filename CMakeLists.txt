cmake_minimum_required(VERSION 3.28)
project(CppModules)


# VulkanModule
find_package(Vulkan REQUIRED COMPONENTS glslc)
add_library(VulkanModule STATIC)
set_target_properties(VulkanModule
    PROPERTIES
        CXX_STANDARD 23
)
target_sources(VulkanModule
    PUBLIC FILE_SET CXX_MODULES BASE_DIRS ${Vulkan_INCLUDE_DIRS} FILES
        ${Vulkan_INCLUDE_DIRS}/vulkan/vulkan.cppm
)
target_include_directories(VulkanModule
    PRIVATE
        ${Vulkan_INCLUDE_DIRS}
)

# Lib
add_library(Lib STATIC)
set_target_properties(Lib
    PROPERTIES
        CXX_STANDARD 23
)
target_link_libraries(Lib
    PRIVATE
        VulkanModule
)

# Exec
add_executable(Exec)
set_target_properties(Exec
    PROPERTIES
        CXX_STANDARD 23
)
target_link_libraries(Exec
    PUBLIC
        Lib
)

add_subdirectory(src)

#