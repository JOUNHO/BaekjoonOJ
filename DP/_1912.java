import java.util.Arrays;
import java.util.Scanner;

public class _1912 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc =new Scanner(System.in);
		
		int n=sc.nextInt();
		int a[]=new int[n];
		int dp[]=new int[n];
		for(int i=0;i<n;i++) {
			a[i]=sc.nextInt();
		}
		dp[0]=a[0];

		for(int i=1;i<n;i++) {
			if(dp[i-1]<0) {
				dp[i]=a[i];
			}
			else
			dp[i]=dp[i-1]+a[i];

		}
		Arrays.sort(dp);
		System.out.println(dp[n-1]);
	}

}

