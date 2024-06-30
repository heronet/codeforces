run:
	@clang++ $(x) -o ex && ./ex
rust:
	@rustc $(x) -o ex && ./ex
