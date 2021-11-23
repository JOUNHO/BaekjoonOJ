import java.util.Scanner;

public class _10844 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int N=sc.nextInt();
		long dp[][]=new long[N+1][10];
		long result=0;
		for(int i=1;i<10;i++) {
			dp[1][i]=1;
		}
		
		for(int j=2;j<=N;j++) {
			for(int k=0;k<10;k++) {
				if(k==0) {
					dp[j][k]=dp[j-1][1]%1000000000;
				}
				else if(k==9) {
					dp[j][k]=dp[j-1][8]%1000000000;
				}
				else {
					dp[j][k]=(dp[j-1][k-1]+dp[j-1][k+1])%1000000000;
				}
			}
		}
		for(int i=0;i<10;i++) {
			result+=dp[N][i];
		}
		System.out.println(result%1000000000);	
	}

}

