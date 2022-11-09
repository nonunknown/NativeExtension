
#ifndef CLASS_HEADER_NAME_CLASS_H
#define CLASS_HEADER_NAME_CLASS_H

#ifdef WIN32
#include <windows.h>
#endif

#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/binder_common.hpp>

using namespace godot;

class CLASS_NAME : public RefCounted {
	GDCLASS(CLASS_NAME, RefCounted);

protected:
	static void _bind_methods();

public:
	CLASS_NAME();
	~CLASS_NAME();

	void start();

};

#endif