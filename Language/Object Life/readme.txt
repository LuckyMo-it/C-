----STATIC MEMBER

    static member are shared by all instances of classe

    you have to initialize static data member globally
        int class_name::member=90;
    
    Static method of class can be invoked by without object 
        int main()
        {
            class_name::method();
        }
        