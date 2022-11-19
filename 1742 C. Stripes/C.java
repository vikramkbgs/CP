import java.util.*;

public class C{
	
	public static void main(String args[]){
	
	Scanner s = new Scanner(System.in);
	
	int tcase = s.nextInt();
	
	while(tcase > 0){
	char [][] grid = new char[8][8];
	for(int i = 0; i<8; i++){
		for(int j=0; j<8; j++){
		grid[i][j] = s.next().charAt(0);
		}
	}

	int Red = 0;
	int Blue = 0;
	int countRed;
	int countBlue;
	
	// checking row wise red and blue color
	for(int i = 0; i<8; i++){
		
		countRed = 0;
		countBlue = 0;

		for(int j = 0; j<8; j++){
		if(grid[i][j] == 'R')
		countRed++;
		else if(grid[i][j] =='B')
		countBlue++;
		}

		if(Red < countRed)
		Red = countRed;
		if(Blue <countBlue)
		Blue = countBlue;	
	}
	
	// checking column wise red and blue color
	for(int i = 0; i<8; i++){
		
		countRed = 0;
		countBlue = 0;

		for(int j = 0; j<8; j++){
		if(grid[j][i] == 'R')
		countRed++;
		else if(grid[j][i] =='B')
		countBlue++;
		}

		if(Red < countRed)
		Red = countRed;
		if(Blue <countBlue)
		Blue = countBlue;	
	}

	if(Red > Blue)
	System.out.println("R");
	else
	System.out.println("B");
	}
	tcase--;
	}
}