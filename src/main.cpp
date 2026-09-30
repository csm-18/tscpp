#include <iostream>
#include <vector>
#include <cstdlib>
#include "utils.hpp"
#include "arg_parser.hpp"

bool is_build_command(std::string name);

//entry-point to the compiler
int main(int argc, char **argv) {
    //command-line arguments
    std::vector<std::string> args;
		for(int i = 1; i < argc;i+=1){
			args.push_back(argv[i]);	
		}

		if(args.size() != 0 && is_build_command(args[0])){
			//build mode
			std::cout << "Build command is not implemented yet!\n";
			std::exit(1);
		}

    parse(args);
	return 0;
}

bool is_build_command(std::string name){
	name = to_lower(name);
	if(name == "-build" || name == "--build" || name == "-b" || name == "--b")
		return true;	
	return false;
}
