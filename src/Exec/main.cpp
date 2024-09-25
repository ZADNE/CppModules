#include <print>
#include <iostream>

import Lib;

int main() {
    re::DSL dsl;
    vk::DescriptorSetLayout dsl2{};
    vk::GraphicsPipelineCreateInfo ci{};
    std::println("{} xd {} {}", re::MyFunc(), sizeof(dsl), sizeof(ci));
    int i = 5;
    std::cin >> i;
}