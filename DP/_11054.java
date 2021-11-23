import java.util.Scanner;

public class _11054 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n+1];
		int dp[][]=new int[3][n+1];
		int max=0;
		for(int i=1;i<n+1;i++) {
			a[i]=sc.nextInt();
			dp[1][i]=1;
			dp[2][i]=1;
		}
		
		for(int i=1;i<n+1;i++) {
			for(int j=1;j<i;j++) {
				if(a[j]<a[i]) {
					dp[1][i]=Math.max(dp[1][j]+1,dp[1][i]);
				}
				if(a[n+1-j]<a[n+1-i]) {
					dp[2][n+1-i]=Math.max(dp[2][n+1-j]+1,dp[2][n+1-i]);
				}
				}
			}
		for(int i=1;i<n+1;i++) {
			if(max<dp[1][i]+dp[2][i])
			max=dp[1][i]+dp[2][i];
		}
		System.out.println(max-1);
		}

	}