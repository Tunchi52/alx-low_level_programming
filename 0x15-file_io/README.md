/O - C PROGRAMMING LANGUAGE

A file represents a sequence of bytes, regardless of it being a text file or a binary file. C programming language provides access on high level functions as well as low level (OS level) calls to handle file on your storage devices.

Every input and out devices are treated as files in UNIX/Linux based operating system. Every device input/output is mapped to a file descriptor mapped to a file descriptor table known as **Standard Streams**.

Standard Streams are interconnected input and output communication channels between a computer program and its environment (Operating System) when it begins execution. The three input/output (I/O) connections are called standard input (stdin), standard output (stdout) and standard error (stderr). Originally I/O happened via a physically connected system console (input via keyboard, output via monitor), but standard streams abstract this. When a command is executed via an interactive shell, the streams are typically connected to the text terminal on which the shell is running, but can be changed with redirection or a pipeline. More generally, a child process inherits the standard streams of its parent process.

Every UNIX process have 3 standard POSIX file descriptors corresponding to the three standard streams:

|Integer Value | Name | Symbolic Constant `unistd.h`|file stream `stdio.h`|
|---|---|---|---|
|0 |Standard Input | STDIN_FILENO | stdin |
|1 |Standard Output | STDOUT_FILENO | stdou |
|2 |Standard Error | STDERR_FILENO | stderr |

A System call is a programmatic way in which a Computer program requests a service from its evironment (Operating System) on which it is executed. The service requested by the C program could be a function provided by the kernel which executes and returns its output to the calling program.

In  this topic, we will deal with 5 different functions or system calls.

- `open()`
- `read()`
- `write()`
- `close()`
- `dprintf()`

## `open()`

This function make a system call to open a file in a specified directory.If the file does not exist, it creates the file depending on the `oflag` specified or else it will go ahead and throw an exception.

The syntax for the `open()` function is:

```c
int open(const char *path, int flag[, int mode]);

/* example */

#include <fcntl.h>

int main(void)
{
        int fildir open("foo/bar.txt", O_RDWR);

        // some codes
        return (0);
}
```

`path` - string containing the file location to open, create, read from, or write to.
`flag` - includes the following
| Flag | Operations |
|---|---|
|O_RDONLY |Opens a file in Read Only mode |
|O_WRONLY |Opens a file in Write Only mode |
|O_RDWR |Opens a file in Read/Write mode |
|O_CREAT |If specified, creates a file if that specified file does not exist in the location |
|O_APPEND |Opens a file in append mode. Adds text to the end of a file|
|O_EXCL |This prevents file re-creation if it already exists. |

> **Note**: *these flags are defined in the `fcntl.h` header file.*

## `read()`

This function attempts to read specified size of data from a specified file descriptor into a buffer starting at `buf`.

The syntax for the `read()` function is:

```c
#include <unistd.h>
#include <fcntl.h>

ssize_t read(int fd, void *buf, size_t count);
```

## `write()`

This function attempts to write nbytes from the buffer pointed to by the `buf` to the file associated with the file descriptor.

The syntax for the `write()` function is:

```c
int read(int fd, void *buf, size_t count);

/* example */


#include <unistd.h>
#include <fcntl.h>
int main(void)
{
        int xy;
        int fildir open("foo/bar.txt", O_RDWR);
        xy = write(fildir, "Hello World", strlen("Hello World"));

        // some codes
        return (0);
}
```

## `close()`

This function deallocates the file indicated by the file descriptor.

The syntax for the `close()` function is:

```c
close(fildir);
```

## `dprintf()`

The `dprintf()` function writes output to the file associated with the file descriptor fildir , under control of the format specifier rather than displaying the output to the standard output file or device.

The syntax for the `dprintf()` function is:

```c
int dprintf(int fd, const char *format, ...);

// or 

int dprintf(int fildes, const char *restrict format, ...);
```

---

