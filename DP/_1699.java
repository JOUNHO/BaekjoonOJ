import java.util.Scanner;

public class _1699 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n+1];
		int dp[]=new int[n+1];
		for(int i=1;i<n+1;i++) {
			a[i]=i;
			dp[i]=i;
		}
		for(int i=1;i<n+1;i++) {
			for(int j=1;j*j<=i;j++) {
				dp[i]=Math.min(dp[i-j*j]+1, dp[i]);
			}
		}
		System.out.println(dp[n]);
		
	}

}
