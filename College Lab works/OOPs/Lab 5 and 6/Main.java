public class Parent {

    void show()

    {

        System.out.println("Parent Class Method");

    }

}



class Child extends Parent {

    @Override

    void show()

    {

        System.out.println("Child class Method");

    }

}



public class Main {

    public static void main(String[] args)

    {

        Parent obj1 = new Parent();

        obj1.show();



        Parent obj2 = new Child();

        obj2.show();

    }

}
