import java.util.Arrays;
import java.util.Scanner;

public class _11055 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n+1];
		int dp[]=new int[n+1];
		for(int i=1;i<n+1;i++) {
			a[i]=sc.nextInt();
		}

		for(int i=1;i<n+1;i++) {
			dp[i]=a[i];
			for(int j=1;j<i;j++) {
				if(a[j]<a[i]) {
					dp[i]=Math.max(a[i]+dp[j], dp[i]);
				}
			}
		}
		
		Arrays.sort(dp);
		System.out.println(dp[n]);
	}

}

