add_executable(example_ms_asan_alloc_dealloc_mismatch)

target_sources(example_ms_asan_alloc_dealloc_mismatch
	PRIVATE
		example1.cpp)

target_compile_options(example_ms_asan_alloc_dealloc_mismatch
	PRIVATE
		/fsanitize=address /Zi)
