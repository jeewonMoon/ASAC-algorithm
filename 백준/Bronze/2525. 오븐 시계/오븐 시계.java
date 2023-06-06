import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        int time;

        a=sc.nextInt();
        b=sc.nextInt();
        c=sc.nextInt();

        time=(b+c)/60;
        if (b+c>=60) {
            if (a+time>=24) {
                System.out.println((a+time-24)+" "+(b+c-60*time));
            }
            else System.out.println((a+time)+" "+(b+c-60*time));
        }
        else {
            System.out.println(a+" "+(b+c));
        }
    }

}