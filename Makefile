run-pig_dice_game: build-pig_dice_game
	./target/pig_dice_game.out

run-random: build-random
	./target/random.out

run-pointer: build-pointer
	./target/poitners.out

build-pig_dice_game:
	mkdir -p target
	g++ ./pig_dice_game.cpp -o target/pig_dice_game.out

build-random:
	mkdir -p target
	g++ ./random.cpp -o target/random.out

build-pointer:
	mkdir -p target
	g++ ./pointers.cpp -o target/poitners.out

