import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int h, m;
		
		h=sc.nextInt();
		m=sc.nextInt();
		
		if (m>=45) System.out.println(h+" "+(m-45));
		else {
			if (h==0) h=23;
			else h--;
			System.out.println(h+" "+(60-45+m));
		}
	}

}