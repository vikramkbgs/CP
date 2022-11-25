import java.util.*;
public class A_Medium_Number{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int tcase = sc.nextInt();
		while(tcase-- > 0){
			int a = sc.nextInt();
			int b = sc.nextInt();
			int c = sc.nextInt();
			int[] hash = new int[21];
			
			hash[a] = 1;
			hash[b] = 1;
			hash[c] = 1;
			
			int count = 0;
			for(int i = 0; i<=20;i++){
				if(hash[i] == 1)
				count++;
				
				if(count >1){
				System.out.println(i);
				break;
				}
			}
		}
	}
}