import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;

class User{
    String name,password,city,hotel,date;
    int age,id,room,amount,person;
    String data;
    ArrayList<Member> m=new ArrayList<>();

    User()throws IOException{}

    public User(String name,String password,int age,int id){
        this.name=name;
        this.password=password;
        this.age=age;
        this.id=id;
    }
    @Override
    public String toString(){
        return "Name: " + name + " Password: " + password + " City: " + city + " Age: " + age;
    }

    public void storeUser() throws IOException {
        BufferedWriter w = new BufferedWriter(new FileWriter("userDetails.txt"));
        w.write(toString());
        w.close();
    }

    void fetchUser()throws IOException{
        Scanner sc=new Scanner(new File("userDetails.txt"));
        String next=null;
        while (sc.hasNextLine()) {
            next = sc.nextLine();
        }
        this.data = next;
        sc.close();
    }

    boolean verify(String name,String password)throws FileNotFoundException,NullPointerException{
        Scanner sc=new Scanner(new File("userDetails.txt"));
        String next=null;
        int isName=0,isPw=0;
        try{
            while(sc.hasNext()){
                next=sc.next();
                if(next.equals(name)){
                    isName=1;
                }
                if(next.equals(password)){
                    isPw=1;
                }
            }
        }catch(NullPointerException e){
            System.out.println("No user found.");
        }
        if(isName==1 && isPw==1)return true;

        return false;
    }

    public void fetchCity() throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("Cities.txt"));
        String next = null;
        int i = 1;
        while (scanner.hasNextLine()) {
            next = scanner.nextLine();
            System.out.println(i + ". " + next);
            i++;
        }
        scanner.close();
    }

    public void setCity(String city) {
        this.city = city;
    }

    public void setDate(String date) {
        this.date = date;
    }

    public void setRoom(int room) {
        this.room = room;
    }

    public void setPerson(int person) {
        this.person = person;
    }

    public void setHotel(String hotel) {
        this.hotel = hotel;
    }

    public void Amount() {
        if (this.city == "Jaipur") {
            this.amount = 3000;
        } else if (this.city == "Kolkata") {
            this.amount = 2000;
        } else if (this.city == "Delhi") {
            this.amount = 3400;
        } else {
            this.amount = 4000;
        }
    }
    public void otherMembers(String name, int age) throws IOException {
        m.add(new Member(name, age));
    }

    public void display() {
        for (Member x : m) {
            System.out.println(x.name + " " + x.age);
        }
    }

    public int setAmount() {
        int count = 1 + m.size();
        amount = amount * count;
        if (amount > 10000) {
            amount = amount - 1000;
        }

        return amount;
    }


}

class Member extends User {
    Member(String name, int age) throws IOException {
        super();
        this.name = name;
        this.age = age;
    }

    Member() throws IOException {
    }
}

public class Hotel{
    public static void main(String[] args)throws IOException,NullPointerException {
        Scanner sc=new Scanner(System.in);
        File file=new File("userDetails.txt");
        try{
            file.createNewFile();
        }catch(Exception e){
            e.getStackTrace();
        }
        User a=null;
        String name,password,city,nameA;
        int age,id,room,people,ageA;

        int choice=0;
        while(choice!=3){
            System.out.println("\nPlease Choose the following:");
            System.out.print("1. Register New User\n2. Login\n3. Exit\n");
            System.out.println("Option: ");
            choice = sc.nextInt();
            sc.nextLine();
            switch(choice){
                case 1:
                {
                    System.out.println("Please Enter the following Details");
                System.out.print("Name: ");
                name = sc.nextLine();
                System.out.print("Password: ");
                password = sc.nextLine();
                System.out.print("Age: ");
                age = sc.nextInt();
                System.out.print("ID: ");
                id = sc.nextInt();
                sc.nextLine();
                a = new User(name, password, age, id);

                a.storeUser();
                }
                break;

                case 2:
                {
                    System.out.println("Please Enter the following Details");

                System.out.print("Name: ");
                name = sc.nextLine();

                System.out.print("Password: ");
                password = sc.nextLine();

                if (a.verify(name, password)) {
                    System.out.println("Successfully Logged in.\n");
                    System.out.println("Please Choose the City/Hotel/Date\n");
                    a.fetchCity();
                    System.out.print("Enter the City: ");
                    city = sc.nextLine();
                    a.setCity(city);

                    a.Amount();

                    System.out.print("Enter the Hotel: ");
                    String hotel = sc.nextLine();
                    a.setHotel(hotel);

                    System.out.print("Enter the Date: ");
                    String Date = sc.nextLine();
                    a.setDate(Date);

                    System.out.print("Enter the No. of Room: ");
                    room = sc.nextInt();
                    a.setRoom(room);

                    System.out.print("Enter the No. of People: ");
                    people = sc.nextInt();
                    sc.nextLine();
                    int k = 1;

                    if (people > 1) {
                        while (people != 0) {
                            System.out.println("Enter the Details of Member #" + k);
                            System.out.print("Enter the Name: ");
                            nameA = sc.nextLine();

                            System.out.println("Enter the Age: ");
                            ageA = sc.nextInt();
                            sc.nextLine();

                            a.otherMembers(nameA, ageA);
                            people--;
                            k++;
                        }

                        System.out.println("Final Details are: ");
                        System.out.println("User Name: " + a.name + "\nUser Age" + a.age);
                        System.out.println("City: " + a.city + "\nHotel: " + a.hotel + "\nDate: " + a.date);
                        System.out.println("Other Members: ");
                        a.display();
                    } else if (people == 1) {
                        System.out.println("Final Details are: ");
                        System.out.println("User Name: " + a.name + "\nUser Age" + a.age);
                        System.out.println("City: " + a.city + "\nHotel: " + a.hotel + "\nDate: " + a.date);
                    }
                    a.setAmount();
                    System.out.println("The Total Amount is: " + a.amount);

                } else {

                    System.out.println("USER NOT FOUND.\nEITHER NOT REGISTERED OR INCORRECT CREDENTIALS\n.");
                }
            }
                break;

                case 3:
                System.out.println("Exiting..");
                break;

                default:
                System.out.println("Invalid Option");
                break;
            }
        }
    }
}
