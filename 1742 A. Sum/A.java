import java.util.*;

public class A{
	
	public static void main(String args[]){
		
		Scanner s = new Scanner(System.in);
		// test case input
		int tcase = s.nextInt();

		for(int i = 0; i<tcase; i++){
			int a = s.nextInt();
			int b = s.nextInt();
			int c = s.nextInt();
			
			// finding greatest number
			int max = (a>b)?((a>c)?a:c):((b>c)?b:c);
			
			// if (a+b+c)-max  is equal max then possible problem result
			boolean flag = ((a+b+c) - max) == max;
			
			if(flag)
			System.out.println("Yes");
			else
			System.out.println("No");
		}
	}
}