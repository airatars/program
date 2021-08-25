import java.util.*;

public class MyClass{
    public static void main(String[] args){

        class User {
            int age;
            String name;

            public boolean hasAcsses(){
                if (age >= 18){
                    return true;
                }else {
                    return false;
                }
            }

            public void hiUser(){
                if (hasAcsses()){
                    System.out.println("Hello, " + name + ", access is allowed");
                }else {
                    System.out.println("Hello, " + name + " access denied");
                }
            }

        }

        User marine = new User();
        marine.age = 18;
        marine.name = "Marine";

        User lexa = new User();
        lexa.age = 15;
        lexa.name = "Alex";

        marine.hiUser();
        lexa.hiUser();



        /*class Customer {
            int amount;
            String name;

            public boolean hasDiscount(){
                if (amount >= 1000){
                    return true;
                }else {
                    return false;
                }
            }

            public void helloCustomer(){
                if (hasDiscount()){
                    System.out.println("Hello, " + name + ", you have 30% discount!");
                }else {
                    System.out.println("Hello, " + name + "!");
                }
            }
        }

        Customer jack = new Customer();
        jack.amount = 1000;
        jack.name = "Jack";

        Customer joe = new Customer();
        joe.amount = 500;
        joe.name = "Joe";

        System.out.println(jack.hasDiscount());
        System.out.println(joe.hasDiscount());

        System.out.println("------------------------------");

        jack.helloCustomer();
        joe.helloCustomer();
         */



        /*ArrayList <String> goodsNames = new ArrayList();
        goodsNames.add("Guitar");
        goodsNames.add("Drum");
        goodsNames.add("Keyboard");

        for (String goodsName : goodsNames){
            System.out.println("--------------------------------");
            System.out.println(goodsName);
        }

        System.out.println("--------------------------------");

        for (int x=1; x<=10; x++){
            System.out.println("7 * " + x + " = " + 7 * x);
        }

        ArrayList <String> names = new ArrayList();
        names.add("Airat");
        names.add("Aliya");
        names.add("Anna");
        names.add("Alex");

        for (String name : names){
            if (name.equals("Airat")){
                System.out.println("Your name is " + name);
            }
        }
        */
    }
}