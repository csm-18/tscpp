#include <iostream>
#include <vector>

int main(int argc, char **argv) {
    std::vector<std::string> args;
	for(int i = 0; i < argc;i+=1){
		args.push_back(argv[i]);
	}

	for(const auto& arg : args){
		std::cout << arg<<"\n";
	}
    return 0;
}
