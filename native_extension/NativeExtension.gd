@tool
extends EditorPlugin

var path_to_native:String = ""
const FOLDER_NATIVE := "NativeExtension"

func _enter_tree() -> void:
	_configure_native_path()
	pass


func _exit_tree() -> void:
	# Clean-up of the plugin goes here.
	pass


func _configure_native_path() -> void:
	print("Configuring native path....")
	var dir := DirAccess.open(ProjectSettings.globalize_path("user://"))
	dir.change_dir("../") # Go back to app_userdata
	
	print("checking for native folder...")
	if  not dir.dir_exists(FOLDER_NATIVE):
		var err = dir.make_dir(dir.get_current_dir() + "/%s" % FOLDER_NATIVE)
		if err != OK: 
			printerr("Failed creating %s folder, errno: %d - Fix it and reload the plugin!" % [FOLDER_NATIVE, err])
			return
	
	print("native folder found")
	
	dir.change_dir(FOLDER_NATIVE)
	print(dir.get_current_dir())
	
	pass
