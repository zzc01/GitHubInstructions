#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <sstream>      // std::stringstream


struct Node {
    std::string name;
    std::unordered_map<std::string, int> children_idx;        // want to print out in-order 
    std::vector<Node*> children_ptr;
    Node() {}                    // mistake, you need to define the constructor. 
    Node(std::string name) {
        this->name = name;
    }
};
