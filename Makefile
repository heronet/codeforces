run:
	@clang++ -std=c++20 $(x) -o ex && ./ex
rust:
	@rustc $(x) -o ex && ./ex
