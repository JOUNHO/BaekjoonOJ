import java.util.Arrays;
import java.util.Scanner;

public class _11053 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int A[]=new int[n+1];
		int dp[]=new int[n+1];
		for(int i=1;i<n+1;i++) {
			A[i]=sc.nextInt();
			dp[i]=1;
		}
		
		for(int i=1;i<n+1;i++) {
			for(int j=1;j<i+1;j++) {
				if(A[j]<A[i]&&dp[i]<=dp[j]) {
					dp[i]=dp[j]+1;
				}
			}
		}
		Arrays.sort(dp);
		System.out.println(dp[n]);
	}
		
}

