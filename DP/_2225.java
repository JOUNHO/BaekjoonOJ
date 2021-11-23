import java.util.Scanner;

public class _2225 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int k=sc.nextInt();
		int dp[][]=new int[201][201];
		
		for(int i=1;i<k+1;i++) {
			dp[i][1]=i;
		}
		for(int i=2;i<n+1;i++) {
			for(int j=1;j<k+1;j++) {
				dp[j][i]=(dp[j-1][i]+dp[j][i-1])%1000000000;
			}
		}
		System.out.println(dp[k][n]);
	}

}
