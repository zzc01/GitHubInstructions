/*
Q. Given a list of strings, having same format as question 1. Now print the whole file structure. if there are multiple files or directories in a directory, then order them based on the order in the input.
input:
'/a/c/ac', 'a/b/ab', 'b/c/bc', 'a/c/ac2'

output:
a
-c
--ac
--ac2
-b
--ab
b
-c
--bc

1) Parse the path [a, c, ac]
2) Generate the Trie nodes
3) Take care of the order by using an array and a index map

*/
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <sstream>      // std::stringstream

#include "Node.cpp"
#include "Trie.cpp"


int main() {
    std::cout << "Hello World!\n";

    std::vector<std::string> paths = { "/a/c/ac", "/a/b/ab", "/b/c/bc", "/a/c/ac2" };
    Trie* trie = new Trie();
    trie->add(paths);
    trie->print();

}