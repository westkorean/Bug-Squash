//We want the subclass 'Dog' to overide speak(), but we can't. How can we fix this code so it can?

class Animal {
    void speak() {
        System.out.println("Animal speaks");
    }
}

class Dog extends Animal {
    void Speak() {
        System.out.println("Dog barks");
    }
}