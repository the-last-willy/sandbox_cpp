cl example1.cpp /fsanitize=address /Zi
set ASAN_OPTIONS=alloc_dealloc_mismatch=1
devenv /debugexe example1.exe 2
