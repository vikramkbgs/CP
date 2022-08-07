/**
 * minimum square
 */
import java.util.Scanner;
public class minimumSquare {

	public static void main(String args[])
	{		
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		
		int i =0;
		while(i < n)
		{
			int l = s.nextInt();
			int b = s.nextInt();
			
			if(l < b)
			{
				if(2*l < b)
				System.out.println((2*l)*(2*l));
				else
				System.out.println(b*b);		
			}
			else
			{
				if(2*b < l)
				System.out.println((2*b)*(2*b));
				else
				System.out.println(l*l);
			}
		}
	}
}