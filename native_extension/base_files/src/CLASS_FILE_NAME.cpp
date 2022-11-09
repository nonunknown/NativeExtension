#include "CLASS_FILE_NAME.h"

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;


CLASS_NAME::CLASS_NAME() {
	UtilityFunctions::print("CLASS_NAME created.");
}

CLASS_NAME::~CLASS_NAME() {
	UtilityFunctions::print("CLASS_NAME destroyed.");
}

void CLASS_NAME::start() {
	UtilityFunctions::print("Hello world");
}

void CLASS_NAME::_bind_methods() {
	ClassDB::bind_method(D_METHOD("start"), &CLASS_NAME::start);

}