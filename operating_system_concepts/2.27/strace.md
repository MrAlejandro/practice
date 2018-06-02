```bash
ubuntu@ubuntu-VirtualBox:~$ strace ./copy from to
execve("./copy", ["./copy", "from", "to"], [/* 40 vars */]) = 0
brk(0)                                  = 0x8079000
access("/etc/ld.so.nohwcap", F_OK)      = -1 ENOENT (No such file or directory)
mmap2(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0xb7871000
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory)
open("/etc/ld.so.cache", O_RDONLY)      = 3
fstat64(3, {st_mode=S_IFREG|0644, st_size=54828, ...}) = 0
mmap2(NULL, 54828, PROT_READ, MAP_PRIVATE, 3, 0) = 0xb7863000
close(3)                                = 0
access("/etc/ld.so.nohwcap", F_OK)      = -1 ENOENT (No such file or directory)
open("/lib/i386-linux-gnu/libc.so.6", O_RDONLY) = 3
read(3, "\177ELF\1\1\1\0\0\0\0\0\0\0\0\0\3\0\3\0\1\0\0\0\220o\1\0004\0\0\0"..., 512) = 512
fstat64(3, {st_mode=S_IFREG|0755, st_size=1434180, ...}) = 0
mmap2(NULL, 1444360, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x110000
mprotect(0x26a000, 4096, PROT_NONE)     = 0
mmap2(0x26b000, 12288, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x15a) = 0x26b000
mmap2(0x26e000, 10760, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x26e000
close(3)                                = 0
mmap2(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0xb7862000
set_thread_area({entry_number:-1 -> 6, base_addr:0xb78628d0, limit:1048575, seg_32bit:1, contents:0, read_exec_only:0, limit_in_pages:1, seg_not_present:0, useable:1}) = 0
mprotect(0x26b000, 8192, PROT_READ)     = 0
mprotect(0x8049000, 4096, PROT_READ)    = 0
mprotect(0xa06000, 4096, PROT_READ)     = 0
munmap(0xb7863000, 54828)               = 0
brk(0)                                  = 0x8079000
brk(0x809a000)                          = 0x809a000
open("from", O_RDONLY)                  = 3
open("to", O_WRONLY|O_CREAT|O_TRUNC, 0666) = 4
fstat64(3, {st_mode=S_IFREG|0644, st_size=34, ...}) = 0
mmap2(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0xb7870000
read(3, "first line\nsecond line\nthird lin"..., 4096) = 34
fstat64(4, {st_mode=S_IFREG|0644, st_size=0, ...}) = 0
mmap2(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0xb786f000
read(3, "", 4096)                       = 0
write(4, "first line\nsecond line\nthird lin"..., 34) = 34
exit_group(0)                           = ?
ubuntu@ubuntu-VirtualBox:~$ 
```
