import java.util.Arrays;
import java.util.Scanner;

public class _11057 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		long array[][]=new long[n+1][10];
		long result=0;
		for(int p=0;p<10;p++) {
			array[0][p]=1;
		}
		
		
		for(int i=1;i<n;i++) {
			for(int j=0;j<10;j++) {
				for(int k=j;k<10;k++) {
					array[i][j]=(array[i][j]+array[i-1][k])%10007;
				}
			}
		}
		for(int i=0;i<10;i++) {
			result=(result+array[n-1][i])%10007;
		}
		System.out.println(result);
	}

}
