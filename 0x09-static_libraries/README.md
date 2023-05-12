0x09. C - Static libraries

Static libraries are collections of object files that are linked directly into a program, while dynamic libraries are separate files that are loaded into memory at runtime and linked to a program. Static libraries are self-contained and independent of any other libraries, while dynamic libraries allow code to be shared by multiple programs.

TASKS:

[0. A library is not a luxury but one of the necessities of life](libmy.a)

Create the static library libmy.a containing all the functions listed below:
If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.

[1. Without libraries what have we? We have no past and no future](create_static_lib.sh)

Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
