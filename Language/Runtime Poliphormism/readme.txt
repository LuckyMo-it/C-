---RUNTIME POLYPHORMISM:
    POLYPHORMISM is code you write once and can reuse with differnet types which makes code more maintainable and readable.



---INTERFACE:
    inteface is  a shared boundary taht contains no data or code.

---Object Compostion:
    is a design pattern where a class contains members of other class types.

-----VIRTUAL KEYWORD-----
    if you want to permit a derived class to override a base class's method you use the virtual keyword.


    if grandparent parent class has some member and it have two child then they inherit grandparent member indivisually this will create ambiguity for grand child class.to get rid of this ambiguity we declare parents as virtual class.

    grandparent{};
    parent1{}:virtual public grand parent;
    parent2{}:virtual public grand parent;
    child {}; public parent1, public parent2;

--PURE VIRTUAL CLASS :  
    if we add suffix "=0" in method then class that containing that method become abstract class which can only use to inherit and not be instanciated any derived class can override pure virtual class.
     
