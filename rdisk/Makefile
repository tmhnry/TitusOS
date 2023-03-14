all:
	#	nasm -f elf32 file.asm
	#	gcc -m32 main.c file.o -o main
	nasm -f bin ./file.asm -o ./file.bin
	# To use terminal instead of SDL:
	# https://stackoverflow.com/questions/6710555/how-to-use-qemu-to-run-a-non-gui-os-on-the-terminal
	dd if=./message.txt >> ./file.bin
	dd if=/dev/zero bs=512 count=1 >> ./file.bin
	qemu-system-x86_64 -nographic -hda ./file.bin

bless:
	nasm -f bin ./file.asm -o ./file.bin
	dd if=./message.txt >> ./file.bin
	dd if=/dev/zero bs=512 count=1 >> ./file.bin
	bless ./file.bin

asm:
	nasm -f elf32 file.asm
	gcc -m32 main.c file.o -o main.asm -S -O0

clean:
	rm -f main file.o file.bin main.asm
