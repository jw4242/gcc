// { dg-do compile { target c++11 } }

void (*a)(auto b = c()); // { dg-error "parameter declaration|depend on a template|undeclared name|not declared|default arguments|typeless expression|implicit template" }
