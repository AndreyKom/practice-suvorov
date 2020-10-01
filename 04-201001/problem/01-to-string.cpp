#include <cassert>
#include <vector>
#include <string>
#include <sstream>

using Container = std::vector<int>;
using ContainerIterator = Container::iterator;

std::string to_string(ContainerIterator begin, ContainerIterator end) {
    std::string answer = "{";
    std::stringsteam ss;
    for(std::vector<int>::iterator i = begin; i < end - 1; i++) answer += ss.str(*i) + ", ";
    answer += ss.str(*(end - 1)) + "}";
    return answer;
}

int main() {
    Container data = {1, 2, 3, 4, 5};

    assert(to_string(data.begin(), data.end()) == "{1, 2, 3, 4, 5}");
    assert(to_string(data.begin() + 2, data.end() - 1) == "{3, 4}");
    assert(to_string(data.end(), data.end()) == "{}");
    assert(to_string(data.begin() + 2, data.begin() + 2) == "{}");
}
