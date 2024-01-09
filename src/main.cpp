#include <format>
#include <iostream>
#include <ranges>
#include <string>
#include <string_view>
#include <vector>

#include "fmt/core.h"

int main() {
  fmt::println("{}{}", std::format("{} {}", "hello", "world"), "!");
}