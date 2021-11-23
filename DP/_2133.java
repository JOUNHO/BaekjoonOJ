import java.util.Scanner;

public class _2133 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		
		int n=sc.nextInt();
		int dp[]=new int[n+1];
		dp[0]=1;
		
		for(int i=2;i<n+1;i=i+2) {
			dp[i]=dp[i-2]*3;
			for(int j=0;j<i-2;j=j+2) {
				dp[i]=dp[i]+dp[j]*2;
			}
		}
		System.out.println(dp[n]);
	}

}
