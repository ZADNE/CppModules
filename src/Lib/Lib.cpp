module;

#include <iostream>
#include <string>

module Lib;


namespace re {


std::string MyFunc() {
    vk::DescriptorSetLayout dsl{};
    return std::to_string(sizeof(dsl));
}

}