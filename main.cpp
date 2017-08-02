#include <iostream>
#include <fstream>

int count_lines(char *filename) {
    int count = 0;
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "Wrong filename!\n" << std::endl;
    } else {
        for (std::string line; std::getline(file, line);) {
            count++;
        }
    }

    file.close();
    return count;
}

int main(int argc, char *argv[]) {
    if (argc == 2) {
        std::cout << count_lines(argv[1]) << std::endl;
    } else {
        std::cout << "please provide filename" << std::endl;
    }
    return 0;
}