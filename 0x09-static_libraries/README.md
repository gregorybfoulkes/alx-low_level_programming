# C - Static Libraries

## Technologies

  * GNU, bash, version 5.0.17(1)
  * C files compiled using gcc 9.4.0
  * Tested on Ubuntu 20.4 LTS

## Files

All of the following files are small programs written in C:

| ***Filename*** | ***Description*** |
|----------------|-------------------|
|[libmy.a](libmy.a) [main.h](main.h)| Created a static library `libmy.a` from prototypes of functions contained in `main.h` file. |
|[create_static_lib.sh](create_static_lib.sh)| A script `create_static_lib.sh` that craetes a static library called `liball.a` from all the `.c` files present in the current directory. |
