#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <sstream>      // std::stringstream

#include "Node.cpp"

struct Trie {
    Node* _root;
public:
    Trie() {
        _root = new Node();                 // mistake for got to declare the object 
    }
    void add(std::vector<std::string>& path) {
        for (int i = 0; i < path.size(); i++) {
            std::cout << path[i] << std::endl;
            std::vector<std::string> parsed = parsePath(path[i]);
            Node* node = _root;
            for (int j = 0; j < parsed.size(); j++) {
                // cout << parsed[j] << endl; 
                std::string s = parsed[j];
                if (!node->children_idx.count(s)) {
                    node->children_ptr.push_back(new Node(s));        // mistake. change this part to make the print out order same as input 
                    node->children_idx[s] = (int)node->children_ptr.size() - 1;
                }
                node = node->children_ptr[node->children_idx[s]];
            }
        }
    }

    std::vector<std::string> parsePath(std::string& pathname) {
        pathname = pathname.substr(1);          // mistake for got to assign to string 
        std::stringstream ss(pathname);
        std::string word;
        int count = 0;
        std::vector<std::string> parsed;
        while (getline(ss, word, '/')) {
            int i = count;
            while (i > 0) {
                word = "-" + word;
                i--;
            }
            // cout << word << endl; 
            count++;
            parsed.push_back(word);
        }
        return parsed;
    }

    void print() {
        Node* node = _root;
        dfs(node, 0);
    }

    void dfs(Node* node, int depth) {
        for (Node* curr : node->children_ptr) {
            // cout << "depth: " << depth << endl; 
            int i = depth;
            // while(i>0){                          // moved this part to the parsing method 
            //     cout << "-"; 
            //     i--;                            // mistake; 
            // }
            std::cout << curr->name << std::endl;
            dfs(curr, depth + 1);
        }
    }
};

