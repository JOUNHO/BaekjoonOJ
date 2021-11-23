import java.util.Scanner;

public class _9095 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int result[]=new int[n];
		int solve;
		int count=0;
		for(int j=0;j<n;j++) {
			solve=sc.nextInt();
			int array[]=new int[solve];
			array[0]=1;
			if(solve>1)
			array[1]=2;
			if(solve>2)
			array[2]=4;
			for(int i=3;i<solve;i++) {
				array[i]=array[i-1]+array[i-2]+array[i-3];
			}
			result[count++]=array[solve-1];
		}
		for(int i=0;i<n;i++) {
			System.out.println(result[i]);
		}
	}
}
