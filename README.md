va_list 
va_list is a type defind in the standar C library <stdarg.h>
it is typically a pointer to a structure that hold information about the argement passed to function that use a variable number of argumments 

why not desclaration => va_list *ap ??
the va_list type is already defined as a pointer type

so as i was saying the va_list ap this creates a va_list variable named ap which is a pointer to the structur that helod the variable argument list , you can pass this 
variable to function like va_start / va_arg and va end to access the individual orgument in the list .

u can tchek :
![Screenshot 2024-11-15 153557](https://github.com/user-attachments/assets/46fda061-a070-4fa1-83cd-6b0f4f341480)

