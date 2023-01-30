// ################################## Why C++? #####################################
// i. Closer to hardware.
// => We can instruct or compel hardware to perform exact operations that we desire.

// ii. Vitality for performance-critical applications that need speed and effective memory management.
// => Software development, game development, virtual reality, robotics and scientific computing.

// ################################ Traits of C++ ##################################
// FAST PROGRAMS, MORE CONTROL OVER HARDWARE/SYSTEM RESOURCES, and EFFECTIVE MEMORY MANAGEMENT.

// ###################### C++ -- Intermediate Level Language #######################
// C++ is an "intermediate-level" language, meaning that it facilitates "high-level" programming
// -- i.e., in the abstract -- ad "low-level" programming of actual hardware.

// However, C++ is still considered a high-level language, but with the appearance of newer languages 
// -- (Java, C#, Ruby etc...) --, C++ is beginning to be grouped with lower level languages like C.

// ################################### SCOPE #######################################
// When we declare a program element such as a class, function, or variable, its name can only be "seen" 
// ..and "used" in certain parts of our program. The context in which a name is visible is called its scope.

// ################################# NAMESPACE #####################################
// i. A namespace is a declarative region that provides a scope to the identifiers (the names of types, 
// ..functions, variables, etc) inside it.

// ii. Namespaces are used to organize code into logical groups and to prevent name collisions that can 
// occur especially when your code base includes multiple libraries.

// ############################# Need of NAMESPACE? ################################
// As the same name can’t be given to multiple variables, functions, classes, etc. in the same scope.
// ..So to overcome this situation NAMESPACE is introduced.


// Local variables always take precedence over the global ones.

#include <iostream>
using namespace std;

int glo = 100;

void print_glo() 
{
    // int glo = 1972;
    cout << "`glo` from the local scope of the `print_glo` (if there) or the global scope, whatsoever: " 
    << glo << endl;
}


int main() {
    int glo = 26;  // Declared local variable `glo`
    glo = 1999;  
    // => Update `glo`, got two options -- search glo in the local scope and update it (if there),
    // ..or update the `glo` from the global scope (if there).   

    cout << "`glo` from the main's scope: " << glo << endl;
    
    print_glo();  // Function that prints `glo`
    // => Print glo from the local scope of the `print_glo` if there else print out the global `glo`!
    // Got nothing to do with the scope of the `main()` anywhichway! 

    cout << "\nGlobal variant of `glo` (accessed by SCOPE RESOLUTION operator -- `::`): " << ::glo << endl; 
    // Eventually, We'd wanna access the global val of `glo`, for that, we could use 
    // ..SCOPE RESOLUTION operator i.e. "::"

    return 0;
}