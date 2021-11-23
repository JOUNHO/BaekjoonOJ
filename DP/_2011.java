import java.util.Scanner;

public class _2011 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		String s=sc.next();
		long a[]=new long[s.length()+1];
		long dp[]=new long[s.length()+1];
		for(int i=0;i<s.length();i++) {
			a[i+1]=Integer.parseInt(s.substring(i,i+1));
		}
		
		if(a[1]==0) {
			System.out.println(0);
			return ;
		}
		dp[0]=1;
		dp[1]=1;
		for(int i=2;i<s.length()+1;i++) {
			if(a[i]>0&&a[i]<10){
				dp[i]=dp[i-1]%1000000;
			}
			if((a[i-1]==1&&a[i]>=0&&a[i]<10)||(a[i-1]==2&&a[i]>=0&&a[i]<7)) {
				dp[i]=(dp[i]+dp[i-2])%1000000;
			}

			
			dp[i]=dp[i]%1000000;
	
		}
			System.out.println(dp[s.length()]%1000000);


	}
}
