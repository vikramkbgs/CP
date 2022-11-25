import java.util.*;
public class b_Atilla_Favorite_Problem{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int tcase = sc.nextInt();
		while(tcase-- > 0){
			int result =0;
			int lengthStr = sc.nextInt();
			String str = sc.next();
			for(int i = 0; i<str.length(); i++){
				if(str.charAt(i) - 'a' > result)
					result = str.charAt(i) - 'a';
			}
			System.out.println(result+1);
		}
	}
}
