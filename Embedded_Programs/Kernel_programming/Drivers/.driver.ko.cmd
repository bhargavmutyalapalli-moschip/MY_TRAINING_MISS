cmd_/home/engineer/Documents/testing/driver.ko := ld -r -m elf_x86_64 -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o /home/engineer/Documents/testing/driver.ko /home/engineer/Documents/testing/driver.o /home/engineer/Documents/testing/driver.mod.o;  true