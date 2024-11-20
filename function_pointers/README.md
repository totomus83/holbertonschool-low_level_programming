explication, function pointers:

We have a function, like void makePizza() that makes a pizza.
We create a function pointer, like void (*f)(), which is our remote control. It says, “I can point to any function that doesn’t take any ingredients and doesn’t return anything, just like makePizza().”


You can point the remote control (function pointer f) to makePizza() in two ways:

f = makePizza; → We tell the remote control to point to the makePizza machine.
f = &makePizza; → This is like saying, “Hey, remote control, here’s the address of the makePizza machine.”
