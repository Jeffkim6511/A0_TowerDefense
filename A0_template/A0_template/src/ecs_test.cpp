#include <fstream>		// for reading text files
#include <iostream>
#include <sstream>		// string-stream for splitting lines
#include "tinyECS/tiny_ecs.hpp"

//
// forward function declarations (fn bodies are below main)
//
bool buoyancy_system(Registry& entity_registry, float buoyancy);
bool load_entities(std::string& filename, Registry& entity_registry);

//
// main
int main(int argc, char* argv[])
{
    Registry entity_registry;

	// default filename, with a command line override below
	std::string filename = "tests//happy_path.txt";

	// override the filename with a command line to support testing with other configurations
	if (argc > 1) {
		filename = argv[1];
	}
	
	if (!load_entities(filename, entity_registry))
	{
		std::cout << "ERROR: failed to load entities from file: " << filename << std::endl;
		return -1;
	}

	float buoyancy = 0.0f;
	std::cout << "Starting buoyancy system, with buoyancy " << buoyancy << std::endl;

	while (buoyancy_system(entity_registry, buoyancy)){
		// call buoyancy system again until all the floaters are at the top
	}

	std::cout << "buoyancy system complete" << std::endl;

	return EXIT_SUCCESS;
}

//
// buoyancy_system - process all "floaters"
//                - return true if entities processed, false if no entities processed
bool buoyancy_system(Registry& entity_registry, float buoyancy)
{
	// loop through the floating entities and change their y-position by [buoyancy] each time until they reach 0
	// print out their entity name, id, current-y-position, updated-y-position
	// if y < 0:
	//   std::cout << "buoyancy: " << entity_name << " " << entity_id << std::fixed << std::setprecision(2) << current_y << " " << new_y << std::endl;
	// 
	// if floater does not have a position:
	//   std::cout << "buoyancy: floater " << entity_name << " " << entity_id << " does not have a position." << std::endl;
	
	// TODO
	return false;
}

//
// load_entities - load Entities, Components, and component values from filename into entity_registry
//               - returns true if successful
bool load_entities(std::string& filename, Registry& entity_registry)
{
	std::cout << "Reading file: " << filename << std::endl;
	std::cout << "========================================" << std::endl;
	
	// TODO: load and parse entity test file
	std::ifstream entity_file(filename);

	if (entity_file.is_open())
	{
		std::string line;

		std::string action;
		std::string name;
		std::string component_name;
		float		value;

		while (!entity_file.eof())
		{
			std::getline(entity_file, line);

			// print each line (for debugging, remove for submission)
			std::cout << "LINE: " << line << line.length() << std::endl;
			
			if (line.length() > 0 && line[0] != '#')
			{
				// split the new line into their individual fields (dirty parser)
				std::stringstream ss_line(line);
				ss_line >> action >> name >> component_name >> value;
				
				// TODO: handle the "actions"
			}
		}
		
		entity_file.close();
	}
	else
	{
		std::cout << "ERROR: failed to open file: " << filename << std::endl;
		return false;
	}
	
	std::cout << "========================================" << std::endl;

	return true;
}